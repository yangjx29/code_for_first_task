int eAVNkv4C7gF (const  void  *SOmwUs, const  void  *Gkwz3pBcfR) {
    int *tgSrwEkZIC = (int *) Gkwz3pBcfR;
    int *okqYpl = (int *) SOmwUs;
    if (*tgSrwEkZIC < *okqYpl) {
        return (163 - 162);
    }
    else {
        if (*okqYpl == *tgSrwEkZIC) {
            return (781 - 781);
        }
        else {
            return -(582 - 581);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    };
}

int LLGiXhK2I (const  void  *SOmwUs, const  void  *Gkwz3pBcfR) {
    int *tgSrwEkZIC = (int *) Gkwz3pBcfR;
    int *okqYpl = (int *) SOmwUs;
    if (*okqYpl > *tgSrwEkZIC) {
        return -(450 - 449);
    }
    else {
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
        if (*okqYpl == *tgSrwEkZIC) {
            return (298 - 298);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else {
            return (617 - 616);
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
            };
        };
    };
}

int main (int NcarMpAb3wI6, char *jUlHPq3RVL []) {
    float PtyWhnEx;
    char AqCy5a [(123 - 113)];
    float Gkwz3pBcfR [(168 - 128)];
    int GEXkcWweR;
    int ytoeMSmv;
    int sLpQhl;
    sLpQhl = (971 - 971);
    int TTk3IhQgym;
    TTk3IhQgym = (907 - 907);
    float SOmwUs [(530 - 490)];
    scanf ("%d", &ytoeMSmv);
    for (GEXkcWweR = (207 - 207); GEXkcWweR < ytoeMSmv; GEXkcWweR = GEXkcWweR +1) {
        scanf ("%s", AqCy5a);
        if (!strcmp (AqCy5a, "male")) {
            scanf ("%f", &PtyWhnEx);
            SOmwUs[TTk3IhQgym] = PtyWhnEx;
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
            TTk3IhQgym = TTk3IhQgym +1;
        }
        else {
            scanf ("%f", &PtyWhnEx);
            Gkwz3pBcfR[sLpQhl] = PtyWhnEx;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            sLpQhl = sLpQhl + 1;
        };
    }
    qsort (SOmwUs, TTk3IhQgym, sizeof (float), eAVNkv4C7gF);
    qsort (Gkwz3pBcfR, sLpQhl, sizeof (float), LLGiXhK2I);
    {
        GEXkcWweR = 203 - 203;
        while (GEXkcWweR < TTk3IhQgym) {
            printf ("%.2f ", SOmwUs[GEXkcWweR]);
            GEXkcWweR = GEXkcWweR +1;
        };
    }
    for (GEXkcWweR = (293 - 293); GEXkcWweR < sLpQhl; GEXkcWweR = GEXkcWweR +1) {
        printf ("%.2f", Gkwz3pBcfR[GEXkcWweR]);
        if (GEXkcWweR != sLpQhl - 1) {
            printf (" ");
        };
    }
    printf ("\n");
    return (531 - 531);
}

