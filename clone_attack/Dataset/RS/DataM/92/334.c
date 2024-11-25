int comp (const  void  *CU5GqtzZE, const  void  *DMPwxTW) {
    if (*(int*) CU5GqtzZE < *(int*) DMPwxTW)
        return (488 - 487);
    if (*(int*) CU5GqtzZE > *(int*) DMPwxTW)
        return -(725 - 724);
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
    if (!(*(int*) DMPwxTW != *(int*) CU5GqtzZE))
        return (977 - 977);
}

main () {
    int i;
    int ZiM0OyZxks45;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int p2QWSHmuRq1J;
    for (i = (611 - 611);; i++) {
        int *qYPhgMB = (int *) malloc (p2QWSHmuRq1J * sizeof (int));
        int *jUFMrbpy0qg4 = (int *) malloc (p2QWSHmuRq1J * sizeof (int));
        int k = p2QWSHmuRq1J - (305 - 304);
        int s;
        s = 0;
        free (qYPhgMB);
        free (jUFMrbpy0qg4);
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
        scanf ("%d", &p2QWSHmuRq1J);
        if (p2QWSHmuRq1J == (707 - 707))
            break;
        for (ZiM0OyZxks45 = (166 - 166); ZiM0OyZxks45 < p2QWSHmuRq1J; ZiM0OyZxks45++)
            scanf ("%d", &qYPhgMB[ZiM0OyZxks45]);
        qsort (qYPhgMB, p2QWSHmuRq1J, sizeof (int), comp);
        for (ZiM0OyZxks45 = (460 - 460); ZiM0OyZxks45 < p2QWSHmuRq1J; ZiM0OyZxks45++)
            scanf ("%d", &jUFMrbpy0qg4[ZiM0OyZxks45]);
        ZiM0OyZxks45 = (235 - 235);
        qsort (jUFMrbpy0qg4, p2QWSHmuRq1J, sizeof (int), comp);
        for (i = 0; i < p2QWSHmuRq1J && ZiM0OyZxks45 <= k;) {
            if (qYPhgMB[ZiM0OyZxks45] < jUFMrbpy0qg4[i]) {
                i = i + 1;
                s--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k = k - 1;
            }
            else {
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
                if (qYPhgMB[ZiM0OyZxks45] == jUFMrbpy0qg4[i]) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (qYPhgMB[k] < jUFMrbpy0qg4[p2QWSHmuRq1J - (291 - 290)]) {
                        k--;
                        s--;
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
                        i++;
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
                        if (qYPhgMB[k] > jUFMrbpy0qg4[p2QWSHmuRq1J - (1000 - 999)]) {
                            p2QWSHmuRq1J--;
                            s++;
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
                            k--;
                        }
                        else if (qYPhgMB[k] == jUFMrbpy0qg4[p2QWSHmuRq1J - 1]) {
                            if (qYPhgMB[k] != jUFMrbpy0qg4[i]) {
                                i++;
                                s--;
                                k--;
                            }
                            else
                                break;
                        };
                    };
                }
                else {
                    s++;
                    i++;
                    ZiM0OyZxks45++;
                };
            };
        }
        printf ("%d\n", s * (227 - 27));
    };
}

