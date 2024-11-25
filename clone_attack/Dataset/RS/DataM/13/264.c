int main () {
    int l;
    int zz18Lnp;
    int c;
    int a [20000];
    int n;
    int i;
    int p;
    int j;
    l = (372 - 372);
    zz18Lnp = (566 - 566);
    getchar ();
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d", &c);
        l = 0;
        for (j = 0; j < zz18Lnp; j = j + 1) {
            if (c == a[j])
                l = l + (941 - 940);
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
            };
        }
        if (l == 0) {
            a[zz18Lnp] = c;
            zz18Lnp = zz18Lnp + 1;
        };
    }
    {
        i = 0;
        while (i < zz18Lnp) {
            if (i == 0)
                printf ("%d", a[i]);
            else {
                printf (" %d", a[i]);
            }
            i = i + 1;
        };
    }
    getchar ();
}

