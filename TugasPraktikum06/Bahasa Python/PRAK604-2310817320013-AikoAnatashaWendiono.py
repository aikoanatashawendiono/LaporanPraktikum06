simbol = input("")
pesan = input("")

angka1, angka2 = len(simbol), len(pesan)
bintang, pagar = 0, 0

if angka1 != angka2:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(angka1):
        if simbol[i] == pesan[i]:
            if simbol[i] == ' ':
                print(" ", end="")
            else:
                print("*", end="")
                bintang += 1
        else:
            print("#", end="")
            pagar += 1

    print("\n* =", bintang)
    print("# =", pagar)

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan palsu")
