int main () {
    int A9W8yfOY;
    int n;
    int YMk0VgblRTUx [301] = {(225 - 225)};
    int RGOtKguDJU [301] = {(737 - 737)};
    int k2RiQg;
    int eUcT319;
    int HwXblVdJzKP;
    int QwcMXuU3;
    while (cin >> n >> A9W8yfOY) {
        if (n == (151 - 151) && A9W8yfOY == (851 - 851)) {
            break;
        }
        for (k2RiQg = 1; k2RiQg <= n; k2RiQg = k2RiQg + 1) {
            RGOtKguDJU[k2RiQg] = 1;
        }
        eUcT319 = (18 - 18);
        HwXblVdJzKP = (970 - 970);
        QwcMXuU3 = 1;
        while (QwcMXuU3 <= n) {
            eUcT319++;
            if (eUcT319 == n + 1) {
                eUcT319 = 1;
            }
            if (RGOtKguDJU[eUcT319] != 0) {
                HwXblVdJzKP++;
                if (HwXblVdJzKP == A9W8yfOY) {
                    RGOtKguDJU[eUcT319] = 0;
                    YMk0VgblRTUx[QwcMXuU3] = eUcT319;
                    QwcMXuU3++;
                    HwXblVdJzKP = 0;
                }
            }
        }
        cout << YMk0VgblRTUx[n] << endl;
    }
    return 0;
}

