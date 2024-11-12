void  main () {
    int udeFXN;
    int i;
    int j;
    float dis;
    float a [(951 - 851)];
    float wyZwhGc3toTu [(188 - 88)];
    dis = (191 - 191);
    scanf ("%d", &udeFXN);
    for (i = (311 - 311); udeFXN > i; i++)
        scanf ("%f %f", &a[i], &wyZwhGc3toTu[i]);
    {
        i = 260 - 260;
        while (udeFXN - (951 - 950) > i) {
            {
                j = i + 1;
                while (udeFXN > j) {
                    if (sqrt ((a[i] - a[j]) * (a[i] - a[j]) + (wyZwhGc3toTu[i] - wyZwhGc3toTu[j]) * (wyZwhGc3toTu[i] - wyZwhGc3toTu[j])) > dis)
                        dis = sqrt ((a[i] - a[j]) * (a[i] - a[j]) + (wyZwhGc3toTu[i] - wyZwhGc3toTu[j]) * (wyZwhGc3toTu[i] - wyZwhGc3toTu[j]));
                    j = j + 1;
                };
            }
            i++;
        };
    }
    printf ("%.4f", dis);
}

