main () {
    int yXgj6DK5R3bQ, AmHZN8F6B, kRFP2q = (475 - 475), c [26] = {0};
    char a [10000], uOlpnRk [10000];
    scanf ("%s", a);
    yXgj6DK5R3bQ = strlen (a);
    if (a[0] >= 'a' && a[0] <= 'z')
        a[0] = a[0] + 'A' - 'a';
    uOlpnRk[0] = a[0];
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
    c[0] = 1;
    {
        AmHZN8F6B = 1;
        while (yXgj6DK5R3bQ > AmHZN8F6B) {
            if (a[AmHZN8F6B] >= 'a' && a[AmHZN8F6B] <= 'z')
                a[AmHZN8F6B] = a[AmHZN8F6B] + 'A' - 'a';
            if (a[AmHZN8F6B] == a[AmHZN8F6B -1])
                c[kRFP2q] = c[kRFP2q] + 1;
            else {
                printf ("(%c,%d)", uOlpnRk[kRFP2q], c[kRFP2q]);
                kRFP2q = kRFP2q + 1;
                uOlpnRk[kRFP2q] = a[AmHZN8F6B];
                c[kRFP2q] = 1;
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
            AmHZN8F6B = AmHZN8F6B +1;
        };
    }
    printf ("(%c,%d)", uOlpnRk[kRFP2q], c[kRFP2q]);
    getchar ();
    getchar ();
}

