def Biodata(tahunLahir, namaku, asal):
    tahun_sekarang = 2023
    umur = tahun_sekarang - tahunLahir

    print("Perkenalkan Nama Saya:", namaku)
    print("Umur Saya:", umur)
    print("Saya Adalah Angkatan:", tahun_sekarang)
    print("Asal Saya dari: ", asal)

tahunLahir = int(input())
namaku = input()
asal = input()

Biodata(tahunLahir, namaku, asal)