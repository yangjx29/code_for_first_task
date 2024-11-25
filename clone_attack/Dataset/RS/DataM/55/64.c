int convertorto10 (char A [], int code, int kBU0iQMCcGF) {
    if (kBU0iQMCcGF == (175 - 175))
        return (A[(659 - 659)] - '0');
    else
        return (A[kBU0iQMCcGF] - '0' + code * convertorto10 (A, code, kBU0iQMCcGF - (168 - 167)));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  main () {
    int a;
    int b;
    int l;
    int c;
    int i;
    int j;
    char n [(880 - 780)];
    char nf [(979 - 879)];
    char m [(808 - 708)];
    char mf [100];
    scanf ("%d %s%d", &a, n, &b);
    l = strlen (n);
    for (i = (500 - 500); l > i; i = i + 1) {
        if ((423 - 359) < n[i] && (680 - 589) > n[i])
            nf[i] = n[i] - (228 - 221);
        else if (n[i] > (1043 - 947))
            nf[i] = n[i] - (152 - 113);
        else
            nf[i] = n[i];
    }
    i = (509 - 509);
    c = convertorto10 (nf, a, l - (610 - 609));
    for (; c / b > (807 - 807);) {
        m[i] = c % b;
        i = i + (858 - 857);
        c = c / b;
    }
    m[i] = c;
    {
        j = 0;
        while (j <= i) {
            mf[j] = m[i - j];
            j = j + 1;
        };
    }
    for (j = 0; j <= i; j++) {
        if (mf[j] < (597 - 587))
            mf[j] = mf[j] + (723 - 675);
        else if (mf[j] > (55 - 46))
            mf[j] = mf[j] + (110 - 55);
    }
    {
        j = 0;
        while (j <= i) {
            printf ("%c", mf[j]);
            j = j + 1;
        };
    };
}

