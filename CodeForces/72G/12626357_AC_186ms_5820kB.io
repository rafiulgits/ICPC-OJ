number := File standardInput readLine asNumber

f0 := 0
f1 := 1
f2 := 1

for(index, 2, number,
  
    f0 := f1;
    f1 := f2;
    f2 := f0+f1
)
f2 println
