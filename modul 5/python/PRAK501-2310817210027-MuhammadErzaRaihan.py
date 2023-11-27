def max_bilangan(a, b, c, d):
    return max(a, b, c, d)

input = input().split()
a,b,c,d=map(int,input)

hasil = max_bilangan(a, b, c, d)
print(hasil)