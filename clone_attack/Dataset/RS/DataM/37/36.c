int main () {
    int t;
    cin >> t;
    for (; t = t - 1;) {
        char J1wUkLHa [(1072 - 972)];
        int RMvnDLB [(191 - 165)], bVbwGp6;
        int PUkWziag9Xo, YnYjCsZk;
        int b [(995 - 895)];
        cin >> J1wUkLHa;
        bVbwGp6 = (818 - 818);
        for (PUkWziag9Xo = (497 - 497); PUkWziag9Xo < (873 - 847); PUkWziag9Xo++) {
            RMvnDLB[PUkWziag9Xo] = (209 - 209);
        }
        for (PUkWziag9Xo = (717 - 717); PUkWziag9Xo < (1094 - 994); PUkWziag9Xo++)
            b[PUkWziag9Xo] = (562 - 562);
        {
            PUkWziag9Xo = 209 - 209;
            while (strlen (J1wUkLHa) > PUkWziag9Xo) {
                RMvnDLB[J1wUkLHa[PUkWziag9Xo] - 'a']++;
                PUkWziag9Xo = PUkWziag9Xo +1;
            };
        }
        {
            PUkWziag9Xo = 0;
            while (PUkWziag9Xo < (366 - 340)) {
                if (RMvnDLB[PUkWziag9Xo] == (968 - 967))
                    bVbwGp6 = bVbwGp6 + 1;
                PUkWziag9Xo = PUkWziag9Xo +1;
            };
        }
        if (!(0 != bVbwGp6))
            cout << "no" << endl;
        else {
            {
                PUkWziag9Xo = 0;
                while (PUkWziag9Xo < strlen (J1wUkLHa)) {
                    for (YnYjCsZk = 0; YnYjCsZk < strlen (J1wUkLHa); YnYjCsZk = YnYjCsZk +1) {
                        if (J1wUkLHa[PUkWziag9Xo] == J1wUkLHa[YnYjCsZk]) {
                            b[PUkWziag9Xo]++;
                        };
                    }
                    PUkWziag9Xo = PUkWziag9Xo +1;
                };
            }
            {
                PUkWziag9Xo = 0;
                while (PUkWziag9Xo < strlen (J1wUkLHa)) {
                    if (b[PUkWziag9Xo] == (149 - 148)) {
                        cout << J1wUkLHa[PUkWziag9Xo] << endl;
                        break;
                    }
                    PUkWziag9Xo++;
                };
            };
        };
    };
}

