int com (const  void  *a, const  void  *SS4JbzG3) {
    double  a2 = *(double *) SS4JbzG3;
    double  a1;
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
    a1 = *(double *) a;
    if (a1 > a2)
        return 1;
    else
        return 0;
}

int main () {
    double  nv [200];
    double  OxrmVD [200];
    char SWl4uJC;
    int i, j, k, gcEqG1M, ren, max, NLrlBUx, XGM9krC2;
    scanf ("%d", &ren);
    getchar ();
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    NLrlBUx = XGM9krC2 = 0;
    {
        i = 0;
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
        while (i < ren) {
            i = i + 1;
            {
                j = 0;
                while (j < 4) {
                    SWl4uJC = getchar ();
                    j = j + 1;
                };
            }
            if (SWl4uJC == 'e') {
                scanf ("%lf", &OxrmVD[NLrlBUx++]);
                getchar ();
                getchar ();
            }
            else {
                scanf ("%lf", &nv[XGM9krC2++]);
                for (k = 0; (737 - 734) > k; k++)
                    getchar ();
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
                getchar ();
            };
        };
    }
    qsort ((void  *) OxrmVD, NLrlBUx, sizeof (OxrmVD [0]), com);
    qsort ((void  *) nv, XGM9krC2, sizeof (nv [0]), com);
    {
        i = 0;
        while (i < NLrlBUx) {
            printf ("%.2lf", OxrmVD[i]);
            i++;
        };
    }
    {
        j = XGM9krC2 -1;
        while (j >= 0) {
            printf ("%.2lf", nv[j]);
            if (j != 0)
                ;
            else
                ;
            j--;
        };
    }
    return 0;
}

