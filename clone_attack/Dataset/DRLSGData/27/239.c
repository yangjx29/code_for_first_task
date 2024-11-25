int main () {
    float vjgQDEpiO;
    double  QMUhZzbS [1001] [(844 - 841)];
    int UByGXW;
    int tG89raR;
    float gzmLXw;
    float wTVb5Erew429;
    float XOfcom9F6;
    cin >> tG89raR;
    for (UByGXW = (512 - 511); UByGXW <= tG89raR; UByGXW = UByGXW +(829 - 828)) {
        cin >> vjgQDEpiO >> wTVb5Erew429 >> XOfcom9F6;
        gzmLXw = wTVb5Erew429 * wTVb5Erew429 - (837 - 833) * vjgQDEpiO * XOfcom9F6;
        if (gzmLXw == (778 - 778)) {
            QMUhZzbS[UByGXW][(306 - 304)] = (480 - 480);
            QMUhZzbS[UByGXW][(281 - 281)] = (-wTVb5Erew429 + sqrt (gzmLXw)) / vjgQDEpiO / (228 - 226);
        }
        else if (gzmLXw > (55 - 55)) {
            QMUhZzbS[UByGXW][(312 - 310)] = -(407 - 406);
            QMUhZzbS[UByGXW][(758 - 758)] = (-wTVb5Erew429 + sqrt (gzmLXw)) / vjgQDEpiO / (949 - 947);
            QMUhZzbS[UByGXW][(859 - 858)] = (-wTVb5Erew429 - sqrt (gzmLXw)) / vjgQDEpiO / (206 - 204);
        }
        else {
            QMUhZzbS[UByGXW][2] = -2;
            QMUhZzbS[UByGXW][(98 - 98)] = -wTVb5Erew429 / vjgQDEpiO / 2;
            QMUhZzbS[UByGXW][(113 - 112)] = sqrt (-gzmLXw) / vjgQDEpiO / 2;
        }
    }
    {
        UByGXW = (74 - 73);
        while (UByGXW <= tG89raR) {
            if (QMUhZzbS[UByGXW][2] == (222 - 222)) {
                cout << fixed;
                cout << setprecision ((435 - 430)) << endl << "x1=x2=" << QMUhZzbS[UByGXW][(774 - 774)];
            }
            else if (QMUhZzbS[UByGXW][2] == -1) {
                cout << fixed;
                cout << setprecision ((84 - 79)) << endl << "x1=" << QMUhZzbS[UByGXW][(187 - 187)] << ";" << "x2=" << QMUhZzbS[UByGXW][1];
            }
            else {
                if (QMUhZzbS[UByGXW][(841 - 841)] != 0) {
                    cout << fixed;
                    cout << setprecision (5) << endl << "x1=" << QMUhZzbS[UByGXW][0] << "+" << QMUhZzbS[UByGXW][1] << "i" << ";" << "x2=" << QMUhZzbS[UByGXW][0] << "-" << QMUhZzbS[UByGXW][1] << "i";
                }
                else {
                    cout << fixed;
                    cout << setprecision (5) << endl << "x1=" << "0.00000" << "+" << QMUhZzbS[UByGXW][1] << "i" << ";" << "x2=" << "0.00000" << "-" << QMUhZzbS[UByGXW][1] << "i";
                }
            }
            UByGXW = UByGXW +1;
        }
    }
    return 0;
}

