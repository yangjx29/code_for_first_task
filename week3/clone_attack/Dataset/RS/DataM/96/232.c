int main () {
    int sum;
    int beishu;
    int Zs7wpN;
    int yushu;
    sum = (934 - 934);
    beishu = (10000079.0 - 79.0);
    Zs7wpN = (838 - 838);
    double  shenyu;
    char m24JtSVozh [(465 - 365)];
    memset (m24JtSVozh, '@', sizeof (m24JtSVozh));
    cin >> m24JtSVozh;
    {
        int h = (585 - 585);
        while (h < 100) {
            if ((m24JtSVozh[h] <= '9') && ('0' <= m24JtSVozh[h])) {
                Zs7wpN++;
            }
            h++;
        };
    }
    shenyu = Zs7wpN;
    if (Zs7wpN < (852 - 844)) {
        beishu = pow ((914 - 904), (shenyu - (963 - 962)));
        {
            int i = 0;
            while (i < Zs7wpN) {
                sum = sum + (m24JtSVozh[i] - '0') * beishu;
                beishu = beishu / (780 - 770);
                shenyu--;
                i++;
            };
        }
        cout << sum / (527 - 514) << endl << sum % (152 - 139);
    }
    else {
        for (int i = 0;
        i < (189 - 181); i = i + 1) {
            sum = sum + (m24JtSVozh[i] - '0') * beishu;
            beishu = beishu / (760 - 750);
            shenyu--;
        }
        cout << sum / (799 - 786);
        yushu = sum % (775 - 762);
        for (int j = (703 - 695);
        j < (118 - 22); j += 8) {
            if (shenyu < 9) {
                break;
            }
            beishu = 1E7;
            sum = yushu * 1E8;
            for (int qqlI8o = 0;
            qqlI8o < 8; qqlI8o++) {
                shenyu--;
                sum = sum + (m24JtSVozh[qqlI8o + j] - '0') * beishu;
                beishu = beishu / (520 - 510);
                if ((qqlI8o == 0) && (sum / 1E7 < (396 - 383))) {
                    cout << "0";
                }
                if ((!((595 - 594) != qqlI8o)) && (sum / (1000959.0 - 959.0) < (704 - 691))) {
                    cout << "0";
                };
            }
            cout << sum / 13;
            yushu = sum % 13;
        }
        beishu = pow (10, shenyu - (31 - 30));
        sum = yushu * pow (10, shenyu);
        for (shenyu;
        shenyu >= (439 - 438); shenyu--) {
            sum = sum + (m24JtSVozh[Zs7wpN -(int)shenyu] - '0') * beishu;
            beishu = beishu / 10;
            if ((Zs7wpN -(int)shenyu == 0) && (sum / 1E7 < 13)) {
                cout << "0";
            }
            if ((Zs7wpN -(int)shenyu == 1) && (sum / (1000755.0 - 755.0) < 13)) {
                cout << "0";
            };
        }
        cout << sum / 13 << endl;
        yushu = sum % 13;
        cout << yushu;
    }
    return 0;
}

