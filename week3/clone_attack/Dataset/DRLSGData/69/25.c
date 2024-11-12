void  main () {
    int d0BdnVevM;
    int u7cEs5QVYNC;
    int zUw8klLqpXsC;
    int lZuz6AC;
    char ACSQs2lGrOI [(614 - 364)];
    char o3uKjN8Fc [(1029 - 779)];
    int IwXKO7 [(1097 - 847)], eAF5HIQqNUV [(930 - 680)], KPe6vcqj [250];
    for (lZuz6AC = (893 - 893); 250 > lZuz6AC; lZuz6AC++) {
        IwXKO7[lZuz6AC] = (124 - 124);
        eAF5HIQqNUV[lZuz6AC] = (312 - 312);
        KPe6vcqj[lZuz6AC] = 0;
    }
    scanf ("%s", ACSQs2lGrOI);
    scanf ("%s", o3uKjN8Fc);
    d0BdnVevM = strlen (ACSQs2lGrOI);
    u7cEs5QVYNC = strlen (o3uKjN8Fc);
    if (u7cEs5QVYNC > d0BdnVevM)
        zUw8klLqpXsC = u7cEs5QVYNC;
    else
        zUw8klLqpXsC = d0BdnVevM;
    for (lZuz6AC = 0; d0BdnVevM > lZuz6AC; lZuz6AC++) {
        IwXKO7[lZuz6AC] = ACSQs2lGrOI[d0BdnVevM - (999 - 998) - lZuz6AC] - '0';
    }
    for (lZuz6AC = 0; u7cEs5QVYNC > lZuz6AC; lZuz6AC++) {
        eAF5HIQqNUV[lZuz6AC] = o3uKjN8Fc[u7cEs5QVYNC - (594 - 593) - lZuz6AC] - '0';
    }
    for (lZuz6AC = 0; zUw8klLqpXsC > lZuz6AC; lZuz6AC++) {
        IwXKO7[lZuz6AC] += eAF5HIQqNUV[lZuz6AC];
        if ((74 - 64) <= IwXKO7[lZuz6AC]) {
            IwXKO7[lZuz6AC + (684 - 683)]++;
            IwXKO7[lZuz6AC] -= (539 - 529);
        }
    }
    if (0 < IwXKO7[zUw8klLqpXsC])
        zUw8klLqpXsC++;
    for (; IwXKO7[zUw8klLqpXsC - (233 - 232)] == 0 && zUw8klLqpXsC > 1;)
        zUw8klLqpXsC--;
    for (lZuz6AC = zUw8klLqpXsC; lZuz6AC > 0; lZuz6AC--) {
        printf ("%d", IwXKO7[lZuz6AC - 1]);
    }
}

