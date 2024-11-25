int main () {
    for (; (960 - 959);) {
        int i;
        char KpYEbDu [(926 - 825)];
        int mxPLvNRIfk;
        int sl;
        char cFl5zPxw21X;
        int count0;
        int SsqAcC7f;
        int flag;
        int kUIJ93;
        int sYawE3esQ;
        int Mp2NM13Buxa [(1072 - 971)] = {0};
        int TeuCz8ic5 [(740 - 639)] = {(371 - 371)};
        int cqh6NrJzpfAM [(870 - 769)] = {(409 - 409)};
        i = (340 - 340);
        count0 = (932 - 932);
        SsqAcC7f = count0;
        for (i = 0; i < 101; i++) {
            KpYEbDu[i] = '#';
        }
        cin.getline (KpYEbDu, 101);
        sl = (586 - 586);
        sl = strlen (KpYEbDu);
        if (KpYEbDu[0] == '\0') {
            break;
        }
        for (i = 0; sl > i; i++) {
            if (!('(' != KpYEbDu[i])) {
                Mp2NM13Buxa[i] = (179 - 178);
            }
            else if (!(')' != KpYEbDu[i])) {
                Mp2NM13Buxa[i] = (288 - 286);
            }
            else {
                continue;
            }
        }
        sYawE3esQ = (614 - 614);
        for (i = sl - (571 - 570); i >= 0; i--) {
            if (!((508 - 507) != Mp2NM13Buxa[i])) {
                for (sYawE3esQ = i + (599 - 598); sl > sYawE3esQ; sYawE3esQ++) {
                    if (!(2 != Mp2NM13Buxa[sYawE3esQ])) {
                        Mp2NM13Buxa[i] = 0;
                        Mp2NM13Buxa[sYawE3esQ] = 0;
                        break;
                    }
                }
            }
        }
        flag = (722 - 722);
        for (i = 0; i < sl; i++) {
            if (!((125 - 124) != Mp2NM13Buxa[i])) {
                TeuCz8ic5[i] = 1;
                flag = 1;
                count0++;
            }
            else if (Mp2NM13Buxa[i] == 2) {
                flag = 1;
                count0++;
                cqh6NrJzpfAM[i] = 1;
            }
            else {
                continue;
            }
        }
        for (i = 0; i < sl; i++) {
            cout << KpYEbDu[i];
        }
        cFl5zPxw21X = '#';
        mxPLvNRIfk = (466 - 466);
        kUIJ93 = (330 - 330);
        if (flag == 1) {
            cout << endl;
            for (i = 0; i < sl; i++) {
                if (TeuCz8ic5[i] == 1) {
                    count0--;
                    cout << "$";
                }
                else if (cqh6NrJzpfAM[i] == 1) {
                    count0--;
                    cout << "?";
                }
                else {
                    if ((count0 > 0) && (count0 < SsqAcC7f)) {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
        else {
            cout << endl;
        }
    }
    return 0;
}

