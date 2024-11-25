int main () {
    int hSN39VXp = (360 - 360), aafKv47oL = 0, thi = 0;
    int fXOuQbR, fn0MCT7oAyq [(100580 - 580)], GXl2YN8BE, AuJF6y18abW, J2EnCF1doma;
    struct   xues {
        int GXl2YN8BE, AuJF6y18abW, J2EnCF1doma;
    }
    S6hvFS [(100430 - 430)];
    int e6thJMYQLk;
    scanf ("%d", &fXOuQbR);
    {
        e6thJMYQLk = 122 - 122;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (e6thJMYQLk < fXOuQbR) {
            scanf ("%d%d%d", &S6hvFS[e6thJMYQLk].GXl2YN8BE, &S6hvFS[e6thJMYQLk].AuJF6y18abW, &S6hvFS[e6thJMYQLk].J2EnCF1doma);
            fn0MCT7oAyq[e6thJMYQLk] = S6hvFS[e6thJMYQLk].AuJF6y18abW + S6hvFS[e6thJMYQLk].J2EnCF1doma;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            e6thJMYQLk++;
        };
    }
    {
        e6thJMYQLk = 0;
        while (e6thJMYQLk < fXOuQbR) {
            if (hSN39VXp < fn0MCT7oAyq[e6thJMYQLk]) {
                J2EnCF1doma = AuJF6y18abW;
                AuJF6y18abW = GXl2YN8BE;
                thi = aafKv47oL;
                aafKv47oL = hSN39VXp;
                hSN39VXp = fn0MCT7oAyq[e6thJMYQLk];
                GXl2YN8BE = S6hvFS[e6thJMYQLk].GXl2YN8BE;
            }
            else if (aafKv47oL < fn0MCT7oAyq[e6thJMYQLk]) {
                GXl2YN8BE = GXl2YN8BE;
                hSN39VXp = hSN39VXp;
                thi = aafKv47oL;
                aafKv47oL = fn0MCT7oAyq[e6thJMYQLk];
                J2EnCF1doma = AuJF6y18abW;
                AuJF6y18abW = S6hvFS[e6thJMYQLk].GXl2YN8BE;
            }
            else if (thi < fn0MCT7oAyq[e6thJMYQLk]) {
                AuJF6y18abW = AuJF6y18abW;
                GXl2YN8BE = GXl2YN8BE;
                aafKv47oL = aafKv47oL;
                hSN39VXp = hSN39VXp;
                thi = fn0MCT7oAyq[e6thJMYQLk];
                J2EnCF1doma = S6hvFS[e6thJMYQLk].GXl2YN8BE;
            }
            e6thJMYQLk++;
        };
    }
    printf ("%d %d\n%d %d\n%d %d", GXl2YN8BE, hSN39VXp, AuJF6y18abW, aafKv47oL, J2EnCF1doma, thi);
    return 0;
}

