angka1, angka2 = map(int, input().split())

if angka1 != angka2:
    print("Jumlah tidak sama")
else:
    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))

    total = [baris1[i] * baris2[i] for i in range(angka1)]
    print(" ".join(map(str, total)))
