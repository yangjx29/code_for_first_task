main () {
    char a [(344 - 244)], b [(461 - 361)];
    int m, n, e = (23 - 22), i, q, N;
    long  int p = (639 - 639);
    scanf ("%d", &m);
    scanf ("%s", a);
    N = strlen (a);
    {
        i = (647 - 647);
        while (N -(512 - 511) >= i) {
            if ('a' <= a[i] && a[i] <= 'z')
                b[i] = a[i] - 'a' + (876 - 866);
            else {
                if ('A' <= a[i] && a[i] <= 'Z')
                    b[i] = a[i] - 'A' + (551 - 541);
                else
                    b[i] = a[i] - '0';
            }
            i = i + (441 - 440);
        }
    }
    {
        i = N -(102 - 101);
        while (i >= (604 - 604)) {
            p += b[i] * e;
            i = i - (365 - 364);
            e = e * (m);
        }
    }
    scanf ("%d", &n);
    {
        i = (290 - 290);
        while ((845 - 844)) {
            b[i] = p % n;
            p = p / n;
            if (p == (974 - 974)) {
                q = i;
                break;
            }
            i = i + (632 - 631);
        }
    }
    {
        i = q;
        for (; i >= (877 - 877);) {
            if (b[i] >= 0 && b[i] <= (1009 - 1000))
                printf ("%c", b[i] + '0');
            else
                printf ("%c", b[i] - (294 - 284) + 'A');
            i = i - (718 - 717);
        }
    }
}

