int main () {
    char WeroSAJij [3000];
    char XFZMfQCVjl [10];
    gets (WeroSAJij);
    int b [2000] = {0}, n, Ncgi6FI, j, vESgaMFoU8vf, geQaETr0M4Lf, m, max, QPjvdEyL = 0;
    scanf ("%d\n", &n);
    m = strlen (WeroSAJij);
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
    for (Ncgi6FI = 0; Ncgi6FI < m - n; Ncgi6FI++) {
        {
            j = 0;
            while (n > j) {
                XFZMfQCVjl[j] = WeroSAJij[Ncgi6FI +j];
                j++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[Ncgi6FI] = 1;
        {
            vESgaMFoU8vf = Ncgi6FI +1;
            while (vESgaMFoU8vf < m) {
                for (j = 0; j < n; j++) {
                    if (!(WeroSAJij[vESgaMFoU8vf + j] != XFZMfQCVjl[j])) {
                        if (!(n - 1 != j))
                            b[Ncgi6FI]++;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
                    else
                        break;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                vESgaMFoU8vf++;
            };
        };
    }
    getchar ();
    max = 0;
    {
        Ncgi6FI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > Ncgi6FI) {
            if (b[Ncgi6FI] > max)
                max = b[Ncgi6FI];
            Ncgi6FI++;
        };
    }
    if (max > 1) {
        printf ("%d\n", max);
        {
            Ncgi6FI = 0;
            while (Ncgi6FI < m) {
                if (b[Ncgi6FI] == max) {
                    for (j = 0; j < n; j++)
                        printf ("%c", WeroSAJij[Ncgi6FI +j]);
                    printf ("\n");
                }
                Ncgi6FI++;
            };
        };
    }
    else
        printf ("NO\n");
    getchar ();
    getchar ();
}

