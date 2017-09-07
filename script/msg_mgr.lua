
function trace (event, line)
    local s = debug.getinfo(2).short_src
    print(s .. ":##########" .. line)
end
--debug.sethook(trace, "l")
package.path = package.path ..';../script/?.lua;../script/protobuf/?.lua;../script/proto/?.lua'


local msg_dealer = require("msg_dealer")
local gslib = require("gslib")

function deal_role (x ,y)
	local p1 = Role:Change(x)
	local p2 = Role:Change(y)
	local o_ = TestClass:MakeObj(3,4)
	local num = o_:LvAdd(p1 , p2)
	print(" ###" , num , x , y)
end


local g_MsgID2Fun = { [14] = msg_dealer.d_gm }
function deal_msg (nMsgID , str_)
	print ( "#####" , debug.getinfo(1).name , debug.getinfo(1).currentline )
	local pFun = g_MsgID2Fun[nMsgID]
	if pFun == nil then
		print("not find msg id")
		return
	end
	pFun(str_)
	
	print ( "#####" , debug.getinfo(1).name , debug.getinfo(1).currentline )
end


function test1 ()
	local pRole = gslib.FindRole("hbb")
	if pRole == nil then
		print("error")
		return
	end
	pRole:SetLV(10)
end


--debug.sethook()












