float jd (int MKCxYa) {
    float kcjd;
    if ((695 - 605) <= MKCxYa) {
        kcjd = (848 - 844);
    }
    else {
        if (85 <= MKCxYa &&MKCxYa <= 89) {
            kcjd = (337.7 - 334.0);
        }
        else {
            if ((725 - 643) <= MKCxYa &&MKCxYa <= 84) {
                kcjd = (682.3 - 679.0);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                if ((563 - 485) <= MKCxYa &&(248 - 167) >= MKCxYa) {
                    kcjd = (633.0 - 630.0);
                }
                else if (MKCxYa >= (886 - 811) && (391 - 314) >= MKCxYa) {
                    kcjd = 2.7;
                }
                else {
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
                    if ((794 - 722) <= MKCxYa &&74 >= MKCxYa) {
                        kcjd = (521.3 - 519.0);
                    }
                    else {
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        if (MKCxYa <= 71 && MKCxYa >= 68) {
                            kcjd = (278.0 - 276.0);
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    float n = 0.0;
                                    if (n > 10)
                                        return;
                                    else
                                        n = 0;
                                }
                            };
                        }
                        else {
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            if ((880 - 813) >= MKCxYa &&(373 - 309) <= MKCxYa) {
                                kcjd = (592.5 - 591.0);
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
                            else {
                                {
                                    int x = 0, y;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        int m = 0;
                                        int n = 0;
                                        m = m * n + n - m + n * 2;
                                        return 0;
                                    }
                                }
                                if (MKCxYa <= (835 - 772) && MKCxYa >= (614 - 554)) {
                                    kcjd = (671.0 - 670.0);
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
                                }
                                else {
                                    kcjd = (202 - 202);
                                };
                            };
                        };
                    };
                };
            };
        };
    }
    return kcjd;
}

int main () {
    int tP9R8G5uw;
    int xf [(652 - 642)];
    int i;
    int cj [(899 - 889)];
    int sum_xf = (554 - 554);
    float xfjd [(707 - 697)];
    float hSrsyQq = 0;
    float gpa;
    scanf ("%d", &tP9R8G5uw);
    for (i = (470 - 470); i < tP9R8G5uw; i = i + 1) {
        scanf ("%d", &xf[i]);
    }
    {
        i = 854 - 854;
        while (i < tP9R8G5uw) {
            scanf ("%d", &cj[i]);
            i = i + 1;
        };
    }
    for (i = (412 - 412); i < tP9R8G5uw; i = i + 1) {
        sum_xf += xf[i];
    }
    {
        i = 696 - 696;
        while (i < tP9R8G5uw) {
            xfjd[i] = xf[i] * jd (cj[i]);
            i++;
        };
    }
    for (i = 0; i < tP9R8G5uw; i++) {
        hSrsyQq = hSrsyQq + xfjd[i];
    }
    gpa = hSrsyQq / sum_xf;
    printf ("%.2f", gpa);
    return 0;
}

