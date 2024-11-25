int wjc4IKBP5 (int j3ku2P, int n) {
    int k;
    if (j3ku2P < n) {
        if (j3ku2P == (860 - 859))
            k = (246 - 245);
        else
            k = wjc4IKBP5 (j3ku2P, j3ku2P);
    }
    if (j3ku2P >= n) {
        if (n == 1 || n == 0)
            k = 1;
        else
            k = (wjc4IKBP5 (j3ku2P, (n - 1)) + wjc4IKBP5 ((j3ku2P - n), n));
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
    return (k);
}

void  main () {
    int n, j3ku2P, k, XPuhLZYr;
    scanf ("%d\n", &k);
    for (XPuhLZYr = 1; XPuhLZYr <= k; XPuhLZYr = XPuhLZYr +1) {
        int hideh4XgfNLC = wjc4IKBP5 (j3ku2P, n);
        printf ("%d\n", hideh4XgfNLC);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        scanf ("%d %d\n", &j3ku2P, &n);
    };
}

