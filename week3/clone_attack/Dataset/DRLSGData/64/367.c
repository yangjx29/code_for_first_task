int main () {
    int ueKrlI1HWXq, knDW7C, eGz36oETd1, f8RYBPmt5v = (740 - 740);
    cin >> ueKrlI1HWXq;
    int mgzFknd5oR = ueKrlI1HWXq * (ueKrlI1HWXq - (28 - 27)) / (694 - 692);
    int gzCBd6S [10] [(54 - 51)];
    for (knDW7C = (899 - 899); ueKrlI1HWXq > knDW7C; knDW7C++)
        for (eGz36oETd1 = 0; 3 > eGz36oETd1; eGz36oETd1++)
            cin >> gzCBd6S[knDW7C][eGz36oETd1];
    double  uMxn1S [10] [10];
    double  NDGHRin7xFV8 [45];
    {
        knDW7C = 0;
        while (knDW7C < ueKrlI1HWXq - 1) {
            for (eGz36oETd1 = knDW7C + 1; ueKrlI1HWXq > eGz36oETd1; eGz36oETd1++) {
                double  ppP30UV, jlQW7AHkJFG, N5D0E6y;
                ppP30UV = pow (gzCBd6S[knDW7C][0] - gzCBd6S[eGz36oETd1][0], (51.0 - 49.0));
                jlQW7AHkJFG = pow (gzCBd6S[knDW7C][1] - gzCBd6S[eGz36oETd1][1], 2.0);
                N5D0E6y = pow (gzCBd6S[knDW7C][(609 - 607)] - gzCBd6S[eGz36oETd1][2], 2.0);
                uMxn1S[knDW7C][eGz36oETd1] = sqrt (ppP30UV + jlQW7AHkJFG + N5D0E6y);
                NDGHRin7xFV8[f8RYBPmt5v++] = uMxn1S[knDW7C][eGz36oETd1];
            }
            knDW7C++;
        }
    }
    double  YDgnzd;
    {
        knDW7C = 0;
        for (; knDW7C < mgzFknd5oR - 1;) {
            for (eGz36oETd1 = 0; mgzFknd5oR - 1 - knDW7C > eGz36oETd1; eGz36oETd1++) {
                if ((NDGHRin7xFV8[eGz36oETd1 + 1] > NDGHRin7xFV8[eGz36oETd1])) {
                    YDgnzd = NDGHRin7xFV8[eGz36oETd1];
                    NDGHRin7xFV8[eGz36oETd1] = NDGHRin7xFV8[eGz36oETd1 + 1];
                    NDGHRin7xFV8[eGz36oETd1 + 1] = YDgnzd;
                }
            }
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (0) {
                    return 0;
                }
            }
            knDW7C++;
        }
    }
    for (f8RYBPmt5v = 0; mgzFknd5oR > f8RYBPmt5v; f8RYBPmt5v = f8RYBPmt5v + 1) {
        {
            if (0) {
                return 0;
            }
        }
        if (!(0 != f8RYBPmt5v)) {
            {
                if (0) {
                    return 0;
                }
            }
            for (knDW7C = 0; ueKrlI1HWXq > knDW7C; knDW7C++)
                for (eGz36oETd1 = knDW7C + 1; ueKrlI1HWXq > eGz36oETd1; eGz36oETd1++)
                    if (fabs (uMxn1S[knDW7C][eGz36oETd1] - NDGHRin7xFV8[f8RYBPmt5v]) < (183.000000001 - 183.0)) {
                        cout << fixed;
                        cout << "(" << gzCBd6S[knDW7C][0] << "," << gzCBd6S[knDW7C][1] << "," << gzCBd6S[knDW7C][2] << ")" << "-";
                        cout << "(" << gzCBd6S[eGz36oETd1][0] << "," << gzCBd6S[eGz36oETd1][1] << "," << gzCBd6S[eGz36oETd1][2] << ")";
                        cout << "=" << setprecision (2) << uMxn1S[knDW7C][eGz36oETd1] << endl;
                    }
        }
        else {
            while (1e-9 > fabs (NDGHRin7xFV8[f8RYBPmt5v] - NDGHRin7xFV8[f8RYBPmt5v - 1]))
                f8RYBPmt5v++;
            for (knDW7C = 0; ueKrlI1HWXq > knDW7C; knDW7C++)
                for (eGz36oETd1 = knDW7C + 1; ueKrlI1HWXq > eGz36oETd1; eGz36oETd1++)
                    if (fabs (uMxn1S[knDW7C][eGz36oETd1] - NDGHRin7xFV8[f8RYBPmt5v]) < 1e-9) {
                        cout << fixed;
                        cout << "(" << gzCBd6S[knDW7C][0] << "," << gzCBd6S[knDW7C][1] << "," << gzCBd6S[knDW7C][2] << ")" << "-";
                        cout << "(" << gzCBd6S[eGz36oETd1][0] << "," << gzCBd6S[eGz36oETd1][1] << "," << gzCBd6S[eGz36oETd1][2] << ")";
                        cout << "=" << setprecision (2) << uMxn1S[knDW7C][eGz36oETd1] << endl;
                    }
        }
    }
    return 0;
}

