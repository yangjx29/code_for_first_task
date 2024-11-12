main () {
    int n, NYkvDLsH [(633 - 133)] = {0}, i, yI251jc, k, LxQuoICZiB, m, stQOwsI, fHyOwM, pR6wbS;
    char str [600], qYHN6nPXy2 [(90 - 80)];
    scanf ("%d", &n);
    scanf ("%s", &str);
    LxQuoICZiB = strlen (str);
    {
        i = 0;
        while (i <= LxQuoICZiB -n - (537 - 536)) {
            NYkvDLsH[i] = 1;
            {
                yI251jc = 0;
                while (yI251jc <= n - 1) {
                    qYHN6nPXy2[yI251jc] = str[i + yI251jc];
                    yI251jc++;
                };
            }
            {
                k = i + 1;
                while (k <= LxQuoICZiB -n) {
                    {
                        fHyOwM = 0;
                        stQOwsI = 0;
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
                        m = k;
                        while (stQOwsI <= n - 1) {
                            if (!(qYHN6nPXy2[stQOwsI] != str[m])) {
                                fHyOwM++;
                            }
                            else {
                                break;
                            }
                            stQOwsI++;
                            m++;
                        };
                    }
                    if (fHyOwM == n) {
                        NYkvDLsH[i] = (NYkvDLsH[i] + 1);
                        NYkvDLsH[k] = -5000;
                    }
                    k++;
                };
            }
            i++;
        };
    }
    fHyOwM = 1;
    pR6wbS = NYkvDLsH[0];
    {
        i = 1;
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
        while (i <= LxQuoICZiB -n - 1) {
            if (NYkvDLsH[i] > pR6wbS) {
                pR6wbS = NYkvDLsH[i];
            }
            if (NYkvDLsH[i] == pR6wbS) {
                fHyOwM++;
            }
            i++;
        };
    }
    if (pR6wbS != 1) {
        printf ("%d\n", pR6wbS);
        {
            i = 0;
            while (i <= LxQuoICZiB -n) {
                if (NYkvDLsH[i] == pR6wbS) {
                    {
                        stQOwsI = i;
                        while (stQOwsI <= i + n - 1) {
                            printf ("%c", str[stQOwsI]);
                            stQOwsI++;
                        };
                    };
                }
                i++;
            };
        };
    }
    else {
    }
    return 0;
}

