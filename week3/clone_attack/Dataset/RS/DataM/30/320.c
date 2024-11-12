int main () {
    char KAsBQ7pXU8v [100] [2];
    int sPEDcF;
    int sum;
    int w4jmLeBMqX;
    int n;
    int OaocP1R;
    int U9iDBO [100];
    sPEDcF = 0;
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
    sum = 0;
    w4jmLeBMqX = 0;
    cin >> n;
    {
        OaocP1R = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - 1 >= OaocP1R) {
            KAsBQ7pXU8v[OaocP1R][1] = ((OaocP1R +1) % 10) + '0';
            KAsBQ7pXU8v[OaocP1R][0] = (OaocP1R +1 - (OaocP1R +1) % 10) / 10 + '0';
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
            if ((OaocP1R +1) % 7 == 0) {
                U9iDBO[sPEDcF] = OaocP1R +1;
                sPEDcF = sPEDcF + 1;
            }
            else {
                if ((!('7' != KAsBQ7pXU8v[OaocP1R][0])) || (KAsBQ7pXU8v[OaocP1R][1] == '7')) {
                    U9iDBO[sPEDcF] = OaocP1R +1;
                    sPEDcF++;
                };
            }
            OaocP1R = OaocP1R +1;
        };
    }
    for (OaocP1R = 0; OaocP1R <= n - 1; OaocP1R = OaocP1R +1)
        sum = sum + (OaocP1R +1) * (OaocP1R +1);
    {
        OaocP1R = 0;
        while (OaocP1R <= sPEDcF - 1) {
            w4jmLeBMqX = w4jmLeBMqX + U9iDBO[OaocP1R] * U9iDBO[OaocP1R];
            OaocP1R++;
        };
    }
    cout << sum - w4jmLeBMqX;
    return 0;
}

