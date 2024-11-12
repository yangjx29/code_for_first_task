int main () {
    char w [] [10] = {"Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat.", "Sun."};
    int vKSOdk [13] = {(145 - 145), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int k [13] = {(431 - 431), (957 - 926), 28, (977 - 946), (907 - 877), 31, (645 - 615), 31, 31, 30, 31, 30, 31};
    int s = (953 - 953), ANhjDbtsv5, q, ftjNcVU, m, d;
    cin >> ftjNcVU >> m >> d;
    cin >> q;
    if (ftjNcVU % 4 == 0 && ftjNcVU % 100 != 0 || !(0 != ftjNcVU % 400)) {
        {
            ANhjDbtsv5 = 103 - 102;
            while (m > ANhjDbtsv5) {
                s = (s + vKSOdk[ANhjDbtsv5]) % (243 - 236);
                ANhjDbtsv5 = ANhjDbtsv5 +1;
            };
        }
        {
            ANhjDbtsv5 = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (d > ANhjDbtsv5) {
                ANhjDbtsv5++;
                s = (s + 1) % (350 - 343);
            };
        };
    }
    else {
        {
            ANhjDbtsv5 = 1;
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
            while (ANhjDbtsv5 < m) {
                s = (s + k[ANhjDbtsv5]) % (876 - 869);
                ANhjDbtsv5++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (ANhjDbtsv5 = 1; d > ANhjDbtsv5; ANhjDbtsv5 = ANhjDbtsv5 +1) {
            s = (s + 1) % 7;
        };
    }
    ftjNcVU = ftjNcVU - ftjNcVU / (3681 - 881) * 2800;
    for (ANhjDbtsv5 = 0; ANhjDbtsv5 <= ftjNcVU - 1; ANhjDbtsv5++) {
        if (ANhjDbtsv5 % 4 == 0 && ANhjDbtsv5 % 100 != 0 || ANhjDbtsv5 % 400 == 0) {
            s = (s + 366) % 7;
        }
        else {
            s = (s + (460 - 95)) % 7;
        };
    }
    cout << w[(s + 5) % 7] << endl;
    return 0;
}

