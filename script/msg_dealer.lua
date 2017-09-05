
msg_dealer = {}

local gslib = require("gslib")

function string:split(sep)  
    local sep, fields = sep or ":", {}  
    local pattern = string.format("([^%s]+)", sep)  
    self:gsub(pattern, function (c) fields[#fields + 1] = c end)  
    return fields  
end 

function msg_dealer.d_gm(str_)
	--gm Э��
	print("msg content:" , str_)
	local listRet = str_:split(":")
	local pRole = gslib.FindRole(listRet[1])
	if pRole == nil then
		print("error")
		return
	end
	
	local strFunName = listRet[3]
	local nP1 = tonumber(listRet[4])
	for k,v in pairs(Role) do
		if k == strFunName then
			--ѡ��_�����ó�Ա����
			v(pRole, nP1)
		end
	end
end

return msg_dealer















