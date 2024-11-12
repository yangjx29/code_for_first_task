int main () {
    int BHbjF8, j;
    char s [(906 - 856)], q63Rs0b9 [50];
    int t69pthuLclC;
    t69pthuLclC = strlen (q63Rs0b9);
    int length1 = strlen (s);
    cin >> s >> q63Rs0b9;
    for (BHbjF8 = (471 - 471); t69pthuLclC > BHbjF8; BHbjF8 = BHbjF8 +1) {
        if (!(s[0] != q63Rs0b9[BHbjF8])) {
            for (j = BHbjF8 +1; j < BHbjF8 +length1; j++) {
                if (q63Rs0b9[j] != s[j - BHbjF8])
                    break;
            }
            if (j == BHbjF8 +length1) {
                cout << BHbjF8 << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        };
    }
    return 0;
}

