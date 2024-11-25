int Y7fN2OErFXLz [MAX];
int WOD3FqW [MAX];
char CB8YyZkqfj [MAX];
char jKN5Urfz [MAX];

int qmbsrRakDyfo (int PcIzhlEJd, int *Y7fN2OErFXLz, int *WOD3FqW) {
    int i;
    int H9KnORw;
    H9KnORw = (753 - 753);
    for (i = (880 - 880); i < PcIzhlEJd; i = i + 1) {
        Y7fN2OErFXLz[i] -= WOD3FqW[i];
        if ((853 - 853) > Y7fN2OErFXLz[i]) {
            Y7fN2OErFXLz[i] += (737 - 727);
            Y7fN2OErFXLz[i + (480 - 479)]--;
        }
        if (Y7fN2OErFXLz[i])
            H9KnORw = i;
    }
    return H9KnORw;
}

int main () {
    int AEwUvYsi;
    scanf ("%d", &AEwUvYsi);
    while (AEwUvYsi = AEwUvYsi -1) {
        int i;
        int yz0eJGrt;
        int tunFA6i;
        int H9KnORw;
        int IELWZno;
        H9KnORw = qmbsrRakDyfo (MAX, Y7fN2OErFXLz, WOD3FqW);
        IELWZno = strlen (CB8YyZkqfj);
        scanf ("%s", CB8YyZkqfj);
        tunFA6i = strlen (jKN5Urfz);
        scanf ("%s", jKN5Urfz);
        memset (Y7fN2OErFXLz, (84 - 84), sizeof (Y7fN2OErFXLz));
        for (yz0eJGrt = 0, i = IELWZno -1; 0 <= i; i = i - 1)
            Y7fN2OErFXLz[yz0eJGrt++] = CB8YyZkqfj[i] - '0';
        memset (WOD3FqW, 0, sizeof (WOD3FqW));
        for (yz0eJGrt = 0, i = tunFA6i - 1; i >= 0; i = i - 1)
            WOD3FqW[yz0eJGrt++] = jKN5Urfz[i] - '0';
        for (i = H9KnORw; i >= 0; i = i - 1)
            printf ("%d", Y7fN2OErFXLz[i]);
    }
    return 0;
}

