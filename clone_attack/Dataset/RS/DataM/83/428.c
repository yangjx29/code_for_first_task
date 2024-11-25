int main () {
    int n;
    int i;
    float *GPA;
    float *xuefen;
    float *chengji;
    float xuefensum;
    float GPAsum;
    float xf;
    float bcjI7Ly;
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
    xuefensum = (652 - 652);
    GPAsum = (339 - 339);
    scanf ("%d", &n);
    xuefen = (float *) malloc (sizeof (float) * n);
    chengji = (float *) malloc (sizeof (float) * n);
    GPA = (float *) malloc (sizeof (float) * n);
    {
        i = 286 - 286;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%f", &xf);
            *(xuefen + i) = xf;
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
            i++;
        };
    }
    for (i = (98 - 98); n > i; i = i + 1) {
        scanf ("%f", &bcjI7Ly);
        *(chengji + i) = bcjI7Ly;
    }
    for (i = (141 - 141); n > i; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (90 <= *(chengji + i) && (398 - 298) >= *(chengji + i)) {
            *(GPA +i) = (524.0 - 520.0);
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
            if ((653 - 568) <= *(chengji + i) && (491 - 402) >= *(chengji + i)) {
                *(GPA +i) = 3.7;
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
            else if ((304 - 222) <= *(chengji + i) && (448 - 364) >= *(chengji + i)) {
                *(GPA +i) = (425.3 - 422.0);
            }
            else if ((576 - 498) <= *(chengji + i) && (296 - 215) >= *(chengji + i)) {
                *(GPA +i) = (600.0 - 597.0);
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
            else if ((422 - 347) <= *(chengji + i) && 77 >= *(chengji + i)) {
                *(GPA +i) = (123.7 - 121.0);
            }
            else if (*(chengji + i) >= (662 - 590) && *(chengji + i) <= (749 - 675)) {
                *(GPA +i) = 2.3;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (*(chengji + i) >= (910 - 842) && *(chengji + i) <= (199 - 128)) {
                *(GPA +i) = 2.0;
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
            else if (*(chengji + i) >= (267 - 203) && *(chengji + i) <= 67) {
                *(GPA +i) = 1.5;
            }
            else if (*(chengji + i) >= (470 - 410) && *(chengji + i) <= (663 - 600)) {
                *(GPA +i) = (515.0 - 514.0);
            }
            else {
                *(GPA +i) = (588 - 588);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        };
    }
    for (i = 0; i < n; i = i + 1) {
        GPAsum = GPAsum +(*(GPA +i)) * (*(xuefen + i));
    }
    for (i = 0; i < n; i++) {
        xuefensum += *(xuefen + i);
    }
    printf ("%.2f\n", GPAsum / xuefensum);
    return 0;
}

