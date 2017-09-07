
msg_dealer = {}

local function trace (event, line)
    local s = debug.getinfo(2).short_src
    print(s .. ":##########" .. line)
end
--debug.sethook(trace, "l")

local gslib = require("gslib")
local client_pb = require("client_pb")



function string:split(sep)  
    local sep, fields = sep or ":", {}  
    local pattern = string.format("([^%s]+)", sep)  
    self:gsub(pattern, function (c) fields[#fields + 1] = c end)  
    return fields  
end 

function msg_dealer.d_gm(str_)
	--gm 协议
	local oProto = client_pb.gm_operation_req()
	oProto:ParseFromString(str_)
	local str_cmd = oProto.cmd
	print("msg content:" , str_cmd)
	local listRet = str_cmd:split(":")
	
	--区分类型
	for k,v in pairs(listRet) do
		if string.sub(v , 1,1) ~= "'" then
			listRet[k] = tonumber(v)
		else
			listRet[k] = string.sub(v , 2, -2)
		end
	end	
	
	local pRole = gslib.FindRole(listRet[1])
	if pRole == nil then
		print("error")
		return
	end
	
	local strFunName = listRet[3]
	for k,v in pairs(Role) do
		if k == strFunName then
			--选择_并调用成员函数
			local nArgNum = #listRet
			if nArgNum == 4 then
				v(pRole, listRet[4])
			elseif nArgNum == 5 then
				v(pRole, listRet[4] , listRet[5])
			elseif nArgNum == 6 then
				v(pRole, listRet[4] , listRet[5] , listRet[6])
			elseif nArgNum == 7 then
				v(pRole, listRet[4] , listRet[5] , listRet[6] , listRet[7] )
			elseif nArgNum == 8 then
				v(pRole, listRet[4] , listRet[5] , listRet[6] , listRet[7], listRet[8])
			end
			break
		end
	end
end

--debug.sethook()
return msg_dealer















