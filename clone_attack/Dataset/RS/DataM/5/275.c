int main () {
    int ywQhcW5, Ko3rRcBdPqQ = (261 - 261), KiPY3pL24mR = 0;
    double  k7ynROLYN;
    char RAUsjFtYkxzT [100];
    char sjhwd3zLcD [100];
    int XM8VJPBEW260 = strlen (RAUsjFtYkxzT), t9V1IKe7pOF = strlen (sjhwd3zLcD);
    scanf ("%lf", &k7ynROLYN);
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
    scanf ("%s\n%s", RAUsjFtYkxzT, sjhwd3zLcD);
    {
        ywQhcW5 = 0;
        while (ywQhcW5 < XM8VJPBEW260) {
            if (RAUsjFtYkxzT[ywQhcW5] != 'A' && RAUsjFtYkxzT[ywQhcW5] != 'G' && RAUsjFtYkxzT[ywQhcW5] != 'C' && RAUsjFtYkxzT[ywQhcW5] != 'T')
                KiPY3pL24mR = KiPY3pL24mR +1;
            if (sjhwd3zLcD[ywQhcW5] != 'A' && sjhwd3zLcD[ywQhcW5] != 'G' && sjhwd3zLcD[ywQhcW5] != 'C' && sjhwd3zLcD[ywQhcW5] != 'T')
                KiPY3pL24mR++;
            ywQhcW5++;
        };
    }
    if (KiPY3pL24mR > 0) {
        return 0;
    }
    if (XM8VJPBEW260 == t9V1IKe7pOF) {
        for (ywQhcW5 = 0; ywQhcW5 <= XM8VJPBEW260; ywQhcW5++) {
            if (RAUsjFtYkxzT[ywQhcW5] == sjhwd3zLcD[ywQhcW5])
                Ko3rRcBdPqQ++;
        }
        if ((1.00 * Ko3rRcBdPqQ / XM8VJPBEW260) > k7ynROLYN)
            ;
        else
            ;
    }
    else
        printf ("error");
    return 0;
}

