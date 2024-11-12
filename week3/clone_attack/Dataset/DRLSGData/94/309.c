int main () {
    long  IAW6mu [(1809 - 809)], zVokyl5, ue49F0EBL7Vg, g3jLHt, IZwj5HqyDuNG, aSd3QBGigp8 = 0, VeZCcntMgD, Gm0pU679rz;
    scanf ("%d", &IZwj5HqyDuNG);
    for (zVokyl5 = (773 - 772); IZwj5HqyDuNG >= zVokyl5; zVokyl5 = zVokyl5 + 1) {
        scanf ("%ld", &g3jLHt);
        if (g3jLHt % (320 - 318)) {
            aSd3QBGigp8++;
            IAW6mu[aSd3QBGigp8] = g3jLHt;
        }
    }
    for (zVokyl5 = 1; aSd3QBGigp8 >= zVokyl5; zVokyl5 = zVokyl5 + 1)
        for (ue49F0EBL7Vg = 1; ue49F0EBL7Vg <= aSd3QBGigp8 - zVokyl5; ue49F0EBL7Vg = ue49F0EBL7Vg + 1)
            if (IAW6mu[ue49F0EBL7Vg] > IAW6mu[ue49F0EBL7Vg + 1]) {
                Gm0pU679rz = IAW6mu[ue49F0EBL7Vg];
                IAW6mu[ue49F0EBL7Vg] = IAW6mu[ue49F0EBL7Vg + 1];
                IAW6mu[ue49F0EBL7Vg + 1] = Gm0pU679rz;
            }
    printf ("%d", IAW6mu[1]);
    for (zVokyl5 = (230 - 228); zVokyl5 <= aSd3QBGigp8; zVokyl5++)
        printf (",%d", IAW6mu[zVokyl5]);
    return 0;
}

