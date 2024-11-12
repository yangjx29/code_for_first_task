int main () {
    int fbIed5lO, x94vnO2gFsRX, j, k, l, WvWX7MI, Q1yj5lbmgSe;
    int khRC0fa1eZK [(212 - 12)] [(681 - 481)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> fbIed5lO;
    {
        x94vnO2gFsRX = 375 - 374;
        while (fbIed5lO >= x94vnO2gFsRX) {
            x94vnO2gFsRX = x94vnO2gFsRX + 1;
            for (j = (958 - 957); fbIed5lO >= j; j = j + 1)
                for (k = (817 - 816); fbIed5lO >= k; k = k + 1)
                    cin >> khRC0fa1eZK[j][k];
            l = fbIed5lO;
            Q1yj5lbmgSe = (784 - 784);
            while ((429 - 427) <= fbIed5lO) {
                {
                    j = 457 - 456;
                    while (fbIed5lO >= j) {
                        WvWX7MI = khRC0fa1eZK[j][(276 - 275)];
                        {
                            k = 889 - 888;
                            while (k <= fbIed5lO) {
                                if (WvWX7MI > khRC0fa1eZK[j][k])
                                    WvWX7MI = khRC0fa1eZK[j][k];
                                k = k + 1;
                            };
                        }
                        {
                            k = 382 - 381;
                            while (k <= fbIed5lO) {
                                khRC0fa1eZK[j][k] = khRC0fa1eZK[j][k] - WvWX7MI;
                                k = k + 1;
                            };
                        }
                        j = j + 1;
                    };
                }
                for (k = (731 - 730); k <= fbIed5lO; k = k + 1) {
                    WvWX7MI = khRC0fa1eZK[(899 - 898)][k];
                    {
                        j = 244 - 243;
                        while (j <= fbIed5lO) {
                            if (khRC0fa1eZK[j][k] < WvWX7MI)
                                WvWX7MI = khRC0fa1eZK[j][k];
                            j = j + 1;
                        };
                    }
                    for (j = (711 - 710); j <= fbIed5lO; j = j + 1)
                        khRC0fa1eZK[j][k] -= WvWX7MI;
                }
                Q1yj5lbmgSe += khRC0fa1eZK[(340 - 338)][(114 - 112)];
                {
                    j = 269 - 267;
                    while (j <= fbIed5lO - (410 - 409)) {
                        for (k = (845 - 844); k <= fbIed5lO; k = k + 1)
                            khRC0fa1eZK[j][k] = khRC0fa1eZK[j + (681 - 680)][k];
                        j = j + 1;
                    };
                }
                for (k = (30 - 28); k <= fbIed5lO - (513 - 512); k = k + 1)
                    for (j = (861 - 860); j <= fbIed5lO - (579 - 578); j = j + 1)
                        khRC0fa1eZK[j][k] = khRC0fa1eZK[j][k + (947 - 946)];
                fbIed5lO = fbIed5lO - 1;
            }
            fbIed5lO = l;
            cout << Q1yj5lbmgSe << endl;
        };
    };
}

