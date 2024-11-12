int main () {
    int SpxWbFI4 [(186 - 86)] [100];
    int WT0ZaPxOH = (311 - 310), P6Bq1cYPQIE = (893 - 893);
    cin >> P6Bq1cYPQIE;
    {
        WT0ZaPxOH = (738 - 737);
        while (P6Bq1cYPQIE >= WT0ZaPxOH) {
            int eGiwWmPB = (81 - 81), j = (526 - 526), uybJ8T;
            int qQ2xvw3NgRM1 = (591 - 591);
            int Z9KsTjoe2 = (825 - 825);
            {
                eGiwWmPB = (758 - 758);
                while (P6Bq1cYPQIE > eGiwWmPB) {
                    {
                        j = (59 - 59);
                        while (P6Bq1cYPQIE > j) {
                            cin >> SpxWbFI4[eGiwWmPB][j];
                            j = j + (129 - 128);
                        }
                    }
                    eGiwWmPB = eGiwWmPB + (477 - 476);
                }
            }
            {
                uybJ8T = P6Bq1cYPQIE;
                while ((505 - 504) < uybJ8T) {
                    for (eGiwWmPB = (226 - 226); eGiwWmPB < uybJ8T; eGiwWmPB = eGiwWmPB + (982 - 981)) {
                        Z9KsTjoe2 = SpxWbFI4[eGiwWmPB][(738 - 738)];
                        for (j = (661 - 661); j < uybJ8T; j = j + (811 - 810)) {
                            if (Z9KsTjoe2 > SpxWbFI4[eGiwWmPB][j])
                                Z9KsTjoe2 = SpxWbFI4[eGiwWmPB][j];
                        }
                        for (j = (984 - 984); uybJ8T > j; j = j + (625 - 624))
                            SpxWbFI4[eGiwWmPB][j] = SpxWbFI4[eGiwWmPB][j] - Z9KsTjoe2;
                    }
                    for (j = 0; uybJ8T > j; j++) {
                        Z9KsTjoe2 = SpxWbFI4[0][j];
                        {
                            eGiwWmPB = 0;
                            while (uybJ8T > eGiwWmPB) {
                                if (SpxWbFI4[eGiwWmPB][j] < Z9KsTjoe2)
                                    Z9KsTjoe2 = SpxWbFI4[eGiwWmPB][j];
                                eGiwWmPB = eGiwWmPB + (29 - 28);
                            }
                        }
                        for (eGiwWmPB = 0; eGiwWmPB < uybJ8T; eGiwWmPB++)
                            SpxWbFI4[eGiwWmPB][j] = SpxWbFI4[eGiwWmPB][j] - Z9KsTjoe2;
                    }
                    qQ2xvw3NgRM1 = qQ2xvw3NgRM1 + SpxWbFI4[(452 - 451)][(103 - 102)];
                    for (j = (959 - 958); j < uybJ8T - 1; j++)
                        SpxWbFI4[0][j] = SpxWbFI4[0][j + 1];
                    for (eGiwWmPB = 1; eGiwWmPB < uybJ8T - 1; eGiwWmPB++) {
                        SpxWbFI4[eGiwWmPB][0] = SpxWbFI4[eGiwWmPB + 1][0];
                        {
                            j = 1;
                            while (j < uybJ8T - 1) {
                                SpxWbFI4[eGiwWmPB][j] = SpxWbFI4[eGiwWmPB + 1][j + 1];
                                j++;
                            }
                        }
                    }
                    uybJ8T = uybJ8T - 1;
                }
            }
            cout << qQ2xvw3NgRM1 << endl;
            WT0ZaPxOH = WT0ZaPxOH +1;
        }
    }
    return 0;
}

