int main () {
    double  a;
    char RSaweIEWl [500], qK4MTU1F [500];
    double  n2zbW3kywO4Q = 0;
    int bw4WXTCp;
    scanf ("%lf", &a);
    scanf ("%s %s", RSaweIEWl, qK4MTU1F);
    if (strlen (RSaweIEWl) != strlen (qK4MTU1F)) {
        return 0;
    }
    {
        bw4WXTCp = 0;
        while (strlen (RSaweIEWl) > bw4WXTCp) {
            if (RSaweIEWl[bw4WXTCp] != 'A' && !('C' == RSaweIEWl[bw4WXTCp]) && !('T' == RSaweIEWl[bw4WXTCp]) && RSaweIEWl[bw4WXTCp] != 'G' && !('A' == qK4MTU1F[bw4WXTCp]) && qK4MTU1F[bw4WXTCp] != 'C' && qK4MTU1F[bw4WXTCp] != 'T' && qK4MTU1F[bw4WXTCp] != 'G')
                n2zbW3kywO4Q = 1;
            bw4WXTCp = bw4WXTCp + 1;
        };
    }
    if (n2zbW3kywO4Q == 1) {
        printf ("error");
        return 0;
    }
    n2zbW3kywO4Q = 0;
    {
        bw4WXTCp = 0;
        while (bw4WXTCp < strlen (RSaweIEWl)) {
            if (RSaweIEWl[bw4WXTCp] == qK4MTU1F[bw4WXTCp])
                n2zbW3kywO4Q++;
            bw4WXTCp = bw4WXTCp + 1;
        };
    }
    if (n2zbW3kywO4Q / strlen (RSaweIEWl) > a)
        printf ("yes");
    else
        printf ("no");
    return 0;
}

