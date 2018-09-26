T=int(input())
N=[]

# import time
for i in range(T):
    # print(i)
    N.append(int(input()))
    # print(N[i])

L=[]
def Maxnum(n):
    min=n//4
    for a in range(min,min+2):
        for b in range(min,min+2):
            c=b
            if n-a-b-c>0:
                d=n-a-b-c
                num=a*b*c*d
                L.append(num)
            else:
                break
    return L
    # print(L)

def main():
    for i in range(T):
        # max=Maxnum(N)
        L=Maxnum(N[i])
        L.sort()
        # print(i)
        # time.sleep(0.1)
        try:
            print(L[len(L)-1])
        except:
            print(-1)
        # print(max)

if __name__=="__main__":
    main()