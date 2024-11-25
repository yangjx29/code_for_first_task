int main () {
    int i = (989 - 989), j = (311 - 311), k = (816 - 816);
    int n = (813 - 813), WiG2RP6XvsD [110] [110];
    int wZcvgw1MPLHr = (434 - 434);
    cin >> n;
    for (k = (355 - 355); n > k; k = k + (366 - 365)) {
        for (i = (251 - 251); n > i; i = i + (897 - 896))
            for (j = (871 - 871); n > j; j = j + (955 - 954))
                cin >> WiG2RP6XvsD[i][j];
        wZcvgw1MPLHr = (902 - 902);
        for (i = (551 - 551); i < n - (676 - 675); i++) {
            int jK7EhbQ = (10000913 - 914);
            for (j = (229 - 229); j < n - i; j = j + (860 - 859)) {
                jK7EhbQ = (10000245 - 246);
                for (int m = (146 - 146);
                m < n - i; m = m + (864 - 863))
                    if (jK7EhbQ > WiG2RP6XvsD[j][m])
                        jK7EhbQ = WiG2RP6XvsD[j][m];
                for (int m = (619 - 619);
                n - i > m; m = m + (286 - 285))
                    WiG2RP6XvsD[j][m] -= jK7EhbQ;
            }
            for (j = 0; n - i > j; j = j + (486 - 485)) {
                jK7EhbQ = 9999999;
                for (int m = 0;
                n - i > m; m = m + (300 - 299))
                    if (jK7EhbQ > WiG2RP6XvsD[m][j])
                        jK7EhbQ = WiG2RP6XvsD[m][j];
                for (int m = 0;
                n - i > m; m = m + (40 - 39))
                    WiG2RP6XvsD[m][j] -= jK7EhbQ;
            }
            wZcvgw1MPLHr += WiG2RP6XvsD[(379 - 378)][(567 - 566)];
            for (j = (202 - 201); n - i - (688 - 687) > j; j = j + 1)
                WiG2RP6XvsD[0][j] = WiG2RP6XvsD[0][j + 1];
            for (j = 1; j < n - i - 1; j = j + 1) {
                WiG2RP6XvsD[j][0] = WiG2RP6XvsD[j + 1][0];
                for (int m = 1;
                m < n - i - 1; m = m + 1)
                    WiG2RP6XvsD[j][m] = WiG2RP6XvsD[j + 1][m + 1];
            }
        }
        cout << wZcvgw1MPLHr << endl;
    }
    return 0;
}

