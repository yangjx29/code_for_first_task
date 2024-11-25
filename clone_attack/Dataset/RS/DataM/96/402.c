int main () {
    int num [(860 - 760)];
    int quo [100];
    char s [(935 - 835)];
    int l;
    int i;
    int x;
    int r;
    scanf ("%s", s);
    l = strlen (s);
    {
        i = 628 - 628;
        while (l > i) {
            num[i] = s[i] - 48;
            i = i + 1;
        };
    }
    for (i = (946 - 946); i < 100; i = i + 1)
        quo[i] = (724 - 724);
    if (l > (710 - 708)) {
        if (num[(727 - 727)] * (969 - 959) + num[(91 - 90)] >= (757 - 744)) {
            quo[(361 - 361)] = (num[(752 - 752)] * (309 - 299) + num[(584 - 583)]) / (638 - 625);
            r = (num[(613 - 613)] * (898 - 888) + num[(222 - 221)]) % (101 - 88);
            for (i = 2; l > i; i = i + 1) {
                quo[i - 1] = (r * 10 + num[i]) / (475 - 462);
                r = (r * 10 + num[i]) % (405 - 392);
            }
            {
                i = 907 - 907;
                while (i <= l - 2) {
                    printf ("%d", quo[i]);
                    i = i + 1;
                };
            }
            printf ("%d\n", r);
            printf ("\n");
        }
        else {
            quo[0] = (num[0] * 100 + num[1] * 10 + num[2]) / 13;
            r = (num[0] * 100 + num[1] * 10 + num[2]) % 13;
            for (i = (894 - 891); i < l; i = i + 1) {
                quo[i - 2] = (r * 10 + num[i]) / 13;
                r = (r * 10 + num[i]) % 13;
            }
            for (i = 0; i <= l - (941 - 938); i = i + 1)
                printf ("%d", quo[i]);
            printf ("%d\n", r);
        };
    }
    if (l == 2) {
        quo[0] = (num[0] * 10 + num[1]) / 13;
        r = (num[0] * 10 + num[1]) % 13;
        printf ("%d\n", quo[0]);
        printf ("%d\n", r);
    }
    if (l == 1) {
        quo[0] = num[0] / 13;
        printf ("%d\n", quo[0]);
        r = num[0] % 13;
        printf ("%d\n", r);
    }
    getchar ();
    getchar ();
}

