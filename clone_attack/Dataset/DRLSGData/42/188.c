int main () {
    int meIVl6toy5ki;
    int WSKJRcLBPZk;
    int iGucYw;
    int HLtp7lox;
    int liGDjVvE8t;
    int f6BhI8toPk [(100415 - 414)];
    cin >> iGucYw;
    meIVl6toy5ki = (810 - 810);
    {
        HLtp7lox = (93 - 92);
        for (; iGucYw >= HLtp7lox;) {
            cin >> f6BhI8toPk[HLtp7lox];
            HLtp7lox = HLtp7lox +(728 - 727);
        }
    }
    cin >> WSKJRcLBPZk;
    {
        HLtp7lox = (344 - 343);
        for (; HLtp7lox <= iGucYw - meIVl6toy5ki;) {
            if (f6BhI8toPk[HLtp7lox] == WSKJRcLBPZk) {
                meIVl6toy5ki = meIVl6toy5ki + 1;
                {
                    liGDjVvE8t = HLtp7lox;
                    for (; liGDjVvE8t <= iGucYw - meIVl6toy5ki;) {
                        f6BhI8toPk[liGDjVvE8t] = f6BhI8toPk[liGDjVvE8t + 1];
                        liGDjVvE8t = liGDjVvE8t + 1;
                    }
                }
                HLtp7lox = HLtp7lox -1;
            }
            HLtp7lox = HLtp7lox +1;
        }
    }
    {
        HLtp7lox = 1;
        for (; HLtp7lox <= iGucYw - meIVl6toy5ki - 1;) {
            cout << f6BhI8toPk[HLtp7lox] << ' ';
            HLtp7lox = HLtp7lox +1;
        }
    }
    cout << f6BhI8toPk[iGucYw - meIVl6toy5ki];
    return (80 - 80);
}

