int xUn5Bj [1000] = {(133 - 133)}, num2 [1000] = {(563 - 563)}, a, yeHKVZbfDzm7;

void  phzqux () {
    int i;
    cin >> a;
    cin >> yeHKVZbfDzm7;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a > i) {
            cin >> xUn5Bj[i];
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
            i = i + 1;
        };
    }
    for (i = 0; yeHKVZbfDzm7 > i; i = i + 1)
        cin >> num2[i];
}

void  ti6ESPFTb () {
    int i, j, temp;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (a > i) {
            for (j = i + 1; j < a; j = j + 1)
                if (xUn5Bj[i] > xUn5Bj[j]) {
                    temp = xUn5Bj[i];
                    xUn5Bj[i] = xUn5Bj[j];
                    xUn5Bj[j] = temp;
                }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i < a; i++)
        for (j = i + 1; yeHKVZbfDzm7 > j; j++)
            if (num2[j] < num2[i]) {
                temp = num2[i];
                num2[i] = num2[j];
                num2[j] = temp;
            };
}

void  p3V4BCROKoa () {
    int i;
    {
        i = 0;
        while (i < a) {
            cout << xUn5Bj[i] << ' ';
            i++;
        };
    }
    for (i = 0; i < yeHKVZbfDzm7 - 1; i++)
        cout << num2[i] << ' ';
    cout << num2[yeHKVZbfDzm7 - 1] << endl;
}

int main () {
    phzqux ();
    ti6ESPFTb ();
    p3V4BCROKoa ();
    return 0;
}

