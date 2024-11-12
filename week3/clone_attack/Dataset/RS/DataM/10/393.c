void  main () {
    int i;
    int zvTcpmlJ;
    int tSnuDoLFO8dA;
    int t;
    int a [(571 - 471)] = {0};
    int xvg6PQY [100] = {0};
    scanf ("%d", &tSnuDoLFO8dA);
    for (i = (175 - 174); i <= tSnuDoLFO8dA; i = i + 1)
        scanf ("%d", &a[i]);
    t = 0;
    for (i = tSnuDoLFO8dA; i >= 1; i = i - 1) {
        for (zvTcpmlJ = tSnuDoLFO8dA; zvTcpmlJ >= i; zvTcpmlJ = zvTcpmlJ - 1)
            if (a[i] >= a[zvTcpmlJ])
                xvg6PQY[i] = (xvg6PQY[i] > xvg6PQY[zvTcpmlJ]) ? xvg6PQY[i] : xvg6PQY[zvTcpmlJ];
        xvg6PQY[i]++;
        t = (xvg6PQY[i] > t) ? xvg6PQY[i] : t;
    }
    printf ("%d\n", t);
}

