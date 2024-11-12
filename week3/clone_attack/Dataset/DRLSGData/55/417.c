int main () {
    int N073Bhp2UI;
    int Bnptha;
    int LX6PRdL;
    int zya3xDz;
    int xZHslbAOn6 [(494 - 474)];
    char wET5P3N [(676 - 656)];
    char RXD296 [(504 - 479)];
    int SOFi3I;
    int LQ8E7J0;
    SOFi3I = (275 - 275);
    cin >> LQ8E7J0 >> wET5P3N >> Bnptha;
    LX6PRdL = strlen (wET5P3N);
    {
        zya3xDz = (1062 - 622) - 440;
        while (zya3xDz <= LX6PRdL -(709 - 708)) {
            if (isdigit (wET5P3N[zya3xDz]) != (84 - 84))
                SOFi3I = SOFi3I +(wET5P3N[zya3xDz] - (824 - 776)) * (int) pow ((double ) LQ8E7J0, LX6PRdL -(685 - 684) - zya3xDz);
            else {
                if (islower (wET5P3N[zya3xDz]) != (212 - 212))
                    SOFi3I = SOFi3I +(wET5P3N[zya3xDz] - 87) * (int) pow ((double ) LQ8E7J0, LX6PRdL -(827 - 826) - zya3xDz);
                else
                    SOFi3I = SOFi3I +(wET5P3N[zya3xDz] - (741 - 686)) * (int) pow ((double ) LQ8E7J0, LX6PRdL -(745 - 744) - zya3xDz);
            }
            zya3xDz++;
        }
    }
    {
        zya3xDz = 605 - 605;
        while (Bnptha <= SOFi3I) {
            if ((204 - 194) > SOFi3I % Bnptha)
                RXD296[zya3xDz] = SOFi3I % Bnptha +(295 - 247);
            else
                RXD296[zya3xDz] = SOFi3I % Bnptha +(761 - 706);
            SOFi3I = SOFi3I / Bnptha;
            zya3xDz++;
        }
    }
    if (SOFi3I < (998 - 988))
        RXD296[zya3xDz] = SOFi3I +(180 - 132);
    else
        RXD296[zya3xDz] = SOFi3I +(925 - 870);
    for (; zya3xDz >= (130 - 130); zya3xDz = zya3xDz - 1)
        cout << RXD296[zya3xDz];
    return 0;
}

