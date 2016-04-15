
print("start ...")


function deal_role (x ,y)
	local p1 = Role:Change(x)
	local p2 = Role:Change(y)
	local o_ = TestClass:MakeObj(3,4)
	local num = o_:LvAdd(p1 , p2)
	print(" ###" , num , x , y)
end

print("Function test OK")