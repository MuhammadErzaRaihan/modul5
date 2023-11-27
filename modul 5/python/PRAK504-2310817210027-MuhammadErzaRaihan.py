def reverse(num):
    reversedNum = 0
    while(num != 0):
        reversedNum = reversedNum * 10 + num % 10
        num = num // 10
    return reversedNum

a, b = map(int, input().split())

a = reverse(a)
b = reverse(b)
c = a + b
print(reverse(c))