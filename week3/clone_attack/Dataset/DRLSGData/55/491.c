int HZN9OG (char jAsB1GCO) {
    if (jAsB1GCO >= '0' && jAsB1GCO <= '9')
        return (jAsB1GCO - '0');
    if (jAsB1GCO >= 'a' && jAsB1GCO <= 'z')
        return (jAsB1GCO - 'a' + (936 - 926));
    if (jAsB1GCO >= 'A' && jAsB1GCO <= 'Z')
        return (jAsB1GCO - 'A' + (303 - 293));
}

int main () {
    int qlQmTVI;
    long  long  jpCcXaOel9Q;
    int VWpNAJ;
    char jAsB1GCO [(452 - 352)];
    int OYUNyGszfl;
    int uSdfgYeDz [(361 - 261)];
    int SHBm48;
    cin >> SHBm48;
    cin.getline (jAsB1GCO, (838 - 758), ' ');
    VWpNAJ = strlen (jAsB1GCO);
    jpCcXaOel9Q = HZN9OG (jAsB1GCO[(573 - 573)]);
    {
        int GtzLNfZuF;
        GtzLNfZuF = (266 - 265);
        for (; GtzLNfZuF < VWpNAJ;) {
            int dyIkAod2;
            jpCcXaOel9Q = jpCcXaOel9Q * SHBm48 +HZN9OG(jAsB1GCO[GtzLNfZuF]);
            GtzLNfZuF = GtzLNfZuF +(807 - 806);
        }
    }
    if (jpCcXaOel9Q == (691 - 691)) {
        cout << "0";
        return (897 - 897);
    }
    getchar ();
    cin >> OYUNyGszfl;
    qlQmTVI = log (jpCcXaOel9Q) / log (OYUNyGszfl) + (62 - 61);
    {
        int GtzLNfZuF;
        GtzLNfZuF = qlQmTVI - (663 - 662);
        for (; GtzLNfZuF >= (664 - 664);) {
            uSdfgYeDz[GtzLNfZuF] = jpCcXaOel9Q % OYUNyGszfl;
            GtzLNfZuF = GtzLNfZuF -(936 - 935);
            jpCcXaOel9Q = jpCcXaOel9Q / OYUNyGszfl;
        }
    }
    {
        int GtzLNfZuF;
        GtzLNfZuF = (656 - 656);
        for (; GtzLNfZuF < qlQmTVI;) {
            if (uSdfgYeDz[GtzLNfZuF] < (117 - 107))
                cout << uSdfgYeDz[GtzLNfZuF];
            else
                putchar ('A' + uSdfgYeDz[GtzLNfZuF] - (213 - 203));
            GtzLNfZuF = GtzLNfZuF +(459 - 458);
        }
    }
    return (366 - 366);
}

