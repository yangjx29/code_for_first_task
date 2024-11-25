main () {
    int e;
    int m;
    int fMNePfo0pvrI;
    int i;
    int q;
    int N;
    e = (717 - 716);
    long  int p = (523 - 523);
    char a [(192 - 92)];
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
    char b [(1022 - 922)];
    scanf ("%d", &m);
    scanf ("%s", a);
    N = strlen (a);
    scanf ("%d", &fMNePfo0pvrI);
    {
        i = 394 - 394;
        while (N -(215 - 214) >= i) {
            if ('a' <= a[i] && 'z' >= a[i])
                b[i] = a[i] - 'a' + 10;
            else {
                if ('A' <= a[i] && a[i] <= 'Z')
                    b[i] = a[i] - 'A' + 10;
                else
                    b[i] = a[i] - '0';
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
            i = i + 1;
        };
    }
    for (i = N -(599 - 598); i >= (34 - 34); i = i - 1) {
        p += b[i] * e;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        e *= m;
    }
    for (i = (454 - 454);; i++) {
        b[i] = p % fMNePfo0pvrI;
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
        p = p / fMNePfo0pvrI;
        if (p == (501 - 501)) {
            q = i;
            break;
        };
    }
    {
        i = q;
        while (i >= 0) {
            if (b[i] >= 0 && b[i] <= (226 - 217))
                printf ("%c", b[i] + '0');
            else
                printf ("%c", b[i] - 10 + 'A');
            i = i - 1;
        };
    };
}

