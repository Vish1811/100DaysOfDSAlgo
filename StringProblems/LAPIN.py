from collections import Counter
for _ in range(int(input())):
    s = list(map(str,input())) 
    l = len(s)//2
    if len(s)%2 == 0 and Counter(s[0:l]) == Counter(s[l:]):
        print("YES") 
    elif len(s)%2 != 0 and Counter(s[0:l]) == Counter(s[l+1:]):
        print("YES")
    else:
        print("NO")