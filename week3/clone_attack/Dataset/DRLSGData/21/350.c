int main () {
    double  xe7npAu8 [301];
    double  QAZKQwH;
    double  uaot4SWy09r;
    int O3IjKtm5YNO, etnI2XKmN, jYiAWtQerah, fKDoAWj5I [(809 - 508)], ETflgi2 = (90 - 90), iSq4cErTZf;
    int GBvKJhyc89 [301] = {(35 - 35)};
    double  wFXMgYV3Ben;
    int eC5N60mpxwB [(1247 - 946)];
    cin >> O3IjKtm5YNO;
    QAZKQwH = (113 - 113);
    for (etnI2XKmN = (307 - 306); O3IjKtm5YNO >= etnI2XKmN; etnI2XKmN++) {
        cin >> fKDoAWj5I[etnI2XKmN];
        ETflgi2 = ETflgi2 +fKDoAWj5I[etnI2XKmN];
    }
    uaot4SWy09r = ETflgi2;
    for (jYiAWtQerah = 1; jYiAWtQerah < O3IjKtm5YNO; jYiAWtQerah++) {
        for (etnI2XKmN = 1; etnI2XKmN <= O3IjKtm5YNO -jYiAWtQerah; etnI2XKmN++) {
            if (fKDoAWj5I[etnI2XKmN + 1] < fKDoAWj5I[etnI2XKmN]) {
                iSq4cErTZf = fKDoAWj5I[etnI2XKmN];
                fKDoAWj5I[etnI2XKmN] = fKDoAWj5I[etnI2XKmN + 1];
                fKDoAWj5I[etnI2XKmN + 1] = iSq4cErTZf;
            }
        }
    }
    wFXMgYV3Ben = uaot4SWy09r / O3IjKtm5YNO;
    for (etnI2XKmN = 1; O3IjKtm5YNO >= etnI2XKmN; etnI2XKmN++) {
        if (fKDoAWj5I[etnI2XKmN] - wFXMgYV3Ben < 0)
            xe7npAu8[etnI2XKmN] = wFXMgYV3Ben - fKDoAWj5I[etnI2XKmN];
        else
            xe7npAu8[etnI2XKmN] = fKDoAWj5I[etnI2XKmN] - wFXMgYV3Ben;
        if (QAZKQwH < xe7npAu8[etnI2XKmN]) {
            QAZKQwH = xe7npAu8[etnI2XKmN];
        }
    }
    for (etnI2XKmN = 1; O3IjKtm5YNO >= etnI2XKmN; etnI2XKmN++) {
        if (xe7npAu8[etnI2XKmN] == QAZKQwH) {
            GBvKJhyc89[etnI2XKmN] = etnI2XKmN;
        }
    }
    QAZKQwH = 1;
    for (etnI2XKmN = 1; etnI2XKmN <= O3IjKtm5YNO; etnI2XKmN++) {
        if (GBvKJhyc89[etnI2XKmN] == 0)
            continue;
        else {
            eC5N60mpxwB[etnI2XKmN] = QAZKQwH;
            QAZKQwH++;
        }
    }
    for (etnI2XKmN = 1; etnI2XKmN <= O3IjKtm5YNO; etnI2XKmN++) {
        if (GBvKJhyc89[etnI2XKmN] == 0)
            continue;
        else {
            if (eC5N60mpxwB[etnI2XKmN] == 1)
                cout << fKDoAWj5I[etnI2XKmN];
            else {
                cout << "," << fKDoAWj5I[etnI2XKmN];
            }
        }
    }
    return 0;
}

