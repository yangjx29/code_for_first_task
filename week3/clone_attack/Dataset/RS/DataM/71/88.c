int main () {
    int n, y, pkeYGpv, m2, N0WTP8hfgG, bigm, smallm;
    int month1 [12] = {(828 - 797), 28, (100 - 69), 30, (158 - 127), 30, (765 - 734), 31, 30, 31, 30, 31}, month2 [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf ("%d", &n);
    {
        N0WTP8hfgG = 53 - 53;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > N0WTP8hfgG) {
            int days;
            int IKQsjXHA;
            days = (682 - 682);
            N0WTP8hfgG = N0WTP8hfgG +1;
            scanf ("%d%d%d", &y, &pkeYGpv, &m2);
            if (pkeYGpv <= m2) {
                bigm = m2;
                smallm = pkeYGpv;
            }
            else {
                smallm = m2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                bigm = pkeYGpv;
            }
            if ((!((959 - 959) != y % 4) && !(0 == y % 100)) || y % 400 == 0) {
                for (IKQsjXHA = smallm; IKQsjXHA < bigm; IKQsjXHA++) {
                    days += month2[IKQsjXHA -1];
                }
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
                if (days % 7 == 0) {
                    printf ("YES\n");
                }
                else {
                    printf ("NO\n");
                };
            }
            else {
                {
                    IKQsjXHA = smallm;
                    while (IKQsjXHA < bigm) {
                        IKQsjXHA = IKQsjXHA +1;
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        days += month1[IKQsjXHA -1];
                    };
                }
                if (days % 7 == 0) {
                    printf ("YES\n");
                }
                else {
                    printf ("NO\n");
                };
            };
        };
    }
    return 0;
}

