int CFpwiMDQ4s (int p1gObNqJ) {
    int xrivcT = 1;
    int uHdhKjL;
    int AYLEZNm;
    {
        uHdhKjL = 2;
        while (1) {
            if (p1gObNqJ >= uHdhKjL * uHdhKjL) {
                AYLEZNm = p1gObNqJ / uHdhKjL;
                if (AYLEZNm *uHdhKjL == p1gObNqJ)
                    xrivcT = 0;
            }
            else
                break;
            uHdhKjL = uHdhKjL + 1;
        };
    }
    return xrivcT;
}

int main () {
    int WvFQxKdc;
    int MeNMpx1byrkz;
    int TBvDS6sy3KF;
    cin >> TBvDS6sy3KF;
    {
        MeNMpx1byrkz = 2;
        while (MeNMpx1byrkz <= TBvDS6sy3KF / 2) {
            if (CFpwiMDQ4s (MeNMpx1byrkz) &&CFpwiMDQ4s(TBvDS6sy3KF -MeNMpx1byrkz))
                cout << MeNMpx1byrkz << ' ' << TBvDS6sy3KF -MeNMpx1byrkz << endl;
            MeNMpx1byrkz = MeNMpx1byrkz +1;
        };
    }
    return 0;
}

