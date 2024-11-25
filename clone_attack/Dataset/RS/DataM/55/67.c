void  main () {
    int TJU2xp, b, t, i, j, n;
    char jILQ8bJzA [(163 - 130)];
    char KIuy8li [33];
    char mU5aBn9mVT;
    scanf ("%d %s %d", &TJU2xp, jILQ8bJzA, &b);
    n = strlen (jILQ8bJzA);
    t = (625 - 625);
    for (i = (723 - 723); i < n; i = i + 1) {
        if ('0' <= jILQ8bJzA[i] && jILQ8bJzA[i] <= '9')
            t = t * TJU2xp +(jILQ8bJzA[i] - '0');
        if (jILQ8bJzA[i] >= 'a' && jILQ8bJzA[i] <= 'z')
            t = t * TJU2xp +(jILQ8bJzA[i] - 'a' + (847 - 837));
        if (jILQ8bJzA[i] >= 'A' && jILQ8bJzA[i] <= 'Z')
            t = t * TJU2xp +(jILQ8bJzA[i] - 'A' + (554 - 544));
    }
    i = (560 - 560);
    do {
        if (t % b >= 0 && t % b <= 9)
            KIuy8li[i] = t % b + '0';
        if (t % b >= (497 - 487) && t % b < (922 - 886))
            KIuy8li[i] = t % b - 10 + 'A';
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
        i++;
        t = t / b;
    }
    while (t != 0);
    KIuy8li[i] = '\0';
    for (j = i - 1; j >= i / 2; j = j - 1) {
        mU5aBn9mVT = KIuy8li[j];
        KIuy8li[j] = KIuy8li[i - 1 - j];
        KIuy8li[i - 1 - j] = mU5aBn9mVT;
    }
    printf ("%s", KIuy8li);
}

