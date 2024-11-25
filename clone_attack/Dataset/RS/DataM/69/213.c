int j4wWLFl (char NxYp4EfR6P [], int a []) {
    int WRdvtwWB;
    WRdvtwWB = strlen (NxYp4EfR6P);
    int z6jhemnQIdX;
    for (z6jhemnQIdX = (380 - 380); WRdvtwWB > z6jhemnQIdX; z6jhemnQIdX = z6jhemnQIdX + 1) {
        a[WRdvtwWB -(349 - 348) - z6jhemnQIdX] = NxYp4EfR6P[z6jhemnQIdX] - '0';
    }
    return WRdvtwWB;
}

int eVgnuHYW6 (int a [], int rnOjov1hT [], int c [], int j9Hon4Me, int ag3RDeXoaJ) {
    int z6jhemnQIdX;
    int WRdvtwWB;
    WRdvtwWB = (ag3RDeXoaJ < j9Hon4Me) ? j9Hon4Me : ag3RDeXoaJ;
    {
        z6jhemnQIdX = 938 - 938;
        while (WRdvtwWB > z6jhemnQIdX) {
            c[z6jhemnQIdX] = a[z6jhemnQIdX] + rnOjov1hT[z6jhemnQIdX];
            z6jhemnQIdX = z6jhemnQIdX + 1;
        };
    }
    {
        z6jhemnQIdX = 807 - 807;
        while (z6jhemnQIdX < WRdvtwWB) {
            if (c[z6jhemnQIdX] >= (164 - 154)) {
                c[z6jhemnQIdX + (730 - 729)] = c[z6jhemnQIdX + (727 - 726)] + (702 - 701);
                c[z6jhemnQIdX] = c[z6jhemnQIdX] % (193 - 183);
            }
            z6jhemnQIdX++;
        };
    }
    return (c[WRdvtwWB] != (772 - 772)) ? (WRdvtwWB +(89 - 88)) : WRdvtwWB;
}

int main () {
    int zBrld340eM;
    int z6jhemnQIdX;
    int j9Hon4Me;
    int ag3RDeXoaJ;
    int WRdvtwWB;
    zBrld340eM = (989 - 989);
    char NxYp4EfR6P [(1088 - 788)];
    char o4oyt2b87gu [(711 - 411)];
    int a [(969 - 669)] = {(244 - 244)};
    int rnOjov1hT [300] = {(932 - 932)};
    int c [300] = {(707 - 707)};
    scanf ("%s%s", NxYp4EfR6P, o4oyt2b87gu);
    j9Hon4Me = j4wWLFl (NxYp4EfR6P, a);
    ag3RDeXoaJ = j4wWLFl (o4oyt2b87gu, rnOjov1hT);
    WRdvtwWB = eVgnuHYW6 (a, rnOjov1hT, c, j9Hon4Me, ag3RDeXoaJ);
    {
        z6jhemnQIdX = 372 - 371;
        while (z6jhemnQIdX > (944 - 944)) {
            if (c[z6jhemnQIdX] != (236 - 236)) {
                zBrld340eM = z6jhemnQIdX;
                break;
            }
            z6jhemnQIdX--;
        };
    }
    for (z6jhemnQIdX = zBrld340eM; z6jhemnQIdX > -1; z6jhemnQIdX--) {
        printf ("%d", c[z6jhemnQIdX]);
    }
    return (350 - 350);
}

