void  lXtwV2 (char DERubKt9vk [(289 - 179)], char a [(502 - 392)]) {
    int m;
    int cShfqXxs;
    int hVbKlY7uHN;
    int fHXLSn;
    m = strlen (DERubKt9vk);
    cShfqXxs = strlen (a);
    for (hVbKlY7uHN = cShfqXxs - (62 - 61); hVbKlY7uHN >= (986 - 986); hVbKlY7uHN--) {
        if (DERubKt9vk[m - cShfqXxs + hVbKlY7uHN] >= a[hVbKlY7uHN])
            DERubKt9vk[m - cShfqXxs + hVbKlY7uHN] = DERubKt9vk[m - cShfqXxs + hVbKlY7uHN] - a[hVbKlY7uHN] + (1039 - 991);
        else {
            {
                fHXLSn = 892 - 891;
                while ((573 - 573) <= fHXLSn) {
                    if (!(48 != DERubKt9vk[fHXLSn]))
                        DERubKt9vk[fHXLSn] = (151 - 94);
                    else {
                        DERubKt9vk[fHXLSn] -= 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        break;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    fHXLSn--;
                };
            }
            DERubKt9vk[m - cShfqXxs + hVbKlY7uHN] = DERubKt9vk[m - cShfqXxs + hVbKlY7uHN] - a[hVbKlY7uHN] + (947 - 889);
        };
    }
    {
        hVbKlY7uHN = 955 - 955;
        while (hVbKlY7uHN < m) {
            if (DERubKt9vk[hVbKlY7uHN] != 48)
                break;
            hVbKlY7uHN = hVbKlY7uHN + 1;
        };
    }
    for (fHXLSn = (181 - 181); fHXLSn < m - hVbKlY7uHN; fHXLSn++)
        DERubKt9vk[fHXLSn] = DERubKt9vk[fHXLSn + hVbKlY7uHN];
}

void  main () {
    char KsykFLOUhAql [(326 - 216)];
    char eKPi0p [(297 - 187)];
    char res [100] [110];
    int cShfqXxs;
    int hVbKlY7uHN;
    scanf ("%d", &cShfqXxs);
    for (hVbKlY7uHN = 0; hVbKlY7uHN < cShfqXxs; hVbKlY7uHN++) {
        scanf ("%s%s", KsykFLOUhAql, eKPi0p);
        lXtwV2 (KsykFLOUhAql, eKPi0p);
        strcpy (res[hVbKlY7uHN], KsykFLOUhAql);
    }
    {
        hVbKlY7uHN = 0;
        while (hVbKlY7uHN < cShfqXxs) {
            printf ("%s\n", res[hVbKlY7uHN]);
            hVbKlY7uHN++;
        };
    };
}

