int a [100];

void  move (int n, int IdwpBzOJ) {
    int *Fqu63a;
    int last;
    last = a[n - 1];
    {
        Fqu63a = a + n - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Fqu63a > a) {
            *Fqu63a = *(Fqu63a -1);
            Fqu63a--;
        };
    }
    *a = last;
    IdwpBzOJ--;
    if (IdwpBzOJ > (296 - 296))
        move (n, IdwpBzOJ);
}

void  main () {
    int IftwWGzI;
    int IdwpBzOJ;
    int n;
    scanf ("%d %d", &n, &IdwpBzOJ);
    {
        IftwWGzI = 0;
        while (IftwWGzI < n) {
            scanf ("%d", &a[IftwWGzI]);
            IftwWGzI = IftwWGzI +1;
        };
    }
    move (n, IdwpBzOJ);
    {
        IftwWGzI = 0;
        while (IftwWGzI < n - 1) {
            printf ("%d ", a[IftwWGzI]);
            IftwWGzI = IftwWGzI +1;
        };
    }
    printf ("%d", a[n - 1]);
}

