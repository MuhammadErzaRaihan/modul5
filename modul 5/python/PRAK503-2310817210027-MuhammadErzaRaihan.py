def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

batas = 0
maks = float('-inf') 
minim = float('inf')  

bilangan = int(input())

while batas < bilangan:
    nilai = int(input())
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1

print(f"{maks} {minim}")