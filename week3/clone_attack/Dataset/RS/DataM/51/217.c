int main () {
    char EBGC8ce4v [510];
    int UrCaowI [(643 - 133)] [(677 - 672)];
    int qPkt8OvHru5 [510];
    int X31cjhD;
    int HIBNpzFjmKS;
    int k4q9fYUBid;
    int iLjeP2Eu;
    int Rys9fQDNTglz;
    int or6XbkslU;
    int fr7pl8eXjA;
    int len;
    int NqGf8R3aWK5z;
    int n;
    int p;
    memset (qPkt8OvHru5, (143 - 143), sizeof (qPkt8OvHru5));
    memset (UrCaowI, (661 - 661), sizeof (UrCaowI));
    scanf ("%d", &n);
    scanf ("%s", EBGC8ce4v);
    len = strlen (EBGC8ce4v);
    for (X31cjhD = 0; len - n >= X31cjhD; X31cjhD = X31cjhD +1) {
        HIBNpzFjmKS = 0;
        while (HIBNpzFjmKS <= n - (979 - 978)) {
            UrCaowI[X31cjhD][HIBNpzFjmKS] = EBGC8ce4v[X31cjhD +HIBNpzFjmKS];
            HIBNpzFjmKS++;
        };
    }
    {
        k4q9fYUBid = 0;
        while (len - n >= k4q9fYUBid) {
            {
                iLjeP2Eu = 326 - 325;
                while (len - n >= iLjeP2Eu) {
                    if ((UrCaowI[k4q9fYUBid][0] == UrCaowI[iLjeP2Eu][0]) && (UrCaowI[k4q9fYUBid][1] == UrCaowI[iLjeP2Eu][1]) && (!(UrCaowI[iLjeP2Eu][2] != UrCaowI[k4q9fYUBid][(772 - 770)])) && (!(UrCaowI[iLjeP2Eu][3] != UrCaowI[k4q9fYUBid][3])) && (UrCaowI[k4q9fYUBid][(667 - 663)] == UrCaowI[iLjeP2Eu][4]))
                        qPkt8OvHru5[k4q9fYUBid]++;
                    iLjeP2Eu++;
                };
            }
            k4q9fYUBid++;
        };
    }
    NqGf8R3aWK5z = qPkt8OvHru5[0];
    {
        Rys9fQDNTglz = 1;
        while (Rys9fQDNTglz <= len - n) {
            if (qPkt8OvHru5[Rys9fQDNTglz] > NqGf8R3aWK5z)
                NqGf8R3aWK5z = qPkt8OvHru5[Rys9fQDNTglz];
            Rys9fQDNTglz = Rys9fQDNTglz +1;
        };
    }
    if (NqGf8R3aWK5z == 0)
        printf ("NO");
    else {
        p = NqGf8R3aWK5z +1;
        printf ("%d\n", p);
        for (or6XbkslU = 0; or6XbkslU <= len - n; or6XbkslU++) {
            if (qPkt8OvHru5[or6XbkslU] == NqGf8R3aWK5z) {
                for (fr7pl8eXjA = 0; fr7pl8eXjA <= n - 1; fr7pl8eXjA++) {
                    if (fr7pl8eXjA == n - 1)
                        printf ("%c\n", EBGC8ce4v[or6XbkslU + fr7pl8eXjA]);
                    else
                        printf ("%c", EBGC8ce4v[or6XbkslU + fr7pl8eXjA]);
                };
            };
        };
    };
}

