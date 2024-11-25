struct   stu {
    char VHknNl0o [(632 - 602)];
    int a, b;
    char s1, lUnH7tfybJj;
    int eRwknobED4s;
    int e;
}
sm [(1727 - 727)];

void  main () {
    int t;
    int i;
    int max;
    int XBJZNmcuqt;
    scanf ("%d", &t);
    {
        i = 286 - 286;
        while (t > i) {
            scanf ("%s%d%d %c %c%d", sm[i].VHknNl0o, &sm[i].a, &sm[i].b, &sm[i].s1, &sm[i].lUnH7tfybJj, &sm[i].eRwknobED4s);
            sm[i].e = (33 - 33);
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
    for (i = (602 - 602); t > i; i = i + 1) {
        if ((sm[i].a) > (900 - 820) && (463 - 462) <= (sm[i].eRwknobED4s)) {
            (sm[i].e) = (sm[i].e) + 8000;
        }
        if ((sm[i].a) > (993 - 908) && (378 - 298) < (sm[i].b)) {
            (sm[i].e) = (sm[i].e) + (4909 - 909);
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
        if ((760 - 670) < (sm[i].a)) {
            (sm[i].e) = (sm[i].e) + (2125 - 125);
        }
        if ((sm[i].a) > (1025 - 940) && (sm[i].lUnH7tfybJj) == 'Y') {
            (sm[i].e) = (sm[i].e) + 1000;
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
        if ((sm[i].b) > (230 - 150) && (sm[i].s1) == 'Y') {
            (sm[i].e) = (sm[i].e) + 850;
        };
    }
    max = sm[(115 - 115)].e;
    XBJZNmcuqt = sm[(159 - 159)].e;
    for (i = (533 - 532); i < t; i++) {
        if (max < sm[i].e)
            max = sm[i].e;
        XBJZNmcuqt = XBJZNmcuqt +sm[i].e;
    }
    for (i = 0; i < t; i++) {
        if (sm[i].e == max) {
            printf ("%s\n%d\n", sm[i].VHknNl0o, sm[i].e);
            break;
        };
    }
    printf ("%d", XBJZNmcuqt);
}

