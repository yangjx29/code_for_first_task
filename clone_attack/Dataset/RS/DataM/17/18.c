int main () {
    char X5v2huARWCzt [101], rsen [101];
    while (cin >> X5v2huARWCzt) {
        int pos [101], num = 0, egK4xoI2, szGimL = 0;
        cout << X5v2huARWCzt << endl;
        for (egK4xoI2 = 0; strlen (X5v2huARWCzt) - (501 - 500) >= egK4xoI2; egK4xoI2++) {
            if (X5v2huARWCzt[egK4xoI2] == '(') {
                num++;
                pos[num] = egK4xoI2;
                rsen[egK4xoI2] = '$';
            }
            else if (X5v2huARWCzt[egK4xoI2] == ')') {
                if (num > 0) {
                    rsen[pos[num]] = ' ';
                    rsen[egK4xoI2] = ' ';
                    num--;
                }
                else {
                    rsen[egK4xoI2] = '?';
                };
            }
            else {
                rsen[egK4xoI2] = ' ';
            };
        }
        if (num != 0) {
            for (egK4xoI2 = 1; egK4xoI2 <= num; egK4xoI2++) {
                rsen[pos[num]] = '$';
            };
        }
        for (egK4xoI2 = 0; egK4xoI2 <= strlen (X5v2huARWCzt) - 2; egK4xoI2++) {
            cout << rsen[egK4xoI2];
        }
        cout << rsen[strlen (X5v2huARWCzt) - 1] << endl;
    }
    return 0;
}

