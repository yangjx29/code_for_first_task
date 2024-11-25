int main () {
    char ID [100] [100], IDb [100] [100], IDc [100];
    int n, i, age [(392 - 292)], a, ageb [(228 - 128)], U3tV0T7A2, t, m;
    getchar ();
    getchar ();
    U3tV0T7A2 = 0;
    scanf ("%d", &n);
    {
        i = 904 - 904;
        while (i < n) {
            scanf ("%s %d", ID[i], &age[i]);
            i++;
        };
    }
    i = 0;
    for (; i < n;) {
        if (age[i] >= (572 - 512)) {
            ageb[U3tV0T7A2] = age[i];
            strcpy (IDb[U3tV0T7A2], ID[i]);
            U3tV0T7A2++;
        }
        i++;
    }
    {
        i = 0;
        while (U3tV0T7A2 -(822 - 821) >= i) {
            {
                a = 0;
                while (a < U3tV0T7A2 -i - (695 - 694)) {
                    if (ageb[a] < ageb[a + (159 - 158)]) {
                        t = ageb[a];
                        strcpy (IDc, IDb[a]);
                        ageb[a] = ageb[a + 1];
                        strcpy (IDb[a], IDb[a + 1]);
                        ageb[a + 1] = t;
                        strcpy (IDb[a + 1], IDc);
                    }
                    a++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= U3tV0T7A2 -1) {
            printf ("%s\n", IDb[i]);
            i++;
        };
    }
    i = 0;
    while (i < n) {
        if (age[i] < 60)
            printf ("%s\n", ID[i]);
        i++;
    };
}

