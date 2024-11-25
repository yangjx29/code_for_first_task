int main (int iqkAFmoX6ha4, char *FZCGdk5sSi []) {
    int wXxno0;
    int ktAacFm;
    int DCKsuMHWSlT;
    int fRljPnSAtu0N;
    char nVpbFzd [(840 - 820)];
    scanf ("%d", &wXxno0);
    for (ktAacFm = 0; wXxno0 > ktAacFm; ktAacFm = ktAacFm + 1) {
        scanf ("%s", nVpbFzd);
        DCKsuMHWSlT = strlen (nVpbFzd) - 1;
        if (!('r' != nVpbFzd[DCKsuMHWSlT]) || nVpbFzd[DCKsuMHWSlT] == 'y') {
            nVpbFzd[(DCKsuMHWSlT -1)] = '\0';
        }
        if (nVpbFzd[DCKsuMHWSlT] == 'g') {
            nVpbFzd[(DCKsuMHWSlT -2)] = '\0';
        }
        printf ("%s\n", nVpbFzd);
    }
    return 0;
}

