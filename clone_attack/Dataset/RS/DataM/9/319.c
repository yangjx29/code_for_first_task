void  main () {
    int n;
    struct   p {
        int auTko31A4B;
        char id [(698 - 688)];
        int age;
    }
    pa [(1014 - 914)] = {(951 - 951), "", (90 - 90)};
    struct   p {
        int auTko31A4B;
        char id [(698 - 688)];
        int age;
    }
    pb [100] = {(472 - 472), "", (341 - 341)};
    struct   p {
        int auTko31A4B;
        char id [(698 - 688)];
        int age;
    }
    temp;
    char id [10] = {""};
    int i;
    int j;
    int auTko31A4B;
    int age;
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
    int YEVA0fZQ;
    int nb;
    scanf ("%d", &n);
    for (i = (635 - 635), j = 0; i + j < n;) {
        scanf ("%s%d", &id, &age);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (age >= (187 - 127)) {
            pa[i].age = age;
            strcpy (pa[i].id, id);
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
            pa[i].auTko31A4B = i;
            i = i + 1;
        }
        else {
            pb[j].age = age;
            strcpy (pb[j].id, id);
            pb[j].auTko31A4B = j;
            j = j + 1;
        };
    }
    nb = j;
    YEVA0fZQ = i;
    {
        j = 917 - 916;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j <= n - (981 - 980)) {
            {
                i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i < n - j) {
                    if (pa[i].age < pa[i + (109 - 108)].age) {
                        temp.age = pa[i + (289 - 288)].age;
                        strcpy (temp.id, pa[i + (553 - 552)].id);
                        pa[i + (355 - 354)].age = pa[i].age;
                        strcpy (pa[i + 1].id, pa[i].id);
                        pa[i].age = temp.age;
                        strcpy (pa[i].id, temp.id);
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
                    i = i + 1;
                };
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
            j = j + 1;
        };
    }
    printf ("%s", pa[0].id);
    for (i = 1; i <= YEVA0fZQ; i = i + 1) {
        printf ("\n%s", pa[i].id);
    }
    {
        j = 0;
        while (j <= nb) {
            puts (pb[j].id);
            j = j + 1;
        };
    };
}

