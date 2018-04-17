num1 = input()
num2 = input()

if(int(num1.replace('0',''))+int(num2.replace('0','')) == int(str((int(num1)+int(num2))).replace('0',''))):
    print("YES")
else:
    print("NO")
