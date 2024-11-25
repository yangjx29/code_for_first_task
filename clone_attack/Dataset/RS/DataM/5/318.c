int main () {
    int i;
    int Zv4apEGTS;
    int Hj2WBzrs;
    int b;
    char kuNPIcZwKUiQ [(792 - 272)], msxEZ0 [520];
    double  a, bVDnvuofb;
    scanf ("%lf\n", &a);
    scanf ("%s\n", kuNPIcZwKUiQ);
    scanf ("%s\n", msxEZ0);
    Zv4apEGTS = strlen (msxEZ0);
    Hj2WBzrs = (693 - 693);
    b = (88 - 88);
    if (!(Zv4apEGTS == strlen (kuNPIcZwKUiQ))) {
        b = 1;
        printf ("error");
    }
    else {
        for (i = 0; Zv4apEGTS > i; i = i + 1) {
            if ((!('A' == kuNPIcZwKUiQ[i]) && !('T' == kuNPIcZwKUiQ[i]) && kuNPIcZwKUiQ[i] != 'G' && !('C' == kuNPIcZwKUiQ[i])) || (!('A' == msxEZ0[i]) && msxEZ0[i] != 'T' && msxEZ0[i] != 'G' && msxEZ0[i] != 'C')) {
                b = 1;
                break;
                printf ("error");
            }
            else {
                if (kuNPIcZwKUiQ[i] == msxEZ0[i]) {
                    Hj2WBzrs = Hj2WBzrs +1;
                };
            };
        };
    }
    if (b == 0) {
        bVDnvuofb = 1.0 * Hj2WBzrs / Zv4apEGTS;
        if (bVDnvuofb > a) {
            printf ("yes");
        }
        else {
            printf ("no");
        };
    }
    return 0;
}

