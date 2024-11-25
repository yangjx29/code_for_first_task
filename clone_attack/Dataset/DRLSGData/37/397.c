int main () {
    char UY6A3F41ps8v [1000];
    int w18HcP;
    int XRfVbmcaK [26];
    int juLpX4;
    int BKY9RelMtv6;
    cin >> BKY9RelMtv6;
    for (; BKY9RelMtv6 > 0; BKY9RelMtv6 = BKY9RelMtv6 -1) {
        for (juLpX4 = 0; juLpX4 < 26; juLpX4 = juLpX4 + 1)
            XRfVbmcaK[juLpX4] = 0;
        cin >> UY6A3F41ps8v;
        for (juLpX4 = 0; strlen (UY6A3F41ps8v) > juLpX4; juLpX4 = juLpX4 + 1) {
            XRfVbmcaK[UY6A3F41ps8v[juLpX4] - 'a']++;
        }
        w18HcP = 0;
        for (juLpX4 = 0; juLpX4 < strlen (UY6A3F41ps8v); juLpX4 = juLpX4 + 1) {
            if (XRfVbmcaK[UY6A3F41ps8v[juLpX4] - 'a'] == 1) {
                cout << UY6A3F41ps8v[juLpX4] << endl;
                w18HcP = 1;
                break;
            }
        }
        if (w18HcP == 0)
            cout << "no" << endl;
    }
    return 0;
}

