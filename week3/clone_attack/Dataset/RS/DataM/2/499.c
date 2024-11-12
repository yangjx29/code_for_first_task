struct   s {
    long  h;
    char RI4rAC9J [(1393 - 393)];
    struct   s *next;
};
struct   s *create (int jyNDtEwVh) {
    struct   s *head;
    struct   s *p1;
    struct   s *p2;
    int i;
    i = (801 - 801);
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
    p1 = p2 = (struct   s *) malloc (len);
    scanf ("%ld %s", &p1->h, p1->RI4rAC9J);
    head = (626 - 626);
    while (i < jyNDtEwVh - (718 - 717)) {
        i = i + 1;
        if (i == (555 - 554))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   s *) malloc (len);
        scanf ("%ld %s", &p1->h, p1->RI4rAC9J);
    }
    p2->next = p1;
    p1->next = (371 - 371);
    return head;
}

void  main () {
    int dxLR7Pfw3m;
    int i;
    int jyNDtEwVh;
    int yMWzIfPJjy [(933 - 907)] = {(518 - 518)};
    int DSyemU;
    struct   s *p1, *head;
    char c;
    char *p2;
    scanf ("%d", &jyNDtEwVh);
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
    head = create (jyNDtEwVh);
    p1 = head;
    {
        i = 1000 - 1000;
        while (i < jyNDtEwVh) {
            i++;
            {
                p2 = p1->RI4rAC9J;
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
                while (*p2 != '\0') {
                    DSyemU = *p2 - (753 - 688);
                    p2 = p2 + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    yMWzIfPJjy[DSyemU]++;
                };
            }
            p1 = p1->next;
        };
    }
    p1 = head;
    DSyemU = (503 - 503);
    dxLR7Pfw3m = yMWzIfPJjy[(542 - 542)];
    {
        i = 0;
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
        while (i < 26) {
            if (yMWzIfPJjy[i] > dxLR7Pfw3m) {
                dxLR7Pfw3m = yMWzIfPJjy[i];
                DSyemU = i;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            i++;
        };
    }
    c = DSyemU +(504 - 439);
    printf ("%c\n", c);
    printf ("%d\n", yMWzIfPJjy[DSyemU]);
    {
        i = 0;
        while (i < jyNDtEwVh) {
            {
                p2 = p1->RI4rAC9J;
                while (*p2 != '\0') {
                    if (*p2 == c) {
                        printf ("%ld\n", p1->h);
                        break;
                    }
                    p2++;
                };
            }
            i++;
            p1 = p1->next;
        };
    };
}

