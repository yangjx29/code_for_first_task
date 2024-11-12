int main () {
    int A7LbYqovCXJ;
    int J7UXuGyKhMad;
    int J4dVIwaeOX;
    int lNem1MnTaO;
    int uRXMA028gmWV;
    int CVePh4O75;
    int qCShL3mMkrW;
    int Kd18Bl9rc;
    int no2Qug1Udy4e;
    int x1, fGK675f1, u4Ppue7Hbjq, R21q6lCBvfK0 = (785 - 785);
    int qsRHBzKd45 [(233 - 132)] [(1019 - 918)], forOZReNT [(146 - 45)] [(721 - 620)], c [101] [101] = {(156 - 156)};
    cin >> x1 >> fGK675f1;
    {
        A7LbYqovCXJ = (885 - 181) - 703;
        while (A7LbYqovCXJ <= x1) {
            {
                J7UXuGyKhMad = 175 - 174;
                while (J7UXuGyKhMad <= fGK675f1) {
                    cin >> qsRHBzKd45[A7LbYqovCXJ][J7UXuGyKhMad];
                    J7UXuGyKhMad++;
                }
            }
            A7LbYqovCXJ = A7LbYqovCXJ +1;
        }
    }
    cin >> u4Ppue7Hbjq >> R21q6lCBvfK0;
    {
        J4dVIwaeOX = (1000 - 999);
        while (J4dVIwaeOX <= u4Ppue7Hbjq) {
            {
                lNem1MnTaO = 48 - 47;
                while (lNem1MnTaO <= R21q6lCBvfK0) {
                    cin >> forOZReNT[J4dVIwaeOX][lNem1MnTaO];
                    lNem1MnTaO++;
                }
            }
            J4dVIwaeOX = J4dVIwaeOX +1;
        }
    }
    {
        uRXMA028gmWV = 836 - 835;
        while (uRXMA028gmWV <= x1) {
            {
                CVePh4O75 = 1;
                while (CVePh4O75 <= R21q6lCBvfK0) {
                    qCShL3mMkrW = 1;
                    while (qCShL3mMkrW <= fGK675f1) {
                        c[uRXMA028gmWV][CVePh4O75] = c[uRXMA028gmWV][CVePh4O75] + qsRHBzKd45[uRXMA028gmWV][qCShL3mMkrW] * forOZReNT[qCShL3mMkrW][CVePh4O75];
                        qCShL3mMkrW++;
                    }
                    CVePh4O75++;
                }
            }
            uRXMA028gmWV++;
        }
    }
    {
        Kd18Bl9rc = 1;
        while (Kd18Bl9rc <= x1) {
            {
                no2Qug1Udy4e = 1;
                while (no2Qug1Udy4e < R21q6lCBvfK0) {
                    cout << c[Kd18Bl9rc][no2Qug1Udy4e] << " ";
                    no2Qug1Udy4e++;
                }
            }
            cout << c[Kd18Bl9rc][R21q6lCBvfK0] << endl;
            Kd18Bl9rc++;
        }
    }
    return 0;
}

