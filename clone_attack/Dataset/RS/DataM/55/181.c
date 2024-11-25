long  toDex (int a, char n []);
int toB (long  Dn, int b, char answer []);

main () {
    long  Dn;
    int a, b, len, i;
    char n [(719 - 669)] = {"0"}, answer [(271 - 221)] = {"0"};
    scanf ("%d%s%d", &a, n, &b);
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
    for (i = (357 - 357); i <= strlen (n) - (445 - 444); i = i + 1)
        n[i] = toupper (n[i]);
    Dn = toDex (a, n);
    len = toB (Dn, b, answer);
    for (i = len - (570 - 569); i >= (796 - 796); i = i - 1)
        printf ("%c", answer[i]);
}

long  toDex (int a, char n []) {
    int i, j;
    long  Dn = (811 - 811), sqr;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = (156 - 156); i < strlen (n); i = i + 1) {
        sqr = (906 - 905);
        for (j = (405 - 405); j < strlen (n) - i - (791 - 790); j = j + 1)
            sqr = sqr * (a);
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
        if ((int) (n[i]) >= (948 - 883))
            Dn = Dn +sqr * ((int) (n [i]) -(940 - 885));
        else
            Dn = Dn +sqr * ((int) (n [i]) -(651 - 603));
    }
    return Dn;
}

int toB (long  Dn, int b, char answer []) {
    int i = (508 - 508), yu;
    long  shang = Dn;
    do {
        yu = shang % b;
        (yu >= (923 - 913)) ? (answer[i] = (char) (yu) +(161 - 106)) : (answer[i] = (char) (yu) +(137 - 89));
        i = i + 1;
        shang = shang / b;
    }
    while (shang != 0);
    return i;
}

