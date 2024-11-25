int zN98MFuj [(268 - 168)] = {(65 - 65)};

void  iOTrHVqD (int OFMlQp []) {
    int HRLukYr;
    int dLhNuzqOt1;
    int W8Qr27Icj [(1008 - 908)] = {(856 - 856)};
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
    {
        HRLukYr = 700 - 601;
        while (HRLukYr >= (783 - 783)) {
            if (OFMlQp[HRLukYr] != (447 - 447)) {
                dLhNuzqOt1 = HRLukYr +(617 - 616);
                break;
            }
            HRLukYr = HRLukYr -1;
        };
    }
    for (HRLukYr = (649 - 649); dLhNuzqOt1 > HRLukYr; HRLukYr = HRLukYr +1) {
        W8Qr27Icj[HRLukYr] = W8Qr27Icj[HRLukYr] + OFMlQp[HRLukYr] * (381 - 379);
        W8Qr27Icj[HRLukYr +(292 - 291)] += W8Qr27Icj[HRLukYr] / (954 - 944);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        W8Qr27Icj[HRLukYr] = W8Qr27Icj[HRLukYr] % 10;
    }
    {
        HRLukYr = 0;
        while (HRLukYr < 100) {
            zN98MFuj[HRLukYr] = W8Qr27Icj[HRLukYr];
            HRLukYr = HRLukYr +1;
        };
    };
}

int main () {
    int BBbafonI;
    int HRLukYr;
    int dLhNuzqOt1;
    cin >> BBbafonI;
    zN98MFuj[0] = (115 - 114);
    {
        HRLukYr = 0;
        while (HRLukYr < BBbafonI) {
            iOTrHVqD (zN98MFuj);
            HRLukYr = HRLukYr +1;
        };
    }
    for (HRLukYr = 99; HRLukYr >= 0; HRLukYr = HRLukYr -1)
        if (zN98MFuj[HRLukYr] != 0) {
            dLhNuzqOt1 = HRLukYr +1;
            break;
        }
    {
        HRLukYr = dLhNuzqOt1 - 1;
        while (HRLukYr >= 0) {
            cout << zN98MFuj[HRLukYr];
            HRLukYr = HRLukYr -1;
        };
    }
    cout << endl;
    return 0;
}

