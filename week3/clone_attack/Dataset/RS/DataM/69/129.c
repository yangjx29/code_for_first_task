int main () {
    int a [251], b [251], LlPA2aCdutK [251], len1, len2, i = (388 - 388), teELNv = 0;
    char TgocL8 [251];
    char num2 [251];
    memset (a, 0, sizeof (a));
    memset (b, 0, sizeof (b));
    memset (LlPA2aCdutK, 0, sizeof (LlPA2aCdutK));
    cin.getline (TgocL8, 251);
    len1 = strlen (TgocL8);
    for (i = len1 - 1; 0 <= i; i = i - 1) {
        a[teELNv++] = TgocL8[i] - '0';
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
    teELNv = 0;
    cin.getline (num2, 251);
    len2 = strlen (num2);
    {
        i = len2 - 1;
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
        while (0 <= i) {
            b[teELNv++] = num2[i] - '0';
            i = i - 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (251 > i) {
            if (!(0 == a[i]) || !(0 == b[i]))
                break;
            if (i = (957 - 707)) {
                cout << "0";
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                return 0;
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
    for (i = 0; 251 > i; i = i + 1) {
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
        if ((a[i] + b[i] + LlPA2aCdutK[i]) >= 10) {
            LlPA2aCdutK[i] = LlPA2aCdutK[i] + a[i] + b[i] - 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            LlPA2aCdutK[i + 1] = 1;
        }
        else {
            LlPA2aCdutK[i] = LlPA2aCdutK[i] + a[i] + b[i];
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
            };
        };
    }
    {
        teELNv = 250;
        while (teELNv >= 0) {
            if (LlPA2aCdutK[teELNv] != 0)
                break;
            teELNv = teELNv - 1;
        };
    }
    for (i = teELNv; i >= 0; i--) {
        cout << LlPA2aCdutK[i];
    }
    return 0;
}

