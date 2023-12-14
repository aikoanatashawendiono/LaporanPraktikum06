def zetsu_belah(kamar, zetsu_ruangan):
    hasil = tuple(zetsu * (i + 1)
    
    for i, zetsu in enumerate(zetsu_ruangan))
    return hasil

kamar = int(input())
zetsu_ruangan = list(map(int, input().split()))

output = zetsu_belah(kamar, zetsu_ruangan)

print("")
print(" ".join(map(str, output)))
