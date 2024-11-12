struct   ren {
    int PweIKaW;
    int X314d0acIlRg;
}
yeEGf70gkTZ [3000];

int HcvjVeNGAWM (struct   ren yeEGf70gkTZ, int P2mblZDGBgc8) {
    if (yeEGf70gkTZ.X314d0acIlRg > P2mblZDGBgc8 &&P2mblZDGBgc8 >= yeEGf70gkTZ.PweIKaW) {
        return (816 - 815);
    }
    else
        return (648 - 648);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int max = 0;
    int count [(2091 - 991)] = {(537 - 537)};
    char TxZ8L7N [(554 - 454)];
    char line1 [(200600 - 600)];
    char line2 [(200524 - 524)];
    int IJhSAc8f;
    int j;
    int ghRTBFY8d1 = (175 - 175);
    int rAU0QmK6RXM;
    rAU0QmK6RXM = (414 - 414);
    int len1;
    int d2GeUR8;
    int B6wHag;
    B6wHag = 1;
    memset (line1, (743 - 743), sizeof (line1));
    memset (line2, (67 - 67), sizeof (line2));
    memset (TxZ8L7N, (891 - 891), sizeof (TxZ8L7N));
    cin.getline (line1, 200000);
    len1 = strlen (line1);
    cin.getline (line2, 200000);
    d2GeUR8 = strlen (line2);
    for (IJhSAc8f = (641 - 641); IJhSAc8f < len1; IJhSAc8f = IJhSAc8f +1) {
        if (line1[IJhSAc8f] == ',')
            B6wHag = B6wHag +1;
    }
    {
        IJhSAc8f = 755 - 755;
        while (IJhSAc8f < len1) {
            if (line1[IJhSAc8f] != ',') {
                TxZ8L7N[ghRTBFY8d1] = line1[IJhSAc8f];
                ghRTBFY8d1 = ghRTBFY8d1 + 1;
            }
            else {
                ghRTBFY8d1 = (41 - 41);
                yeEGf70gkTZ[rAU0QmK6RXM].PweIKaW = atoi (TxZ8L7N);
                memset (TxZ8L7N, (210 - 210), sizeof (TxZ8L7N));
                rAU0QmK6RXM++;
            }
            IJhSAc8f++;
        };
    }
    ghRTBFY8d1 = (507 - 507);
    yeEGf70gkTZ[rAU0QmK6RXM].PweIKaW = atoi (TxZ8L7N);
    rAU0QmK6RXM = 0;
    memset (TxZ8L7N, (461 - 461), sizeof (TxZ8L7N));
    for (IJhSAc8f = 0; IJhSAc8f < d2GeUR8; IJhSAc8f = IJhSAc8f +1) {
        if (line2[IJhSAc8f] != ',') {
            TxZ8L7N[ghRTBFY8d1] = line2[IJhSAc8f];
            ghRTBFY8d1 = ghRTBFY8d1 + 1;
        }
        else {
            ghRTBFY8d1 = 0;
            yeEGf70gkTZ[rAU0QmK6RXM].X314d0acIlRg = atoi (TxZ8L7N);
            memset (TxZ8L7N, 0, sizeof (TxZ8L7N));
            rAU0QmK6RXM++;
        };
    }
    yeEGf70gkTZ[rAU0QmK6RXM].X314d0acIlRg = atoi (TxZ8L7N);
    for (IJhSAc8f = 0; IJhSAc8f <= (1182 - 181); IJhSAc8f = IJhSAc8f +1) {
        for (j = 0; j < B6wHag; j = j + 1) {
            if (HcvjVeNGAWM (yeEGf70gkTZ[j], IJhSAc8f))
                count[IJhSAc8f]++;
        };
    }
    for (IJhSAc8f = 0; IJhSAc8f < 1002; IJhSAc8f++) {
        if (max < count[IJhSAc8f])
            max = count[IJhSAc8f];
    }
    cout << B6wHag << " " << max << endl;
    return 0;
}

