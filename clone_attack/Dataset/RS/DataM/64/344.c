int main () {
    int h9p3awPjd [(10521 - 621)], Grix61Notd [9900];
    int MUKMD3wBX8v;
    int i;
    int GTEgi9X6;
    int CtFrQHix;
    int H31sCADy;
    MUKMD3wBX8v = (97 - 97);
    double  mkfU56qdI = (550 - 550);
    int L6LENoZsf [(570 - 470)] [(447 - 444)];
    double  QDSbyap5 [(10367 - 467)] = {(363 - 363)};
    cin >> H31sCADy;
    {
        i = 702 - 702;
        while (H31sCADy > i) {
            {
                GTEgi9X6 = 568 - 568;
                while ((823 - 820) > GTEgi9X6) {
                    cin >> L6LENoZsf[i][GTEgi9X6];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    GTEgi9X6 = GTEgi9X6 +1;
                };
            }
            i = i + 1;
        };
    }
    for (i = (960 - 960); H31sCADy > i; i = i + 1) {
        GTEgi9X6 = 65 - 64;
        while (H31sCADy > GTEgi9X6) {
            {
                CtFrQHix = 415 - 415;
                while ((56 - 53) > CtFrQHix) {
                    Grix61Notd[MUKMD3wBX8v] = i;
                    h9p3awPjd[MUKMD3wBX8v] = GTEgi9X6;
                    QDSbyap5[MUKMD3wBX8v] += (L6LENoZsf[i][CtFrQHix] - L6LENoZsf[GTEgi9X6][CtFrQHix]) * (L6LENoZsf[i][CtFrQHix] - L6LENoZsf[GTEgi9X6][CtFrQHix]);
                    CtFrQHix = CtFrQHix +1;
                };
            }
            GTEgi9X6++;
            QDSbyap5[MUKMD3wBX8v] = sqrt (QDSbyap5[MUKMD3wBX8v]);
            MUKMD3wBX8v = MUKMD3wBX8v +1;
        };
    }
    for (i = (983 - 983); i < MUKMD3wBX8v -(167 - 166); i++) {
        GTEgi9X6 = 873 - 873;
        while (MUKMD3wBX8v -i - (259 - 258) > GTEgi9X6) {
            if (QDSbyap5[GTEgi9X6 +(701 - 700)] > QDSbyap5[GTEgi9X6]) {
                mkfU56qdI = QDSbyap5[GTEgi9X6];
                QDSbyap5[GTEgi9X6] = QDSbyap5[GTEgi9X6 +(804 - 803)];
                QDSbyap5[GTEgi9X6 +(923 - 922)] = mkfU56qdI;
                mkfU56qdI = h9p3awPjd[GTEgi9X6];
                h9p3awPjd[GTEgi9X6] = h9p3awPjd[GTEgi9X6 +(205 - 204)];
                h9p3awPjd[GTEgi9X6 +(718 - 717)] = mkfU56qdI;
                mkfU56qdI = Grix61Notd[GTEgi9X6];
                Grix61Notd[GTEgi9X6] = Grix61Notd[GTEgi9X6 +(132 - 131)];
                Grix61Notd[GTEgi9X6 +(566 - 565)] = mkfU56qdI;
            }
            GTEgi9X6++;
        };
    }
    MUKMD3wBX8v = (H31sCADy -(333 - 332)) * H31sCADy / (518 - 516);
    {
        i = 243 - 243;
        while (MUKMD3wBX8v > i) {
            cout << "(" << L6LENoZsf[Grix61Notd[i]][0] << "," << L6LENoZsf[Grix61Notd[i]][1] << "," << L6LENoZsf[Grix61Notd[i]][(676 - 674)] << ")-(" << L6LENoZsf[h9p3awPjd[i]][0] << "," << L6LENoZsf[h9p3awPjd[i]][1] << "," << L6LENoZsf[h9p3awPjd[i]][(525 - 523)] << ")=" << fixed << setprecision (2) << QDSbyap5[i] << endl;
            i = i + 1;
        };
    }
    return 0;
}

