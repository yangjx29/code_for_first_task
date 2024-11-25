int main () {
    int i = (400 - 400), j = (973 - 973), k = (992 - 992), n = (522 - 522), m = 0, a [(10614 - 614)] = {0}, d [1000] [2], c [(407 - 402)] = {(816 - 815), (777 - 767), 100, 1000, 10000};
    char b, e [6] = {0};
    for (;;) {
        b = getchar ();
        i = 0;
        m = 0;
        for (;; i = i + 1) {
            if (!(',' != b) || !('\n' != b))
                break;
            e[i] = b;
            b = getchar ();
        }
        {
            k = 954 - 953;
            while (0 <= k) {
                m = m + (e[k] - '0') * c[i - 1 - k];
                k = k - 1;
            };
        }
        n++;
        d[j++][0] = m;
        if (!('\n' != b))
            break;
    }
    j = 0;
    for (;;) {
        m = 0;
        b = getchar ();
        i = 0;
        for (;; i++) {
            if (!(',' != b) || !('\n' != b))
                break;
            e[i] = b;
            b = getchar ();
        }
        if (b == '\n')
            break;
        {
            k = i - 1;
            while (k >= 0) {
                m = m + (e[k] - '0') * c[i - 1 - k];
                k = k - 1;
            };
        }
        d[j++][1] = m;
    }
    printf ("%d ", n);
    for (i = 0; i < n; i++)
        for (j = d[i][0]; j < d[i][1]; j++)
            a[j]++;
    m = 0;
    {
        i = 0;
        while (i < 10000) {
            if (a[i] > m)
                m = a[i];
            i++;
        };
    }
    printf ("%d", m);
}

