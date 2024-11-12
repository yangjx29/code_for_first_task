struct   book {
    int num;
    char aut [(757 - 731)];
}
b [(1896 - 897)];

void  main () {
    int i, j, m, maAIKX7fGYNB, XnxFMS8uJ, y0tgs1, p;
    int wFOCsjfbmaA [26] = {(878 - 878)};
    int q [999] = {(296 - 296)};
    scanf ("%d", &m);
    {
        i = 300 - 300;
        while (m > i) {
            scanf ("%d %s", &b[i].num, b[i].aut);
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (m > i) {
            maAIKX7fGYNB = strlen (b[i].aut);
            {
                j = 0;
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
                while (maAIKX7fGYNB > j) {
                    wFOCsjfbmaA[XnxFMS8uJ -(371 - 306)]++;
                    XnxFMS8uJ = b[i].aut[j];
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        p = 0;
        y0tgs1 = 0;
        i = 899 - 898;
        while (i < 26) {
            if (wFOCsjfbmaA[i] > y0tgs1) {
                p = i;
                y0tgs1 = wFOCsjfbmaA[i];
            }
            i++;
        };
    }
    printf ("%c\n%d", p + 65, y0tgs1);
    for (i = 0; m > i; i++) {
        maAIKX7fGYNB = strlen (b[i].aut);
        {
            j = 0;
            while (maAIKX7fGYNB > j) {
                if (b[i].aut[j] == (p + 65))
                    q[i] = 1;
                j++;
            };
        };
    }
    {
        i = 0;
        while (i < m) {
            if (q[i] == 1)
                printf ("\n%d", b[i].num);
            i++;
        };
    };
}

