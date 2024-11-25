int main () {
    int pwESJ3, mVnFlq, num = 0;
    double  F2TIXdo6eCf3;
    double  nyU5M8jJl;
    double  bKgQtW4;
    double  BcJjupM;
    double  n;
    double  JufqtpK [300];
    double  iNpY3seiOcH [300] = {(948 - 948)};
    double  gZtRyo [300] = {(784 - 784)};
    F2TIXdo6eCf3 = (374 - 374);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    nyU5M8jJl = (658 - 658);
    bKgQtW4 = (523 - 523);
    BcJjupM = (715 - 715);
    cin >> n;
    for (pwESJ3 = 0; pwESJ3 < n; pwESJ3 = pwESJ3 + 1)
        cin >> JufqtpK[pwESJ3];
    for (pwESJ3 = 0; pwESJ3 < n; pwESJ3 = pwESJ3 + 1)
        F2TIXdo6eCf3 = F2TIXdo6eCf3 +JufqtpK[pwESJ3];
    nyU5M8jJl = F2TIXdo6eCf3 / n;
    {
        pwESJ3 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pwESJ3 < n) {
            iNpY3seiOcH[pwESJ3] = fabs (JufqtpK[pwESJ3] - nyU5M8jJl);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            pwESJ3 = pwESJ3 + 1;
        };
    }
    for (pwESJ3 = 0; pwESJ3 < n; pwESJ3++)
        if (iNpY3seiOcH[pwESJ3] > bKgQtW4)
            bKgQtW4 = iNpY3seiOcH[pwESJ3];
    {
        pwESJ3 = 0;
        while (pwESJ3 < n) {
            if (iNpY3seiOcH[pwESJ3] == bKgQtW4)
                gZtRyo[num++] = JufqtpK[pwESJ3];
            pwESJ3 = pwESJ3 + 1;
        };
    }
    if (num == (885 - 884))
        cout << gZtRyo[0];
    else {
        for (pwESJ3 = 0; pwESJ3 < num - (37 - 36); pwESJ3++)
            for (mVnFlq = 0; mVnFlq < num - pwESJ3; mVnFlq++)
                if (gZtRyo[mVnFlq] > gZtRyo[mVnFlq + (459 - 458)]) {
                    BcJjupM = gZtRyo[mVnFlq + (271 - 270)];
                    gZtRyo[mVnFlq + 1] = gZtRyo[mVnFlq];
                    gZtRyo[mVnFlq] = BcJjupM;
                }
        for (pwESJ3 = 0; pwESJ3 < num - 1; pwESJ3++)
            cout << gZtRyo[pwESJ3] << ",";
        cout << gZtRyo[num];
    };
}

