'''
Arpasland has surrounded by attackers. A truck enters the city. The driver claims the load is food and medicine from Iranians. Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege. He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel. Determine if the tag of the truck is valid or not.

We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.
'''


def IsEven(n):
    n=int(n)
    if n%2==0:
        return True
    else:
        return False
        
Tag=str(input())
n=len(Tag)
L=''
for i in range(n-1):
    if ord(Tag[i])>=65 and ord(Tag[i])<=90:
        L=L+Tag[i]
    elif ord(Tag[i+1])<=65 or ord(Tag[i+1])>=90:
        num=int(Tag[i])+int(Tag[i+1])
        if IsEven(num):
            continue
        else:
            print("invalid")
            exit(0)
if 'A' and "E" and "I" and "O" and "U" and "Y" not in L:
    print('valid')
else:
    print("invalid")
    
