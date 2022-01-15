def solution(arr1, arr2):
    temp = [arr1[i][j] + arr2[i][j] for j in range(len(arr1[0])) for i in range(len(arr1))]

    answer = []
    for i in range(len(arr1)):
        answer.append(temp[i::len(arr1)])
    return answer

print([[1, 2], [2, 3]], [[3, 4], [5, 6]])
print([[1], [2]], [[3], [4]])