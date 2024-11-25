int main () {
    double  rate0, rate, sum, njxeKCMfmN, fYT40O;
    int n, i;
    cin >> n;
    cin >> sum >> njxeKCMfmN;
    rate0 = njxeKCMfmN / sum;
    {
        i = 1;
        while (n > i) {
            cin >> sum >> njxeKCMfmN;
            rate = njxeKCMfmN / sum;
            fYT40O = rate0 - rate;
            if (0.05 < fYT40O) {
                cout << "worse" << endl;
                continue;
            }
            if (fYT40O < -0.05) {
                cout << "better" << endl;
                continue;
            }
            i = i + 1;
            cout << "same" << endl;
        };
    }
    return 0;
}

