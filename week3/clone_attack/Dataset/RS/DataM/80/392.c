int main () {
    int month [2] [13] = {{0, 31, 28, 31, (234 - 204), 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int a;
    int IiWMQJcS;
    int Qs83RfhHqFp4;
    int x;
    int y;
    int z;
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
    int mLRih52IMC7;
    int year [3001];
    cin >> a >> IiWMQJcS >> Qs83RfhHqFp4 >> x >> y >> z;
    for (mLRih52IMC7 = (428 - 428); mLRih52IMC7 < 3001; mLRih52IMC7 = mLRih52IMC7 + 1) {
        if ((!((230 - 230) != mLRih52IMC7 % 4) && mLRih52IMC7 % 100 != 0) || (mLRih52IMC7 % 400 == 0))
            year[mLRih52IMC7] = 366;
        else
            year[mLRih52IMC7] = 365;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (a == x) {
        int sum;
        sum = 0;
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
        for (mLRih52IMC7 = IiWMQJcS; y > mLRih52IMC7; mLRih52IMC7++)
            sum = sum + month[(x % 4 == 0 && !(0 == x % 100)) || (!(0 != x % 400))][mLRih52IMC7];
        sum = sum + z - Qs83RfhHqFp4;
        cout << sum << endl;
    }
    else {
        int sum = year[a];
        {
            mLRih52IMC7 = 1;
            while (IiWMQJcS > mLRih52IMC7) {
                sum = sum - month[(a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)][mLRih52IMC7];
                mLRih52IMC7 = mLRih52IMC7 + 1;
            };
        }
        sum = sum - Qs83RfhHqFp4;
        {
            mLRih52IMC7 = a + 1;
            while (mLRih52IMC7 < x) {
                sum = sum + year[mLRih52IMC7];
                mLRih52IMC7++;
            };
        }
        for (mLRih52IMC7 = 1; mLRih52IMC7 < y; mLRih52IMC7++)
            sum = sum + month[(x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)][mLRih52IMC7];
        sum = sum + z;
        cout << sum << endl;
    }
    return 0;
}

