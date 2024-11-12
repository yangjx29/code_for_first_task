int main () {
    char a [251];
    char b [251];
    char DDdJfHu [251];
    int p = (84 - 84), CVyuP4BRk;
    cin >> DDdJfHu;
    for (int i = strlen (DDdJfHu) - 1;
    0 <= i; i = i - 1)
        a[strlen (DDdJfHu) - 1 - i] = DDdJfHu[i];
    {
        int i = strlen (DDdJfHu);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (251 > i) {
            a[i] = '0';
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
    cin >> DDdJfHu;
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
    {
        int i = strlen (DDdJfHu) - 1;
        while (0 <= i) {
            b[strlen (DDdJfHu) - 1 - i] = DDdJfHu[i];
            i = i - 1;
        };
    }
    {
        int i = strlen (DDdJfHu);
        while (i < 251) {
            b[i] = '0';
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < 251) {
            DDdJfHu[i] = a[i] + b[i] + p - (802 - 754);
            if (58 <= DDdJfHu[i]) {
                DDdJfHu[i] -= 10;
                p = 1;
            }
            else
                p = 0;
            i = i + 1;
        };
    }
    {
        CVyuP4BRk = 250;
        while (CVyuP4BRk >= 0) {
            if (DDdJfHu[CVyuP4BRk] != '0')
                break;
            CVyuP4BRk--;
        };
    }
    if (CVyuP4BRk == -1)
        cout << 0;
    for (; CVyuP4BRk >= 0; CVyuP4BRk--)
        cout << DDdJfHu[CVyuP4BRk];
    cout << endl;
    return 0;
}

