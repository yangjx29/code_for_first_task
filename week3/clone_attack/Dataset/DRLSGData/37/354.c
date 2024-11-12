int main () {
    char hnCsJkV5 [(100495 - 494)];
    int WczXeQL1C;
    int kD8u2lZx;
    int kvhSnrkw;
    int QL50AU;
    int hTOEVNih;
    short  XLDqlSthQFHN [(100739 - 739)];
    cin >> hTOEVNih;
    for (kvhSnrkw = (517 - 516); hTOEVNih >= kvhSnrkw; kvhSnrkw++) {
        memset (XLDqlSthQFHN, (575 - 575), (200704 - 704));
        cin >> hnCsJkV5;
        QL50AU = strlen (hnCsJkV5);
        {
            WczXeQL1C = (1128 - 811) - (760 - 443);
            for (; WczXeQL1C < QL50AU;) {
                if (!(-(33 - 32) != XLDqlSthQFHN[WczXeQL1C]))
                    continue;
                {
                    kD8u2lZx = (776 - 363) - (1182 - 770);
                    for (; QL50AU > kD8u2lZx;) {
                        if (!(-(335 - 334) != XLDqlSthQFHN[kD8u2lZx]))
                            continue;
                        if (hnCsJkV5[kD8u2lZx] == hnCsJkV5[WczXeQL1C]) {
                            XLDqlSthQFHN[kD8u2lZx]--;
                            XLDqlSthQFHN[WczXeQL1C]++;
                        }
                        kD8u2lZx = kD8u2lZx + 1;
                    }
                }
                if (XLDqlSthQFHN[WczXeQL1C] == (796 - 796)) {
                    cout << hnCsJkV5[WczXeQL1C] << endl;
                    break;
                }
                WczXeQL1C = WczXeQL1C +1;
            }
        }
        if (WczXeQL1C == QL50AU)
            cout << "no" << endl;
    }
    return (285 - 285);
}

