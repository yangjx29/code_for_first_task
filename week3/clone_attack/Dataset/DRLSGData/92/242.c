int main () {
    int yfoHlyueS3;
    int j7Kr9JHOMmv;
    int SNMAnC7Z3Xl;
    int BnZWMp7I42;
    int mpCV2OYi;
    int r28Os5d;
    int x7hAt2uUmw;
    int JdwiAKEQvx;
    int Dpk592InaCRG [(1985 - 975)], haHAdoV2 [1010];
    int rv30EN;
    int llbnMH418pxA;
    int HbCv73a;
    for (; 1;) {
        scanf ("%d", &JdwiAKEQvx);
        if (!(0 != JdwiAKEQvx))
            break;
        x7hAt2uUmw = 1;
        HbCv73a = (342 - 342);
        {
            rv30EN = 1;
            for (; JdwiAKEQvx >= rv30EN;) {
                scanf ("%d", &Dpk592InaCRG[rv30EN]);
                rv30EN = rv30EN + 1;
            }
        }
        {
            rv30EN = 1;
            for (; JdwiAKEQvx >= rv30EN;) {
                scanf ("%d", &haHAdoV2[rv30EN]);
                rv30EN = rv30EN + 1;
            }
        }
        {
            rv30EN = 1;
            for (; JdwiAKEQvx > rv30EN;) {
                {
                    llbnMH418pxA = rv30EN + 1;
                    for (; llbnMH418pxA <= JdwiAKEQvx;) {
                        if (Dpk592InaCRG[rv30EN] < Dpk592InaCRG[llbnMH418pxA]) {
                            BnZWMp7I42 = Dpk592InaCRG[rv30EN];
                            Dpk592InaCRG[rv30EN] = Dpk592InaCRG[llbnMH418pxA];
                            Dpk592InaCRG[llbnMH418pxA] = BnZWMp7I42;
                        }
                        if (haHAdoV2[llbnMH418pxA] > haHAdoV2[rv30EN]) {
                            BnZWMp7I42 = haHAdoV2[rv30EN];
                            haHAdoV2[rv30EN] = haHAdoV2[llbnMH418pxA];
                            haHAdoV2[llbnMH418pxA] = BnZWMp7I42;
                        }
                        llbnMH418pxA++;
                    }
                }
                rv30EN++;
            }
        }
        yfoHlyueS3 = JdwiAKEQvx;
        r28Os5d = JdwiAKEQvx;
        {
            rv30EN = 1;
            for (; JdwiAKEQvx >= rv30EN;) {
                if (Dpk592InaCRG[x7hAt2uUmw] > haHAdoV2[rv30EN]) {
                    HbCv73a += (764 - 564);
                    x7hAt2uUmw = x7hAt2uUmw + 1;
                }
                else if (haHAdoV2[rv30EN] > Dpk592InaCRG[x7hAt2uUmw]) {
                    HbCv73a -= 200;
                    yfoHlyueS3 = yfoHlyueS3 - 1;
                }
                else if (Dpk592InaCRG[x7hAt2uUmw] == haHAdoV2[rv30EN]) {
                    for (llbnMH418pxA = yfoHlyueS3, SNMAnC7Z3Xl = r28Os5d; llbnMH418pxA >= x7hAt2uUmw;) {
                        if (Dpk592InaCRG[llbnMH418pxA] > haHAdoV2[SNMAnC7Z3Xl]) {
                            HbCv73a += 200;
                            llbnMH418pxA--;
                            r28Os5d = r28Os5d - 1;
                            yfoHlyueS3 = yfoHlyueS3 - 1;
                            SNMAnC7Z3Xl = SNMAnC7Z3Xl -1;
                        }
                        else {
                            yfoHlyueS3--;
                            if (Dpk592InaCRG[llbnMH418pxA] < haHAdoV2[rv30EN])
                                HbCv73a -= 200;
                            llbnMH418pxA--;
                            break;
                        }
                    }
                }
                if (x7hAt2uUmw > yfoHlyueS3)
                    break;
                rv30EN++;
            }
        }
        printf ("%d\n", HbCv73a);
    }
}

