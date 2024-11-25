void  main () {
    int c [300] = {0};
    int i, j, sScUvLTlrE21 = 0, flag, te, l;
    char a [300], min, tr;
    char b [300] = {'\0'};
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
    gets (a);
    for (i = 0; !('\0' == a[i]); i = i + 1) {
        flag = 0;
        if ('a' <= a[i] && 'z' >= a[i]) {
            for (j = 0; 300 > j; j = j + 1)
                if (!(b[j] != a[i])) {
                    flag = 1;
                    c[j] = c[j] + 1;
                }
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
            if (!(1 == flag)) {
                b[sScUvLTlrE21] = a[i];
                c[sScUvLTlrE21] = c[sScUvLTlrE21] + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sScUvLTlrE21 = sScUvLTlrE21 + 1;
            };
        };
    }
    l = strlen (b);
    for (i = 0; l > i; i = i + 1) {
        min = i;
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
        for (j = i; j < l; j = j + 1)
            if (b[j] < b[min])
                min = j;
        if (min != i) {
            tr = b[i];
            te = c[i];
            b[i] = b[min];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            c[i] = c[min];
            b[min] = tr;
            c[min] = te;
        };
    }
    if (b[0] == '\0')
        ;
    else
        for (i = 0; i < l; i++)
            printf ("%c=%d\n", b[i], c[i]);
}

