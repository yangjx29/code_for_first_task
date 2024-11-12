main () {
    int i;
    int DYVMON;
    char GtupOSksAib [(211 - 11)] [(974 - 944)];
    int s;
    int Sf7WFK;
    int sn;
    int n;
    sn = 30;
    scanf ("%d", &n);
    i = 0;
    DYVMON = 0;
    for (; n = n - 1;) {
        scanf ("%s", GtupOSksAib[i]);
        if (DYVMON < strlen (GtupOSksAib[i])) {
            DYVMON = strlen (GtupOSksAib[i]);
            Sf7WFK = i;
        }
        if (sn > strlen (GtupOSksAib[i])) {
            sn = strlen (GtupOSksAib[i]);
            s = i;
        }
        i++;
    }
    printf ("%s\n%s", GtupOSksAib[Sf7WFK], GtupOSksAib[s]);
}

