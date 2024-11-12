void  input ();
void  arrange ();
void  add ();
void  output ();
int a [100], b [100], c [200], n1, n2;

void  main () {
    input ();
    arrange ();
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
    add ();
    output ();
}

void  input () {
    int a1xHLjZRzYi7, j;
    scanf ("%d %d", &n1, &n2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (a1xHLjZRzYi7 = (381 - 381); n1 > a1xHLjZRzYi7; a1xHLjZRzYi7 = a1xHLjZRzYi7 + 1)
        scanf ("%d", &a[a1xHLjZRzYi7]);
    {
        j = 0;
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
        while (n2 > j) {
            scanf ("%d", &b[j]);
            j++;
        };
    };
}

void  arrange () {
    int a1xHLjZRzYi7;
    int j;
    int xKdpEsTA;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    for (a1xHLjZRzYi7 = 0; n1 > a1xHLjZRzYi7; a1xHLjZRzYi7 = a1xHLjZRzYi7 + 1)
        for (j = a1xHLjZRzYi7; n1 > j; j = j + 1)
            if (a[j] < a[a1xHLjZRzYi7]) {
                xKdpEsTA = a[a1xHLjZRzYi7];
                a[a1xHLjZRzYi7] = a[j];
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
                a[j] = xKdpEsTA;
            }
    for (a1xHLjZRzYi7 = 0; n2 > a1xHLjZRzYi7; a1xHLjZRzYi7++)
        for (j = a1xHLjZRzYi7; n2 > j; j++)
            if (b[j] < b[a1xHLjZRzYi7]) {
                xKdpEsTA = b[a1xHLjZRzYi7];
                b[a1xHLjZRzYi7] = b[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                b[j] = xKdpEsTA;
            };
}

void  add () {
    int a1xHLjZRzYi7;
    for (a1xHLjZRzYi7 = 0; n1 > a1xHLjZRzYi7; a1xHLjZRzYi7++) {
        c[a1xHLjZRzYi7] = a[a1xHLjZRzYi7];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (a1xHLjZRzYi7 = n1; n1 + n2 > a1xHLjZRzYi7; a1xHLjZRzYi7++) {
        c[a1xHLjZRzYi7] = b[a1xHLjZRzYi7 - n1];
    };
}

void  output () {
    int a1xHLjZRzYi7;
    for (a1xHLjZRzYi7 = 0; a1xHLjZRzYi7 < n1 + n2; a1xHLjZRzYi7++) {
        printf ("%d", c[a1xHLjZRzYi7]);
        if (a1xHLjZRzYi7 < n1 + n2 - 1)
            ;
        else
            ;
    };
}

