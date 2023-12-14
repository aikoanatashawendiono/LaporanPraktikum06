def main():
    baris, kolom = map(int, input().split())
    angka_matriks = list(map(int, input().split()))

    matriks = []

    print("")

    for i in range(baris):
        baris_matriks = []
        for j in range(kolom):
            baris_matriks.append(angka_matriks[i * kolom + j])
        matriks.append(baris_matriks)


    for i in range(baris):
        for j in range(kolom):
            print(matriks[i][j], end="")
            if j < kolom - 1:
                print(" ", end="")
        print()

if __name__ == "__main__":
    main()

