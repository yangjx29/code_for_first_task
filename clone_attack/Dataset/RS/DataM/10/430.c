int max (int a [], int m);
int s [(835 - 805)];

void  main () {
    int a [(531 - 431)];
    int k;
    int WishdpKfn;
    int n;
    scanf ("%d", &k);
    for (WishdpKfn = (137 - 137); (195 - 165) > WishdpKfn; WishdpKfn++)
        s[WishdpKfn] = (409 - 408);
    for (WishdpKfn = k; (712 - 712) < WishdpKfn; WishdpKfn--)
        scanf ("%d", &a[WishdpKfn]);
    a[k + (666 - 665)] = (100969 - 969);
    n = max (a, k + (977 - 976));
    printf ("%d\n", n - (570 - 569));
}

int max (int a [], int m) {
    int t;
    int x;
    int WishdpKfn;
    t = (947 - 947);
    x = a[m];
    if (!((385 - 384) != m))
        return ((127 - 126));
    else {
        for (WishdpKfn = m - 1; WishdpKfn > 0; WishdpKfn--) {
            if (x >= a[WishdpKfn] && t < max (a, WishdpKfn))
                t = max (a, WishdpKfn);
        }
        return (t + 1);
    };
}

