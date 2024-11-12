void  main () {
    int AeXSOYc;
    int cv7jCV;
    int eOq0Z6k;
    int JDJiGXU3;
    int zz1bKoRme;
    int Z325UVyeiIRt [(518 - 418)] [(1062 - 962)];
    {
        if (0) {
            return 0;
        }
    }
    int GDQ71kcSs;
    AeXSOYc = (411 - 411);
    scanf ("%d%d", &cv7jCV, &eOq0Z6k);
    {
        JDJiGXU3 = 252 - 252;
        while (cv7jCV > JDJiGXU3) {
            {
                zz1bKoRme = 214 - 214;
                while (eOq0Z6k > zz1bKoRme) {
                    scanf ("%d", &Z325UVyeiIRt[JDJiGXU3][zz1bKoRme]);
                    zz1bKoRme++;
                }
            }
            JDJiGXU3++;
        }
    }
    {
        GDQ71kcSs = 991 - 991;
        while (1) {
            {
                zz1bKoRme = GDQ71kcSs;
                while (zz1bKoRme < eOq0Z6k - GDQ71kcSs) {
                    printf ("%d\n", Z325UVyeiIRt[GDQ71kcSs][zz1bKoRme]);
                    zz1bKoRme++;
                    AeXSOYc++;
                }
            }
            if (AeXSOYc >= cv7jCV * eOq0Z6k)
                break;
            {
                JDJiGXU3 = GDQ71kcSs +1;
                while (cv7jCV - GDQ71kcSs > JDJiGXU3) {
                    printf ("%d\n", Z325UVyeiIRt[JDJiGXU3][eOq0Z6k - 1 - GDQ71kcSs]);
                    JDJiGXU3++;
                    AeXSOYc++;
                }
            }
            if (AeXSOYc >= cv7jCV * eOq0Z6k)
                break;
            {
                zz1bKoRme = 880 - 878;
                while (GDQ71kcSs <= zz1bKoRme) {
                    printf ("%d\n", Z325UVyeiIRt[cv7jCV - GDQ71kcSs -1][zz1bKoRme]);
                    zz1bKoRme--;
                    AeXSOYc++;
                }
            }
            if (AeXSOYc >= cv7jCV * eOq0Z6k)
                break;
            {
                JDJiGXU3 = cv7jCV - 2 - GDQ71kcSs;
                while (JDJiGXU3 > GDQ71kcSs) {
                    printf ("%d\n", Z325UVyeiIRt[JDJiGXU3][GDQ71kcSs]);
                    JDJiGXU3--;
                    AeXSOYc++;
                }
            }
            if (AeXSOYc >= cv7jCV * eOq0Z6k)
                break;
            GDQ71kcSs++;
        }
    }
}

