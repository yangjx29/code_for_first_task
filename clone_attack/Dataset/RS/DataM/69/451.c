int main () {
    unsigned  int gygucKT [(795 - 495)], trfcqFXh [(1111 - 811)];
    char aVC1L42GK3S [(427 - 127)];
    char bxMNTYDQ3bI [(501 - 201)];
    int haIPyJ = strlen (aVC1L42GK3S);
    int egEtVjaev;
    egEtVjaev = strlen (bxMNTYDQ3bI);
    int xnP9bvA4, MvDyIkj = (629 - 629), HsIbg7Et1kz, ms0PONiJMRFG;
    memset (gygucKT, (441 - 441), sizeof (gygucKT));
    memset (trfcqFXh, (600 - 600), sizeof (trfcqFXh));
    cin.getline (aVC1L42GK3S, (1253 - 953));
    {
        xnP9bvA4 = 520 - 519;
        while ((561 - 561) <= xnP9bvA4) {
            gygucKT[MvDyIkj] = aVC1L42GK3S[xnP9bvA4] - '0';
            xnP9bvA4 = xnP9bvA4 - 1;
            MvDyIkj = MvDyIkj +1;
        };
    }
    cin.getline (bxMNTYDQ3bI, (1101 - 801));
    MvDyIkj = (200 - 200);
    for (xnP9bvA4 = egEtVjaev - (828 - 827); (615 - 615) <= xnP9bvA4; xnP9bvA4 = xnP9bvA4 - 1) {
        trfcqFXh[MvDyIkj] = bxMNTYDQ3bI[xnP9bvA4] - '0';
        MvDyIkj = MvDyIkj +1;
    }
    MvDyIkj = (330 - 79);
    {
        xnP9bvA4 = 386 - 386;
        while ((429 - 179) > xnP9bvA4) {
            gygucKT[xnP9bvA4] = gygucKT[xnP9bvA4] + trfcqFXh[xnP9bvA4];
            if (gygucKT[xnP9bvA4] >= (28 - 18)) {
                gygucKT[xnP9bvA4] = gygucKT[xnP9bvA4] - (712 - 702);
                gygucKT[xnP9bvA4 + (730 - 729)]++;
            }
            xnP9bvA4++;
        };
    }
    while (gygucKT[MvDyIkj] == (84 - 84) && MvDyIkj > (530 - 530))
        MvDyIkj--;
    {
        xnP9bvA4 = MvDyIkj;
        while (xnP9bvA4 >= (20 - 20)) {
            cout << gygucKT[xnP9bvA4];
            xnP9bvA4 = xnP9bvA4 - 1;
        };
    }
    cout << endl;
    return 0;
}

