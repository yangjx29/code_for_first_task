int main () {
    int mz7QFVw6KJ;
    int i;
    double  kcql69D0BEj5;
    double  x2;
    double  UjaZUgOJ4mR6;
    double  WmpJkWi;
    double  VusaHO;
    double  eETfpL;
    cin >> mz7QFVw6KJ;
    {
        i = 1;
        while (mz7QFVw6KJ + 1 > i) {
            i = i + 1;
            cin >> UjaZUgOJ4mR6 >> WmpJkWi >> VusaHO;
            eETfpL = -WmpJkWi / (2 * UjaZUgOJ4mR6);
            if (1e-9 > fabs (WmpJkWi *WmpJkWi-4 * UjaZUgOJ4mR6 *VusaHO))
                printf ("x1=x2=%.5f\n", -WmpJkWi / (2 * UjaZUgOJ4mR6));
            else if (0 < (WmpJkWi *WmpJkWi-4 * UjaZUgOJ4mR6 *VusaHO)) {
                kcql69D0BEj5 = (-WmpJkWi+sqrt (WmpJkWi *WmpJkWi-4 * UjaZUgOJ4mR6 *VusaHO)) / (2 * UjaZUgOJ4mR6);
                x2 = (-WmpJkWi-sqrt (WmpJkWi *WmpJkWi-4 * UjaZUgOJ4mR6 *VusaHO)) / (2 * UjaZUgOJ4mR6);
                printf ("x1=%.5f;x2=%.5f\n", kcql69D0BEj5, x2);
            }
            else {
                if (fabs (eETfpL) < 1e-9)
                    eETfpL = 0;
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", eETfpL, sqrt (-(WmpJkWi *WmpJkWi-4 * UjaZUgOJ4mR6 *VusaHO)) / (2 * UjaZUgOJ4mR6), eETfpL, sqrt (-(WmpJkWi *WmpJkWi-4 * UjaZUgOJ4mR6 *VusaHO)) / (2 * UjaZUgOJ4mR6));
            };
        };
    }
    return 0;
}

