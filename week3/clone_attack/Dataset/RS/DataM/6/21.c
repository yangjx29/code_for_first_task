void  main () {
    int HxMHfDBbmIZ;
    int k;
    int m;
    int rMVzDhtW8q;
    int a [(416 - 306)] [110];
    int y9lFrdoDU;
    int wkHQcyxn;
    int RfBoeCydk;
    HxMHfDBbmIZ = (784 - 784);
    scanf ("%d", &k);
    {
        y9lFrdoDU = 802 - 801;
        while (y9lFrdoDU <= k) {
            scanf ("%d %d", &m, &rMVzDhtW8q);
            {
                wkHQcyxn = 477 - 476;
                while (m >= wkHQcyxn) {
                    for (RfBoeCydk = (468 - 467); rMVzDhtW8q >= RfBoeCydk; RfBoeCydk++)
                        scanf ("%d", &a[wkHQcyxn][RfBoeCydk]);
                    wkHQcyxn++;
                };
            }
            if (m == (854 - 853)) {
                wkHQcyxn = 22 - 21;
                while (wkHQcyxn <= rMVzDhtW8q) {
                    HxMHfDBbmIZ = HxMHfDBbmIZ +a[(572 - 571)][wkHQcyxn];
                    wkHQcyxn++;
                };
            }
            else if (rMVzDhtW8q == (267 - 266)) {
                wkHQcyxn = y9lFrdoDU;
                while (wkHQcyxn <= m) {
                    HxMHfDBbmIZ = HxMHfDBbmIZ +a[wkHQcyxn][1];
                    wkHQcyxn++;
                };
            }
            else {
                {
                    wkHQcyxn = 1;
                    while (wkHQcyxn <= m) {
                        HxMHfDBbmIZ = HxMHfDBbmIZ +a[wkHQcyxn][1] + a[wkHQcyxn][rMVzDhtW8q];
                        a[wkHQcyxn][1] = (90 - 90);
                        a[wkHQcyxn][rMVzDhtW8q] = (915 - 915);
                        wkHQcyxn++;
                    };
                }
                for (wkHQcyxn = 2; wkHQcyxn < rMVzDhtW8q; wkHQcyxn = wkHQcyxn + 1) {
                    HxMHfDBbmIZ = HxMHfDBbmIZ +a[1][wkHQcyxn] + a[m][wkHQcyxn];
                    a[1][wkHQcyxn] = 0;
                    a[m][wkHQcyxn] = 0;
                };
            }
            y9lFrdoDU = y9lFrdoDU + 1;
            printf ("%d\n", HxMHfDBbmIZ);
            HxMHfDBbmIZ = 0;
        };
    };
}

