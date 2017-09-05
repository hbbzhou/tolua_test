
local str_file = "tfunction.lua"
print ( "##begin###" , str_file)

function StrFind(str_src , str_dst)
	for i_ = 1 , #str_src do
		local end_i = i_ + #str_dst - 1
		if end_i > #str_src then
			return 0
		end
		
		local b_ok = true
		for key_i = 1 , #str_dst do
			local begin_i = i_ + key_i - 1;
			if string.sub(str_src , begin_i , begin_i) ~= string.sub(str_dst , key_i , key_i ) then
				b_ok = false
				break;
			end
		end
		
		if b_ok == true then
			return i_
		end
	end
	return 0
end

if StrFind(package.path , ';..\\script\\?.lua' ) == 0 then
	package.path = package.path ..';..\\script\\?.lua'
end

local msg_dealer = require("msg_dealer")
local gslib = require("gslib")

function deal_role (x ,y)
	local p1 = Role:Change(x)
	local p2 = Role:Change(y)
	local o_ = TestClass:MakeObj(3,4)
	local num = o_:LvAdd(p1 , p2)
	print(" ###" , num , x , y)
end


--初始化全局变量
local g_MsgID2Fun = { [1] = msg_dealer.d_gm }

function deal_msg (nMsgID , str_)
	--协议注册
	print ( "#####" , str_file ,debug.getinfo(1).currentline )
	local pFun = g_MsgID2Fun[nMsgID]
	if pFun == nil then
		print("not find msg id")
		return
	end
	
	pFun(str_)
	print ( "#####" , str_file ,debug.getinfo(1).currentline )
end

print ( "##end###" , str_file)


