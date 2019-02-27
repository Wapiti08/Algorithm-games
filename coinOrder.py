def Coinorder(listvalue,value):
    try:
        #listvalue=listvalue.sort(reverse=True)
        # print(listvalue)
        listnum=[]
        for i in range(len(listvalue)):
            listnum.append(value//listvalue[i])
            value=value-listvalue[i]*listnum[i]
            if value<=0:
                break
            else:
                continue
        return listnum
    except Exception as e:
        print(e)

def printList(list1,list2):
    try:
        list=[]
        for i in range(len(list1)):
            for j in range(list1[i]):
                list.append(list2[i])
        print(list)
    except Exception as e:
        print(e)
        
size=float(int(input()))
list1=[]
for i in range(int(size)):
    list1.append(int(input()))
value=int(input())
print(list1,value)
listnum=Coinorder(listvalue=list1,value=value)
printList(listnum,list1)
