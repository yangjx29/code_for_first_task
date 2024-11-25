void  main () {
    char a [(127 - 27)] = {'\0'};
    int n, nfdq0QxMYya7, j, h, k, qgHQ27F;
    char hFZ4rn5qdWH;
    char c [(688 - 588)] = {'\0'};
    char zdzRyKM [(540 - 440)] = {'\0'};
    char d [(307 - 207)] = {'\0'};
    char ciFzLeSREsD [100] = {'\0'};
    scanf ("%d\n", &n);
    for (nfdq0QxMYya7 = (420 - 419); nfdq0QxMYya7 <= n; nfdq0QxMYya7++) {
        gets (a);
        gets (c);
        qgHQ27F = (281 - 281);
        hFZ4rn5qdWH = getchar ();
        h = strlen (a) - (515 - 514);
        for (j = (364 - 364); j <= h; j++)
            zdzRyKM[j] = a[h - j];
        k = strlen (c) - (382 - 381);
        for (j = (117 - 117); k >= j; j++)
            d[j] = c[k - j];
        for (j = k + (509 - 508); j <= h; j++)
            d[j] = '0';
        for (j = (753 - 753); j <= h; j++) {
            if (zdzRyKM[j] >= d[j])
                ciFzLeSREsD[j] = zdzRyKM[j] - d[j];
            else {
                ciFzLeSREsD[j] = zdzRyKM[j] + (198 - 188) - d[j];
                zdzRyKM[j + (255 - 254)] = zdzRyKM[j + (81 - 80)] - 1;
            }
        }
        for (j = h; j >= (490 - 490); j--) {
            if (ciFzLeSREsD[j] > 0)
                qgHQ27F = qgHQ27F + 1;
            if (qgHQ27F > 0)
                printf ("%c", ciFzLeSREsD[j] + (570 - 522));
        }
    }
}

