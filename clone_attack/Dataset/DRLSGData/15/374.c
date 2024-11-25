int main () {
    int t0LhX9v [100] [100], n, p, YkhW7Rl, RMoG9D0kwmEW, MnBscuY16EN, gU4tCGPAi, mY0rLBQg;
    scanf ("%d", &n);
    {
        RMoG9D0kwmEW = 0;
        for (; n > RMoG9D0kwmEW;) {
            {
                MnBscuY16EN = 0;
                for (; MnBscuY16EN < n;) {
                    scanf ("%d", &(t0LhX9v[RMoG9D0kwmEW][MnBscuY16EN]));
                    if (!(0 != t0LhX9v[RMoG9D0kwmEW][MnBscuY16EN])) {
                        YkhW7Rl = MnBscuY16EN;
                        p = RMoG9D0kwmEW;
                    }
                    MnBscuY16EN++;
                }
            }
            RMoG9D0kwmEW++;
        }
    }
    {
        RMoG9D0kwmEW = n - 1;
        for (; RMoG9D0kwmEW >= 0;) {
            {
                MnBscuY16EN = n - 1;
                for (; 0 <= MnBscuY16EN;) {
                    if (t0LhX9v[RMoG9D0kwmEW][MnBscuY16EN] == 0) {
                        mY0rLBQg = MnBscuY16EN;
                        gU4tCGPAi = RMoG9D0kwmEW;
                    }
                    MnBscuY16EN--;
                }
            }
            RMoG9D0kwmEW--;
        }
    }
    printf ("%d", (p - gU4tCGPAi - 1) * (YkhW7Rl -mY0rLBQg - 1));
    return 0;
}

