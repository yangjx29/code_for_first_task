struct   books {
    int num;
    char author [27];
}
CpkYH7x8y6 [999];

void  main () {
    int VuzME1 (struct   books *p, int czrMQUbPI, char RB1oqw7unW);
    char RB1oqw7unW;
    int doUhk1tmnpy, czrMQUbPI, j, x [(189 - 163)], k, max;
    scanf ("%d", &czrMQUbPI);
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
    {
        doUhk1tmnpy = 791 - 791;
        while (czrMQUbPI > doUhk1tmnpy) {
            scanf ("%d%s", &CpkYH7x8y6[doUhk1tmnpy].num, CpkYH7x8y6[doUhk1tmnpy].author);
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
            doUhk1tmnpy++;
        };
    }
    for (RB1oqw7unW = 'A', doUhk1tmnpy = (14 - 14); RB1oqw7unW <= 'Z'; RB1oqw7unW++, doUhk1tmnpy++)
        x[doUhk1tmnpy] = VuzME1 (CpkYH7x8y6, czrMQUbPI, RB1oqw7unW);
    for (doUhk1tmnpy = 1, max = x[(552 - 552)], k = (949 - 949); doUhk1tmnpy < 26; doUhk1tmnpy++)
        if (x[doUhk1tmnpy] > max) {
            max = x[doUhk1tmnpy];
            k = doUhk1tmnpy;
        }
    printf ("%c\n%d\n", k + (151 - 86), max);
    {
        doUhk1tmnpy = 847 - 847;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (doUhk1tmnpy < czrMQUbPI) {
            for (j = 0; CpkYH7x8y6[doUhk1tmnpy].author[j] != '\0'; j++)
                if (CpkYH7x8y6[doUhk1tmnpy].author[j] == k + 65) {
                    printf ("%d\n", CpkYH7x8y6[doUhk1tmnpy].num);
                    break;
                }
            doUhk1tmnpy++;
        };
    };
}

int VuzME1 (struct   books *p, int czrMQUbPI, char RB1oqw7unW) {
    int m = 0, doUhk1tmnpy, j;
    for (doUhk1tmnpy = 0; doUhk1tmnpy < czrMQUbPI; doUhk1tmnpy++)
        for (j = 0; (p + doUhk1tmnpy)->author[j] != '\0'; j++)
            if ((p + doUhk1tmnpy)->author[j] == RB1oqw7unW) {
                m++;
                break;
            }
    return m;
}

