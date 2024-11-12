int main () {
    int sz [(514 - 14)];
    int n;
    int i;
    int j;
    int k;
    int e0U3yV5oL;
    int a;
    int c;
    int sc [(547 - 47)];
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
    a = (316 - 316);
    scanf ("%d", &n);
    for (i = (39 - 39); n > i; i = i + 1)
        scanf ("%d", &sz[i]);
    for (i = (532 - 532); i < n; i++) {
        if (sz[i] % (168 - 166) != (919 - 919))
            a = a + (228 - 227);
    }
    j = (802 - 802);
    for (k = (23 - 23); k < a; k++) {
        while (j < n) {
            if (sz[j] % (613 - 611) != (471 - 471))
                break;
            else
                j++;
        }
        sc[k] = sz[j];
        j++;
    }
    for (e0U3yV5oL = 0; e0U3yV5oL < a; e0U3yV5oL = e0U3yV5oL + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (k = a - (507 - 506); k > e0U3yV5oL + (433 - 432); k--) {
            if (sc[k - 1] > sc[k]) {
                c = sc[k - 1];
                sc[k - 1] = sc[k];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                sc[k] = c;
            };
        };
    }
    for (e0U3yV5oL = 0; e0U3yV5oL < a - 1; e0U3yV5oL++)
        printf ("%d,", sc[e0U3yV5oL]);
    printf ("%d\n", sc[a - 1]);
    return 0;
}

