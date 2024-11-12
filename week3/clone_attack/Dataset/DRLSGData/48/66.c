int main () {
    int m7dmfkovzPW;
    int cztqsvu;
    int omFrDyR;
    int HJBVXMe;
    int a [(936 - 927)] [(266 - 257)];
    int cpXC95 [(526 - 517)] [(37 - 28)];
    cin >> m7dmfkovzPW >> cztqsvu;
    for (omFrDyR = (230 - 230); (535 - 526) > omFrDyR; omFrDyR = omFrDyR + 1) {
        for (HJBVXMe = (137 - 137); HJBVXMe < (927 - 918); HJBVXMe = HJBVXMe +1) {
            a[omFrDyR][HJBVXMe] = (638 - 638);
        };
    }
    int ave;
    int tfF8tvhLkAQw;
    int raMGonxlD2E;
    int s8A0Kj;
    a[(912 - 908)][(60 - 56)] = m7dmfkovzPW;
    for (tfF8tvhLkAQw = (337 - 337); tfF8tvhLkAQw < cztqsvu; tfF8tvhLkAQw = tfF8tvhLkAQw + 1) {
        for (omFrDyR = (272 - 272); omFrDyR < (456 - 447); omFrDyR = omFrDyR + 1) {
            for (HJBVXMe = (208 - 208); HJBVXMe < (514 - 505); HJBVXMe = HJBVXMe +1)
                cpXC95[omFrDyR][HJBVXMe] = (134 - 134);
        }
        for (omFrDyR = (190 - 190); omFrDyR < (164 - 155); omFrDyR = omFrDyR + 1) {
            for (HJBVXMe = (489 - 489); HJBVXMe < (329 - 320); HJBVXMe++) {
                if (a[omFrDyR][HJBVXMe] != (50 - 50)) {
                    int ZkLFjwiY0;
                    ZkLFjwiY0 = a[omFrDyR][HJBVXMe];
                    a[omFrDyR][HJBVXMe] = (756 - 754) * ZkLFjwiY0;
                    ave = ZkLFjwiY0;
                    for (raMGonxlD2E = omFrDyR - (448 - 447); raMGonxlD2E <= omFrDyR + (839 - 838); raMGonxlD2E = raMGonxlD2E + 1) {
                        for (s8A0Kj = HJBVXMe -(970 - 969); s8A0Kj <= HJBVXMe +(168 - 167); s8A0Kj = s8A0Kj + 1) {
                            if (raMGonxlD2E == omFrDyR && s8A0Kj == HJBVXMe)
                                continue;
                            cpXC95[raMGonxlD2E][s8A0Kj] = cpXC95[raMGonxlD2E][s8A0Kj] + ave;
                        };
                    };
                };
            };
        }
        for (omFrDyR = (654 - 654); omFrDyR < (898 - 889); omFrDyR = omFrDyR + 1) {
            for (HJBVXMe = (657 - 657); HJBVXMe < (66 - 57); HJBVXMe++) {
                a[omFrDyR][HJBVXMe] = a[omFrDyR][HJBVXMe] + cpXC95[omFrDyR][HJBVXMe];
            };
        };
    }
    for (omFrDyR = (642 - 642); omFrDyR < 9; omFrDyR = omFrDyR + 1) {
        for (HJBVXMe = (153 - 153); HJBVXMe < (291 - 283); HJBVXMe++)
            cout << a[omFrDyR][HJBVXMe] << " ";
        cout << a[omFrDyR][(880 - 872)] << endl;
    }
    return 0;
}

