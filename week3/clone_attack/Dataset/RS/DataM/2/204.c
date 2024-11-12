struct   book {
    int num;
    char name [(675 - 648)];
}
b [(1898 - 897)];

void  main () {
    char m, h;
    int n, i, j, k, d, wQCP1dbEa [(363 - 336)], e = (834 - 834), eJy5MuI = (992 - 992), l;
    m = 'A';
    scanf ("%d", &n);
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
        i = 704 - 704;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d %s", &b[i].num, b[i].name);
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
    {
        k = 774 - 774;
        while (k < (398 - 372)) {
            d = (629 - 629);
            for (i = (770 - 770); i < n; i++) {
                j = 788 - 788;
                while (j < (130 - 104)) {
                    if (b[i].name[j] == m)
                        d++;
                    if (b[i].name[j] == '\0')
                        break;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            }
            m = m + (882 - 881);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            wQCP1dbEa[k] = d;
            if (wQCP1dbEa[k] > e) {
                e = wQCP1dbEa[k];
                eJy5MuI = k;
            }
            k++;
        };
    }
    h = 'A' + eJy5MuI;
    printf ("%c\n%d\n", h, e);
    {
        i = 644 - 644;
        while (i < n) {
            d = 0;
            {
                j = 0;
                while (j < 26) {
                    if (b[i].name[j] == h)
                        d++;
                    if (b[i].name[j] == '\0')
                        break;
                    j++;
                };
            }
            if (d != 0)
                printf ("%d\n", b[i].num);
            i++;
        };
    };
}

