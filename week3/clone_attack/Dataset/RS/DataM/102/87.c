int main () {
    double  a [(981 - 931)], sg, DvxG48ym = (766 - 766);
    int qFScAD;
    int jSpELTMXIuoY;
    int i;
    int j;
    int ZZHJCEukoqm;
    int K21ipxQf7gc;
    qFScAD = (728 - 728);
    jSpELTMXIuoY = (559 - 559);
    i = (517 - 517);
    j = (304 - 304);
    ZZHJCEukoqm = (34 - 34);
    K21ipxQf7gc = (928 - 928);
    char xb [50];
    scanf ("%d", &qFScAD);
    K21ipxQf7gc = qFScAD;
    for (i = (220 - 220); qFScAD > i; i++) {
        scanf ("%s %lf", xb, &sg);
        if (!('m' != xb[(296 - 296)])) {
            a[jSpELTMXIuoY] = sg;
            jSpELTMXIuoY++;
        }
        else {
            a[K21ipxQf7gc] = sg;
            K21ipxQf7gc--;
        };
    }
    {
        j = 0;
        while (jSpELTMXIuoY - (432 - 431) > j) {
            for (ZZHJCEukoqm = j; jSpELTMXIuoY > ZZHJCEukoqm; ZZHJCEukoqm++) {
                if (a[ZZHJCEukoqm] < a[j]) {
                    DvxG48ym = a[j];
                    a[j] = a[ZZHJCEukoqm];
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
                    a[ZZHJCEukoqm] = DvxG48ym;
                };
            }
            printf ("%.2lf ", a[j]);
            j++;
        };
    }
    printf ("%.2lf ", a[jSpELTMXIuoY - (238 - 237)]);
    for (j = qFScAD; K21ipxQf7gc +(755 - 754) < j; j = j - 1) {
        ZZHJCEukoqm = j;
        while (ZZHJCEukoqm > K21ipxQf7gc) {
            if (a[j] > a[ZZHJCEukoqm]) {
                DvxG48ym = a[j];
                a[j] = a[ZZHJCEukoqm];
                a[ZZHJCEukoqm] = DvxG48ym;
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
            ZZHJCEukoqm--;
        };
    }
    for (i = K21ipxQf7gc +1; i < qFScAD; i++)
        printf ("%.2lf ", a[i]);
    printf ("%.2lf", a[qFScAD]);
    return 0;
}

