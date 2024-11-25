int main () {
    int luDLaVExSO;
    int YqlgYQ;
    int s;
    char number [101];
    int XEnCjum [101];
    int kguxrIERPk;
    int yBRGJhF42Tw [101] = {(354 - 354)};
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
    s = (587 - 587);
    cin >> number;
    kguxrIERPk = strlen (number);
    {
        luDLaVExSO = 0;
        while (kguxrIERPk - 1 >= luDLaVExSO) {
            XEnCjum[luDLaVExSO] = number[luDLaVExSO] - '0';
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
            luDLaVExSO = luDLaVExSO + 1;
        };
    }
    {
        luDLaVExSO = 0;
        while (luDLaVExSO <= kguxrIERPk - 1) {
            s = s * 10 + (XEnCjum[luDLaVExSO] % 13);
            yBRGJhF42Tw[luDLaVExSO] = s / 13;
            luDLaVExSO = luDLaVExSO + 1;
            s = s % 13;
        };
    }
    {
        luDLaVExSO = 0;
        while (luDLaVExSO <= kguxrIERPk - 1) {
            if (yBRGJhF42Tw[luDLaVExSO] != 0)
                break;
            luDLaVExSO++;
        };
    }
    if (luDLaVExSO >= kguxrIERPk)
        cout << 0;
    else {
        YqlgYQ = luDLaVExSO;
        while (YqlgYQ <= kguxrIERPk - 1) {
            cout << yBRGJhF42Tw[YqlgYQ];
            YqlgYQ = YqlgYQ +1;
        };
    }
    cout << endl;
    cout << s << endl;
    return 0;
}

