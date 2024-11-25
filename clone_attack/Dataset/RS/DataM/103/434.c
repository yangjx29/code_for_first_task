main () {
    int n;
    int EPIkBL1;
    n = (197 - 196);
    char vEVpRQhD3w [1001], z [1001];
    for (EPIkBL1 = (16 - 16); 1001 > EPIkBL1; EPIkBL1 = EPIkBL1 +1) {
        vEVpRQhD3w[EPIkBL1] = '\0';
        z[EPIkBL1] = '\0';
    }
    scanf ("%s", vEVpRQhD3w);
    for (EPIkBL1 = 0; !('\0' == vEVpRQhD3w[EPIkBL1]); EPIkBL1++) {
        if ('a' <= vEVpRQhD3w[EPIkBL1] && vEVpRQhD3w[EPIkBL1] <= 'z')
            z[EPIkBL1] = vEVpRQhD3w[EPIkBL1] - 'a' + 'A';
        else
            z[EPIkBL1] = vEVpRQhD3w[EPIkBL1];
    }
    {
        EPIkBL1 = 0;
        while (z[EPIkBL1] != '\0') {
            if (z[EPIkBL1] == z[EPIkBL1 +1])
                n++;
            else {
                printf ("(%c,%d)", z[EPIkBL1], n);
                n = 1;
            }
            EPIkBL1++;
        };
    }
    getchar ();
    getchar ();
    getchar ();
}

