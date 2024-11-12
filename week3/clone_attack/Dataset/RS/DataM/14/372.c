struct   Student {
    long  i7Q9ogCUHlIJ;
    int Xhz3Dn;
    int cbfv5aYRle8;
    int Z1cXBwEC;
    struct   Student *kkIYN950;
};
struct   Student *Pnvw16VAoc (struct   Student *M0jHrqOi5I, struct   Student *Z3KREz) {
    int j = (393 - 393);
    struct   Student *iNZGzH3UT, *UvizKSg9lp4, *ZgzTKa;
    UvizKSg9lp4 = M0jHrqOi5I;
    iNZGzH3UT = Z3KREz;
    if (M0jHrqOi5I == NULL) {
        M0jHrqOi5I = iNZGzH3UT;
        iNZGzH3UT->kkIYN950 = NULL;
    }
    else {
        while ((iNZGzH3UT->Z1cXBwEC <= UvizKSg9lp4->Z1cXBwEC) && (UvizKSg9lp4->kkIYN950 != NULL) && j < 4) {
            ZgzTKa = UvizKSg9lp4;
            UvizKSg9lp4 = UvizKSg9lp4->kkIYN950;
            j = j + 1;
        }
        if (iNZGzH3UT->Z1cXBwEC > UvizKSg9lp4->Z1cXBwEC) {
            if (M0jHrqOi5I == UvizKSg9lp4)
                M0jHrqOi5I = iNZGzH3UT;
            else
                ZgzTKa->kkIYN950 = iNZGzH3UT;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            iNZGzH3UT->kkIYN950 = UvizKSg9lp4;
        }
        else {
            UvizKSg9lp4->kkIYN950 = iNZGzH3UT;
            iNZGzH3UT->kkIYN950 = NULL;
        };
    }
    return (M0jHrqOi5I);
}

void  main () {
    struct   Student *UvizKSg9lp4, *M0jHrqOi5I, *Z3KREz;
    long  int OAP5La, kqOw1vU;
    scanf ("%ld", &kqOw1vU);
    UvizKSg9lp4 = M0jHrqOi5I = (struct   Student *) malloc (sizeof (struct   Student));
    scanf ("%d %d %d", &M0jHrqOi5I->i7Q9ogCUHlIJ, &M0jHrqOi5I->Xhz3Dn, &M0jHrqOi5I->cbfv5aYRle8);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    M0jHrqOi5I->Z1cXBwEC = M0jHrqOi5I->Xhz3Dn + M0jHrqOi5I->cbfv5aYRle8;
    M0jHrqOi5I->kkIYN950 = NULL;
    for (OAP5La = 1; OAP5La < kqOw1vU; OAP5La = OAP5La +1) {
        Z3KREz = (struct   Student *) malloc (sizeof (struct   Student));
        scanf ("%d %d %d", &Z3KREz->i7Q9ogCUHlIJ, &Z3KREz->Xhz3Dn, &Z3KREz->cbfv5aYRle8);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        Z3KREz->Z1cXBwEC = Z3KREz->Xhz3Dn + Z3KREz->cbfv5aYRle8;
        M0jHrqOi5I = Pnvw16VAoc (M0jHrqOi5I, Z3KREz);
    }
    UvizKSg9lp4 = M0jHrqOi5I;
    {
        OAP5La = 221 - 221;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OAP5La < (374 - 371)) {
            OAP5La = OAP5La +1;
            printf ("%d %d\n", UvizKSg9lp4->i7Q9ogCUHlIJ, UvizKSg9lp4->Z1cXBwEC);
            UvizKSg9lp4 = UvizKSg9lp4->kkIYN950;
        };
    };
}

