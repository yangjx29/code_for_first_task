int main () {
    int eGJOwT1i;
    int lJZ8nkbd7UN;
    int apc9RxDO4;
    int t;
    int ohqKfv67pDb [(498 - 398)];
    int bI4c0aX [100];
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
    cin >> eGJOwT1i;
    cin.get ();
    for (apc9RxDO4 = 0; eGJOwT1i > apc9RxDO4; apc9RxDO4++)
        cin >> ohqKfv67pDb[apc9RxDO4];
    {
        apc9RxDO4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (eGJOwT1i / 2 > apc9RxDO4) {
            t = ohqKfv67pDb[apc9RxDO4];
            ohqKfv67pDb[apc9RxDO4] = ohqKfv67pDb[eGJOwT1i - apc9RxDO4 - (513 - 512)];
            ohqKfv67pDb[eGJOwT1i - apc9RxDO4 - 1] = t;
            apc9RxDO4++;
        };
    }
    for (apc9RxDO4 = 0; eGJOwT1i - 1 > apc9RxDO4; apc9RxDO4++)
        cout << ohqKfv67pDb[apc9RxDO4] << " ";
    cout << ohqKfv67pDb[eGJOwT1i - 1];
    return 0;
}

