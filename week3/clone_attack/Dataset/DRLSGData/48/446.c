int main () {
    int XB9GXTRcu48Y [(287 - 278)] [(267 - 258)], bErOCy3N [(938 - 929)] [(56 - 47)];
    const  int woiahK = (869 - 860);
    int i, tuzoBpXa, ZdzMs28, iURf6aJ, A5dHMJulcN, UJmsQHXlk, VoyCQa;
    memset (XB9GXTRcu48Y, (578 - 578), sizeof (XB9GXTRcu48Y));
    scanf ("%d%d", &iURf6aJ, &A5dHMJulcN);
    XB9GXTRcu48Y[woiahK / (628 - 626)][woiahK / (429 - 427)] = iURf6aJ;
    {
        ZdzMs28 = 982 - 982;
        while (ZdzMs28 < A5dHMJulcN) {
            ZdzMs28++;
            memset (bErOCy3N, (799 - 799), sizeof (bErOCy3N));
            {
                i = 645 - 644;
                while (i < woiahK - (349 - 348)) {
                    tuzoBpXa = 25 - 24;
                    while (tuzoBpXa < woiahK - (47 - 46)) {
                        bErOCy3N[i][tuzoBpXa] += XB9GXTRcu48Y[i][tuzoBpXa];
                        {
                            UJmsQHXlk = (466 - 100) - 365;
                            while (UJmsQHXlk <= (933 - 932)) {
                                {
                                    VoyCQa = (330 - 319) - 10;
                                    while (VoyCQa <= (541 - 540)) {
                                        bErOCy3N[i + UJmsQHXlk][tuzoBpXa + VoyCQa] += XB9GXTRcu48Y[i][tuzoBpXa];
                                        VoyCQa++;
                                    }
                                }
                                UJmsQHXlk++;
                            }
                        }
                        tuzoBpXa++;
                    }
                    i++;
                }
            }
            memcpy (XB9GXTRcu48Y, bErOCy3N, sizeof (XB9GXTRcu48Y));
        }
    }
    {
        i = (884 - 603) - 281;
        while (i < woiahK) {
            {
                tuzoBpXa = (1316 - 795) - 521;
                while (tuzoBpXa < woiahK - (1000 - 999)) {
                    printf ("%d ", XB9GXTRcu48Y[i][tuzoBpXa]);
                    tuzoBpXa++;
                }
            }
            printf ("%d\n", XB9GXTRcu48Y[i][woiahK - (947 - 946)]);
            i++;
        }
    }
    return (381 - 381);
}

