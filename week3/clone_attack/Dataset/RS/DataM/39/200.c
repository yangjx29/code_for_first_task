struct   student {
    char name [20];
    int score1;
    int PMZOWjs;
    char O6nvUxuaNorh;
    char west;
    int paper;
    int sum;
    struct   student *next;
};
int MvjMkqpLFBcV (struct   student *j3Ucqp6gxd) {
    int fzyQmPu;
    fzyQmPu = (69 - 69);
    if ((j3Ucqp6gxd->score1 > (206 - 126)) && (j3Ucqp6gxd->paper >= 1))
        fzyQmPu = fzyQmPu + 8000;
    if ((j3Ucqp6gxd->score1 > 85) && (j3Ucqp6gxd->PMZOWjs > 80))
        fzyQmPu = fzyQmPu + (4075 - 75);
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
    if (j3Ucqp6gxd->score1 > 90)
        fzyQmPu = fzyQmPu + (2997 - 997);
    if ((j3Ucqp6gxd->score1 > 85) && (j3Ucqp6gxd->west == 'Y'))
        fzyQmPu = fzyQmPu + 1000;
    if ((j3Ucqp6gxd->PMZOWjs > 80) && (j3Ucqp6gxd->O6nvUxuaNorh == 'Y'))
        fzyQmPu = fzyQmPu + 850;
    return (fzyQmPu);
}

void  main () {
    int n;
    int i;
    struct   student *L0gEGNSXjo1, *tZz8Xk, *j4KZGmiCk, *YQrcL7x;
    long  fVD4eFS = 0;
    YQrcL7x = NULL;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    L0gEGNSXjo1 = tZz8Xk = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d\n", L0gEGNSXjo1->name, &L0gEGNSXjo1->score1, &L0gEGNSXjo1->PMZOWjs, &L0gEGNSXjo1->O6nvUxuaNorh, &L0gEGNSXjo1->west, &L0gEGNSXjo1->paper);
    j4KZGmiCk = L0gEGNSXjo1;
    L0gEGNSXjo1->sum = MvjMkqpLFBcV (L0gEGNSXjo1);
    fVD4eFS = fVD4eFS + L0gEGNSXjo1->sum;
    {
        i = 1;
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
        while (i < n) {
            if (i == 1)
                YQrcL7x = L0gEGNSXjo1;
            else
                tZz8Xk->next = L0gEGNSXjo1;
            i = i + 1;
            tZz8Xk = L0gEGNSXjo1;
            L0gEGNSXjo1 = (struct   student *) malloc (LEN);
            scanf ("%s %d %d %c %c %d\n", L0gEGNSXjo1->name, &L0gEGNSXjo1->score1, &L0gEGNSXjo1->PMZOWjs, &L0gEGNSXjo1->O6nvUxuaNorh, &L0gEGNSXjo1->west, &L0gEGNSXjo1->paper);
            L0gEGNSXjo1->sum = MvjMkqpLFBcV (L0gEGNSXjo1);
            if (j4KZGmiCk->sum < L0gEGNSXjo1->sum)
                j4KZGmiCk = L0gEGNSXjo1;
            fVD4eFS = fVD4eFS + L0gEGNSXjo1->sum;
        };
    }
    printf ("%s\n%d\n%ld\n", j4KZGmiCk->name, j4KZGmiCk->sum, fVD4eFS);
}

