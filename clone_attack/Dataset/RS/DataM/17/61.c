int main () {
    char s1 [102];
    int iEmOF95MitS;
    int eRuv3ODLCc;
    int i;
    int V8xBeMp3a1b;
    int cz0aWBcgd;
    int cQV05kRh [102] = {-(198 - 197)};
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
    int oBYesR [102] = {0};
    iEmOF95MitS = (330 - 330);
    eRuv3ODLCc = 0;
    while (!(EOF == scanf ("%s", s1))) {
        cz0aWBcgd = 0;
        printf ("%s\n", s1);
        V8xBeMp3a1b = strlen (s1);
        for (i = 0; V8xBeMp3a1b > i; i = i + 1) {
            if (!('(' != s1[i])) {
                cz0aWBcgd = cz0aWBcgd + 1;
                cQV05kRh[cz0aWBcgd] = i;
            }
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
            if (s1[i] == ')') {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!(0 != cz0aWBcgd))
                    oBYesR[i] = (805 - 803);
                else {
                    cQV05kRh[cz0aWBcgd] = -1;
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
                    cz0aWBcgd--;
                };
            };
        }
        for (i = 1; cz0aWBcgd >= i; i = i + 1) {
            oBYesR[cQV05kRh[i]] = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            cQV05kRh[i] = -1;
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
        for (i = 0; i < V8xBeMp3a1b; i++)
            if (0 < oBYesR[i])
                iEmOF95MitS = iEmOF95MitS + 1;
        for (i = 0; i < V8xBeMp3a1b &&iEmOF95MitS > 0; i++) {
            if (oBYesR[i] == 2) {
                eRuv3ODLCc = 1;
                iEmOF95MitS = iEmOF95MitS - 1;
                printf ("?");
            }
            if (oBYesR[i] == 1) {
                eRuv3ODLCc = 1;
                iEmOF95MitS = iEmOF95MitS - 1;
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
                printf ("$");
            }
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
            if (oBYesR[i] == 0 && eRuv3ODLCc == 1)
                printf (" ");
            oBYesR[i] = 0;
        }
        eRuv3ODLCc = 0;
        printf ("\n");
    }
    return 0;
}

