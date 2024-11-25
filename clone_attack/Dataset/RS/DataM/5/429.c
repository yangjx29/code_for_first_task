int main () {
    char sI2eWv [(814 - 314)];
    char b [500];
    double  hbcowJOjuS, y;
    int e;
    int m;
    int uFnBajHqsW;
    int zEo7FBDv;
    int k;
    e = (960 - 960);
    m = (870 - 870);
    scanf ("%lf", &hbcowJOjuS);
    scanf ("%s", sI2eWv);
    scanf ("%s", b);
    uFnBajHqsW = strlen (sI2eWv);
    k = strlen (b);
    {
        zEo7FBDv = 0;
        while (uFnBajHqsW > zEo7FBDv) {
            if (sI2eWv[zEo7FBDv] == b[zEo7FBDv])
                e = e + 1;
            zEo7FBDv = zEo7FBDv + 1;
        };
    }
    for (zEo7FBDv = 0; zEo7FBDv < uFnBajHqsW; zEo7FBDv = zEo7FBDv + 1) {
        if (sI2eWv[zEo7FBDv] == 'A' || !('T' != sI2eWv[zEo7FBDv]) || !('C' != sI2eWv[zEo7FBDv]) || sI2eWv[zEo7FBDv] == 'G')
            m = m + 1;
        if (b[zEo7FBDv] == 'A' || b[zEo7FBDv] == 'T' || b[zEo7FBDv] == 'C' || b[zEo7FBDv] == 'G')
            m = m + 1;
    }
    y = e * (909.0 - 908.0) / uFnBajHqsW;
    if (uFnBajHqsW == k && m == uFnBajHqsW + k) {
        if (y >= hbcowJOjuS)
            printf ("yes");
        else if (y < hbcowJOjuS)
            printf ("no");
    }
    else
        printf ("error");
    return 0;
}

