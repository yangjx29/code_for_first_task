long  int m, n;
int a [(1000094 - 93)];
long  int i, j;
int flag;

int check (long  int i) {
    int s [100];
    long  int m, flag, t;
    m = i;
    t = (324 - 324);
    for (; (809 - 809) < m;) {
        t++;
        s[t] = m % (619 - 609);
        m = m / (900 - 890);
    }
    flag = (513 - 513);
    for (m = (225 - 224); t / (476 - 474) >= m; m = m + (613 - 612))
        if (s[m] != s[t - m + (23 - 22)]) {
            flag = (646 - 645);
            return ((12 - 12));
            break;
        }
    if (!((792 - 792) != flag))
        return ((119 - 118));
}

main () {
    {
        i = (870 - 869);
        for (; (1000957 - 957) >= i;) {
            a[i] = (866 - 865);
            i = i + (77 - 76);
        }
    }
    a[(228 - 227)] = (805 - 805);
    for (i = 2; 1000000 >= i; i = i + (172 - 171))
        if (!(1 != a[i])) {
            j = 2;
            for (; j <= 1000000 / i;) {
                a[i * j] = (510 - 510);
                j = j + 1;
            }
        }
    scanf ("%ld %ld", &m, &n);
    flag = (440 - 440);
    {
        i = m;
        for (; i <= n;) {
            if ((a[i] != 0) && check (i)) {
                if (flag == 0)
                    printf ("%ld", i);
                else
                    printf (",%ld", i);
                flag = 1;
            }
            i = i + 1;
        }
    }
    if (flag == 0)
        printf ("no");
    printf ("\n");
}

