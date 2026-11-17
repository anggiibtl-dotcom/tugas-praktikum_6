baris, kolom = map(int, input().split())
angka = list(map(int, input().split()))

index = 0
for i in range(baris):
    baris_matriks = angka[index : index + kolom]
    print(*baris_matriks)
    index += kolom