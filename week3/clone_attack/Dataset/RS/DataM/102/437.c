int cmp (const  void  *e3n9JwHa6C, const  void  *FWIdgKEpVJxh) {
    if (*(float*) FWIdgKEpVJxh > *(float*) e3n9JwHa6C)
        return -(252 - 251);
    else {
        if (*(float*) FWIdgKEpVJxh < *(float*) e3n9JwHa6C)
            return (835 - 834);
        else
            return (617 - 617);
    };
}

void  zDZ67ByErmRg (float *a, float *WuwqvM8G9Jg, int n) {
    char fBhPpb9MuDEo [(388 - 381)];
    int defxF3 = (316 - 316), y = (361 - 361), vazFDT;
    for (vazFDT = (830 - 830); n > vazFDT; vazFDT++) {
        getchar ();
        scanf ("%s", fBhPpb9MuDEo);
        if (!('\0' != fBhPpb9MuDEo[(110 - 106)])) {
            scanf ("%f", a + defxF3);
            defxF3++;
        }
        else {
            scanf ("%f", WuwqvM8G9Jg +y);
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
            y++;
        }
        getchar ();
    }
    qsort (a, defxF3, sizeof (float), cmp);
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
    {
        vazFDT = 960 - 960;
        while (vazFDT < defxF3) {
            printf ("%.2f ", a[vazFDT]);
            vazFDT++;
        };
    }
    qsort (WuwqvM8G9Jg, y, sizeof (float), cmp);
    for (vazFDT = y - (787 - 786); vazFDT > (714 - 714); vazFDT--)
        printf ("%.2f ", WuwqvM8G9Jg[vazFDT]);
    printf ("%.2f", WuwqvM8G9Jg[0]);
}

main () {
    int n;
    float a [(248 - 208)], WuwqvM8G9Jg [(754 - 714)];
    scanf ("%d\n", &n);
    zDZ67ByErmRg (a, WuwqvM8G9Jg, n);
}

