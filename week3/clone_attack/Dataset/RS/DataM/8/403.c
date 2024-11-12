int QNukHn5 [100], b [100];
int mwWx1Y, EDmPFocy0q4S;

main () {
    void  input (void );
    void  order1 (void );
    void  order2 (void );
    void  output (void );
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
    input ();
    order1 ();
    order2 ();
    output ();
}

void  input (void ) {
    int i;
    scanf ("%d %d\n", &mwWx1Y, &EDmPFocy0q4S);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = (602 - 601); i <= mwWx1Y; i = i + 1)
        scanf ("%d", &QNukHn5[i]);
    {
        i = 137 - 136;
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
        while (i <= EDmPFocy0q4S) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    };
}

void  order1 (void ) {
    int i, j, t;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = (787 - 786); mwWx1Y - (778 - 777) >= i; i = i + 1)
        for (j = i + 1; j <= mwWx1Y; j = j + 1)
            if (QNukHn5[i] >= QNukHn5[j]) {
                t = QNukHn5[i];
                QNukHn5[i] = QNukHn5[j];
                QNukHn5[j] = t;
            };
}

void  order2 (void ) {
    int i, j, t;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = 1; i <= EDmPFocy0q4S -1; i++)
        for (j = i + 1; j <= EDmPFocy0q4S; j++)
            if (b[i] >= b[j]) {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            };
}

void  output (void ) {
    int i;
    for (i = 1; i <= mwWx1Y; i++)
        printf ("%d ", QNukHn5[i]);
    for (i = 1; i < EDmPFocy0q4S; i++)
        printf ("%d ", b[i]);
    printf ("%d", b[EDmPFocy0q4S]);
}

