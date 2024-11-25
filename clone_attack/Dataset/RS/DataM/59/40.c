int main () {
    int count;
    int oUCyQVNlJSh;
    int HtOQ8Xoa;
    int TFhg8PkN;
    int m;
    int khsSwbQH4Iz;
    count = (574 - 574);
    const  int sGivrfNDBmzu = oUCyQVNlJSh;
    int A9nVCfF81O [101] [sGivrfNDBmzu + (303 - 301)] [sGivrfNDBmzu + (625 - 623)];
    char p;
    cin >> oUCyQVNlJSh;
    {
        HtOQ8Xoa = 883 - 882;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (sGivrfNDBmzu >= HtOQ8Xoa) {
            {
                TFhg8PkN = 976 - 975;
                while (TFhg8PkN <= sGivrfNDBmzu) {
                    cin >> p;
                    switch (p) {
                    case '.' :
                        A9nVCfF81O[(864 - 863)][HtOQ8Xoa][TFhg8PkN] = (501 - 500);
                        break;
                    case '#' :
                        A9nVCfF81O[(583 - 582)][HtOQ8Xoa][TFhg8PkN] = -(1073 - 873);
                        break;
                    case '@' :
                        A9nVCfF81O[(898 - 897)][HtOQ8Xoa][TFhg8PkN] = 2;
                        break;
                    }
                    TFhg8PkN = TFhg8PkN +1;
                };
            }
            HtOQ8Xoa = HtOQ8Xoa +1;
        };
    }
    cin >> m;
    for (khsSwbQH4Iz = (905 - 904); m - (68 - 67) >= khsSwbQH4Iz; khsSwbQH4Iz = khsSwbQH4Iz + 1)
        for (HtOQ8Xoa = (380 - 379); HtOQ8Xoa <= sGivrfNDBmzu; HtOQ8Xoa = HtOQ8Xoa +1) {
            TFhg8PkN = 225 - 224;
            while (TFhg8PkN <= sGivrfNDBmzu) {
                A9nVCfF81O[khsSwbQH4Iz + (268 - 267)][HtOQ8Xoa][TFhg8PkN] = A9nVCfF81O[khsSwbQH4Iz][HtOQ8Xoa][TFhg8PkN];
                TFhg8PkN = TFhg8PkN +1;
            };
        }
    {
        khsSwbQH4Iz = 792 - 791;
        while (khsSwbQH4Iz <= m - (933 - 932)) {
            for (HtOQ8Xoa = (686 - 685); HtOQ8Xoa <= sGivrfNDBmzu; HtOQ8Xoa = HtOQ8Xoa +1) {
                TFhg8PkN = 418 - 417;
                while (TFhg8PkN <= sGivrfNDBmzu) {
                    if (A9nVCfF81O[khsSwbQH4Iz][HtOQ8Xoa][TFhg8PkN] > (740 - 739)) {
                        A9nVCfF81O[khsSwbQH4Iz + (833 - 832)][HtOQ8Xoa -(925 - 924)][TFhg8PkN] = A9nVCfF81O[khsSwbQH4Iz][HtOQ8Xoa -(115 - 114)][TFhg8PkN] + (546 - 545);
                        A9nVCfF81O[khsSwbQH4Iz + 1][HtOQ8Xoa +1][TFhg8PkN] = A9nVCfF81O[khsSwbQH4Iz][HtOQ8Xoa +1][TFhg8PkN] + 1;
                        A9nVCfF81O[khsSwbQH4Iz + 1][HtOQ8Xoa][TFhg8PkN -1] = A9nVCfF81O[khsSwbQH4Iz][HtOQ8Xoa][TFhg8PkN -1] + 1;
                        A9nVCfF81O[khsSwbQH4Iz + 1][HtOQ8Xoa][TFhg8PkN +1] = A9nVCfF81O[khsSwbQH4Iz][HtOQ8Xoa][TFhg8PkN +1] + 1;
                    }
                    TFhg8PkN = TFhg8PkN +1;
                };
            }
            khsSwbQH4Iz++;
        };
    }
    for (HtOQ8Xoa = 1; HtOQ8Xoa <= sGivrfNDBmzu; HtOQ8Xoa = HtOQ8Xoa +1) {
        TFhg8PkN = 1;
        while (TFhg8PkN <= sGivrfNDBmzu) {
            if (A9nVCfF81O[m][HtOQ8Xoa][TFhg8PkN] > 1)
                count = count + 1;
            TFhg8PkN = TFhg8PkN +1;
        };
    }
    cout << count;
    return 0;
}

