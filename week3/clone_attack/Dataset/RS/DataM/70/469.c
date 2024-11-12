struct   TMSzVdp {
    double  EeLAQMRvf;
    double  y;
};
main () {
    double  *f;
    double  b;
    TMSzVdp *ZV3WlGQ;
    int i;
    int j;
    int n;
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
    b = 0.0;
    cin >> n;
    ZV3WlGQ = (struct   TMSzVdp *) malloc (sizeof (TMSzVdp) * n);
    f = (double  *) malloc (sizeof (double ) * n * n);
    for (i = 0; i < n; i = i + 1)
        cin >> ZV3WlGQ[i].EeLAQMRvf >> ZV3WlGQ[i].y;
    for (i = 0; i < n; i++) {
        for (j = 0; n > j; j++) {
            f[i * j] = sqrt ((ZV3WlGQ[i].EeLAQMRvf - ZV3WlGQ[j].EeLAQMRvf) * (ZV3WlGQ[i].EeLAQMRvf - ZV3WlGQ[j].EeLAQMRvf) + (ZV3WlGQ[i].y - ZV3WlGQ[j].y) * (ZV3WlGQ[i].y - ZV3WlGQ[j].y));
            if (f[i * j] > b)
                b = f[i * j];
        };
    }
    cout << setprecision (6) << b;
    return 0;
}

