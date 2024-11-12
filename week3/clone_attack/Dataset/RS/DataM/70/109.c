void  main () {
    int WErsBY3KQ;
    int n;
    int gBsNIyZ;
    int j;
    WErsBY3KQ = (277 - 277);
    double  qFE49c8H;
    double  daQjoZ8 [(478 - 458)];
    double  vsedOqTgv [20];
    double  c [(504 - 404)];
    qFE49c8H = 0;
    scanf ("%d", &n);
    {
        gBsNIyZ = 0;
        while (n > gBsNIyZ) {
            scanf ("%lf%lf", &daQjoZ8[gBsNIyZ], &vsedOqTgv[gBsNIyZ]);
            gBsNIyZ = gBsNIyZ + 1;
        };
    }
    {
        gBsNIyZ = 0;
        while (gBsNIyZ < n - 1) {
            for (j = gBsNIyZ + 1; n > j; j = j + 1) {
                c[WErsBY3KQ] = sqrt ((daQjoZ8[gBsNIyZ] - daQjoZ8[j]) * (daQjoZ8[gBsNIyZ] - daQjoZ8[j]) + (vsedOqTgv[gBsNIyZ] - vsedOqTgv[j]) * (vsedOqTgv[gBsNIyZ] - vsedOqTgv[j]));
                if (c[WErsBY3KQ] > qFE49c8H)
                    qFE49c8H = c[WErsBY3KQ];
                WErsBY3KQ = WErsBY3KQ +1;
            }
            gBsNIyZ = gBsNIyZ + 1;
        };
    }
    printf ("%.4lf\n", qFE49c8H);
}

