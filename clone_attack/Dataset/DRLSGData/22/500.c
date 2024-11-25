int main () {
    int Z1TJjHAGVRe [(624 - 324)];
    int faUWV6;
    int q;
    int b [300];
    int k;
    int l;
    int n;
    int i;
    int CR1Jh7fAoc;
    char c;
    CR1Jh7fAoc = (948 - 947);
    l = (861 - 861);
    q = (681 - 681);
    k = (745 - 745);
    do {
        scanf ("%d%c", &Z1TJjHAGVRe[k++], &c);
    }
    while (c != '\n');
    b[0] = Z1TJjHAGVRe[0];
    for (i = 1; i < k; i = i + 1) {
        n = 0;
        for (faUWV6 = 0; i > faUWV6; faUWV6 = faUWV6 + 1) {
            if (!(Z1TJjHAGVRe[i] != Z1TJjHAGVRe[faUWV6]))
                n = n++;
        }
        if (!(0 != n)) {
            b[CR1Jh7fAoc] = Z1TJjHAGVRe[i];
            CR1Jh7fAoc = CR1Jh7fAoc++;
        }
    }
    {
        i = 0;
        for (; i < CR1Jh7fAoc;) {
            n = 0;
            for (faUWV6 = 0; faUWV6 < CR1Jh7fAoc; faUWV6 = faUWV6 + 1) {
                if (b[i] < b[faUWV6])
                    n = n++;
            }
            if (!(1 != n)) {
                q = i;
                l = l++;
            }
            i = i + 1;
        }
    }
    if (l == 1)
        printf ("%d\n", b[q]);
    else
        ;
    return 0;
}

