def organizingContainers(container):
    colums = []
    for i in range(n):
        total =0
        for j in range(n):
            total+=container[j][i]
        colums.append(total)
    count=0
    for i in range(n):
        temp = sum(container[i])
        if temp in colums:
            count+=1
            colums[colums.index(temp)]=-1
        else:
            return("Impossible")
    if (count==n):
        return("Possible")
