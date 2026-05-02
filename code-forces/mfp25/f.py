n = int(input())
  
for i in range(n):
    k1, k2, k3 = map(int, input().split())
  
    if k1 == k2 and k1 != k3 and k2 != k3:
        print(k3)
    elif k2 == k3 and k2 != k1 and k3 != k1:
        print(k1)
    else:
        print(k2)