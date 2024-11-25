int main () {
    int RjcsblgGof;
    int fzypfWv;
    int jtbEJMmB43;
    int xE4lrfpgO56a [100] [100] = {0};
    int SYR8mC6 [100] [100];
    int nfhxV6 [100] [100];
    int s0IXpCwQ;
    int r1IuLBqY;
    int vMI54mJ;
    int cBY8xgLP6NH;
    scanf ("%d %d", &fzypfWv, &RjcsblgGof);
    {
        s0IXpCwQ = 0;
        for (; s0IXpCwQ < fzypfWv;) {
            {
                jtbEJMmB43 = 0;
                while (jtbEJMmB43 < RjcsblgGof) {
                    scanf ("%d", &nfhxV6[s0IXpCwQ][jtbEJMmB43]);
                    jtbEJMmB43++;
                }
            }
            s0IXpCwQ++;
        }
    }
    scanf ("%d %d", &r1IuLBqY, &vMI54mJ);
    {
        s0IXpCwQ = 0;
        while (s0IXpCwQ < r1IuLBqY) {
            {
                jtbEJMmB43 = 0;
                for (; jtbEJMmB43 < vMI54mJ;) {
                    scanf ("%d", &SYR8mC6[s0IXpCwQ][jtbEJMmB43]);
                    jtbEJMmB43++;
                }
            }
            s0IXpCwQ++;
        }
    }
    {
        s0IXpCwQ = 0;
        while (s0IXpCwQ < fzypfWv) {
            {
                jtbEJMmB43 = 0;
                while (jtbEJMmB43 < vMI54mJ) {
                    {
                        cBY8xgLP6NH = 0;
                        while (cBY8xgLP6NH < r1IuLBqY) {
                            xE4lrfpgO56a[s0IXpCwQ][jtbEJMmB43] = xE4lrfpgO56a[s0IXpCwQ][jtbEJMmB43] + nfhxV6[s0IXpCwQ][cBY8xgLP6NH] * SYR8mC6[cBY8xgLP6NH][jtbEJMmB43];
                            cBY8xgLP6NH++;
                        }
                    }
                    if (s0IXpCwQ != fzypfWv - 1) {
                        if (jtbEJMmB43 != vMI54mJ - 1)
                            printf ("%d ", xE4lrfpgO56a[s0IXpCwQ][jtbEJMmB43]);
                        else
                            printf ("%d\n", xE4lrfpgO56a[s0IXpCwQ][jtbEJMmB43]);
                    }
                    else if (jtbEJMmB43 != vMI54mJ - 1)
                        printf ("%d ", xE4lrfpgO56a[s0IXpCwQ][jtbEJMmB43]);
                    else
                        printf ("%d", xE4lrfpgO56a[s0IXpCwQ][jtbEJMmB43]);
                    jtbEJMmB43++;
                }
            }
            s0IXpCwQ++;
        }
    }
    getchar ();
    getchar ();
}

