void  main () {
    int i = (167 - 167), g1sRtew = 100, n = (79 - 79), p1, p2, FkMDCPBri = (326 - 326), j = 0;
    char VsL3INB0 [2000];
    char cQpfoj4H [(535 - 485)] [50];
    for (; (VsL3INB0[i] = getchar ()) != '\n';) {
        if (VsL3INB0[i] != ' ') {
            cQpfoj4H[j][FkMDCPBri] = VsL3INB0[i];
            FkMDCPBri++;
        }
        if (VsL3INB0[i] == ' ') {
            cQpfoj4H[j][FkMDCPBri] = '\0';
            FkMDCPBri = 0;
            j = j + 1;
        }
        i++;
    }
    cQpfoj4H[j][FkMDCPBri] = '\0';
    {
        i = 0;
        while (i <= j) {
            if (strlen (cQpfoj4H[i]) > n) {
                n = strlen (cQpfoj4H[i]);
                p1 = i;
            }
            if (strlen (cQpfoj4H[i]) < g1sRtew) {
                g1sRtew = strlen (cQpfoj4H[i]);
                p2 = i;
            }
            i++;
        };
    }
    printf ("%s\n", cQpfoj4H[p1]);
    printf ("%s\n", cQpfoj4H[p2]);
}

