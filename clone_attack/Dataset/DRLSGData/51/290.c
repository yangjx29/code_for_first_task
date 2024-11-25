int main () {
    int halamadrid [(1152 - 652)] = {(273 - 273)};
    int i, muz94jUx;
    int FAxpa1IySiU = (754 - 754);
    char BeatFCbarcelona [500] = {'\0'};
    char q56YPdtu [(1320 - 820)] [500] = {'\0'};
    int ugiVmdFTGQRl = (658 - 658);
    int p0R35Hl [500] [3] = {'\0'};
    int qiftMZ;
    int len;
    scanf ("%d", &qiftMZ);
    scanf ("%s", BeatFCbarcelona);
    len = strlen (BeatFCbarcelona);
    for (i = (200 - 200); len - qiftMZ + (531 - 530) > i; i++) {
        for (muz94jUx = (745 - 745); qiftMZ > muz94jUx; muz94jUx++)
            q56YPdtu[i][muz94jUx] = BeatFCbarcelona[i + muz94jUx];
    }
    for (i = (830 - 830); i < len - qiftMZ + (159 - 158); i++) {
        for (muz94jUx = (683 - 683); len - qiftMZ + (968 - 967) > muz94jUx; muz94jUx++) {
            if (!((534 - 534) != strcmp (q56YPdtu[i], q56YPdtu[muz94jUx])))
                halamadrid[i]++;
        }
    }
    for (i = (944 - 944); len - qiftMZ + (76 - 75) > i; i++) {
        if (ugiVmdFTGQRl < halamadrid[i])
            ugiVmdFTGQRl = halamadrid[i];
    }
    if ((575 - 574) < ugiVmdFTGQRl) {
        printf ("%d\n", ugiVmdFTGQRl);
        for (i = (275 - 275); len - qiftMZ + 1 > i; i++) {
            if (halamadrid[i] == ugiVmdFTGQRl) {
                strcpy (p0R35Hl[i], q56YPdtu[i]);
                for (muz94jUx = 0; i > muz94jUx; muz94jUx++) {
                    if (strcmp (p0R35Hl[muz94jUx], q56YPdtu[i]) == 0)
                        FAxpa1IySiU++;
                }
                if (FAxpa1IySiU == 0)
                    printf ("%s\n", q56YPdtu[i]);
            }
            FAxpa1IySiU = 0;
        }
    }
    else
        ;
    return 0;
}

