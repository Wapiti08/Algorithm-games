'''
Let's dive into the interesting topic of regular expressions! You are given some input, and you are required to check whether they are valid mobile numbers.

A valid mobile number is a ten digit number starting with a 7,8 or 9 .

Sample Input:
2
9587456281
1252478965

Sample Output:
YES
NO
'''

def Is_Begin(n):
    n=n//1000000000
    L={7,8,9}
    if n in L:
        print("YES")
    else:
        print("NO")
    return 

if __name__=="__main__":
    n=int(input())
    L=[]
    a=0
    for i in range(n):
        try:
            a=int(input())
            Is_Begin(a)
        except Exception as e:
            print("NO")
