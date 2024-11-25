int main () {
    int len;
    char str [501];
    int lHz9ifXYwW;
    int QGlvDQf3pF;
    cin >> str;
    len = strlen (str);
    for (lHz9ifXYwW = 2; len >= lHz9ifXYwW; lHz9ifXYwW++) {
        QGlvDQf3pF = 0;
        while (len - lHz9ifXYwW >= QGlvDQf3pF) {
            int W4GlskIr6;
            int zgal0Pp;
            int k;
            int t;
            W4GlskIr6 = 0;
            k = QGlvDQf3pF;
            t = QGlvDQf3pF +lHz9ifXYwW - 1;
            for (zgal0Pp = 1; zgal0Pp <= lHz9ifXYwW / 2; zgal0Pp++) {
                if (str[k] == str[t]) {
                    t = t - 1;
                    k++;
                    W4GlskIr6++;
                }
                else
                    break;
            }
            if (W4GlskIr6 == lHz9ifXYwW / 2) {
                for (zgal0Pp = QGlvDQf3pF; zgal0Pp <= QGlvDQf3pF +lHz9ifXYwW - 1; zgal0Pp++) {
                    cout << str[zgal0Pp];
                }
                cout << endl;
            }
            W4GlskIr6 = 0;
            QGlvDQf3pF++;
        };
    }
    return 0;
}

