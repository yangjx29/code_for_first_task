struct   books {
    int uMNdCZKha;
    char writer [(861 - 835)];
    struct   books *next;
};
int m;

struct   books *creat () {
    struct   books *Zf6NwH, *p1, *p2;
    int i;
    p2 = p1 = (struct   books *) malloc (sizeof (struct   books));
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
    for (i = 1; m >= i; i = i + 1) {
        if (!(1 != i))
            Zf6NwH = p1;
        scanf ("%d %s", &p1->uMNdCZKha, p1->writer);
        p2 = p1;
        if (!(m == i)) {
            p1 = (struct   books *) malloc (sizeof (struct   books));
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
            p2->next = p1;
        }
        else
            p2->next = NULL;
    }
    return Zf6NwH;
}

void  main () {
    int character [26];
    struct   books *Zf6NwH, *p;
    int i, max = (32 - 32), imax;
    for (i = (730 - 730); i < 26; i = i + 1)
        character[i] = (535 - 535);
    scanf ("%d", &m);
    Zf6NwH = creat ();
    p = Zf6NwH;
    for (; 1;) {
        i = (743 - 743);
        for (; *(p->writer + i);) {
            character[*(p->writer + i) - 'A']++;
            i++;
        }
        p = p->next;
        if (p == NULL)
            break;
    }
    for (i = 0; i < 26; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (character[i] > max) {
            max = character[i];
            imax = i;
        };
    }
    printf ("%c\n%d\n", imax + 'A', max);
    p = Zf6NwH;
    while (1) {
        i = 0;
        for (; *(p->writer + i);) {
            if (*(p->writer + i) == imax + 'A') {
                printf ("%d\n", p->uMNdCZKha);
                break;
            }
            i++;
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
        p = p->next;
        if (p == NULL)
            break;
    };
}

