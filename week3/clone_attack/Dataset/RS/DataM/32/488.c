int main () {
    int n, times = (109 - 109);
    cin >> n;
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
    for (; true;) {
        char ch1 [(198 - 98)], D7t6Vkz5uJ8 [(252 - 152)], ch3 [(289 - 189)];
        char temp;
        int len1 = strlen (ch1);
        int len2 = strlen (D7t6Vkz5uJ8);
        memset (ch1, (851 - 851), (148 - 48));
        memset (D7t6Vkz5uJ8, 0, 100);
        memset (ch3, 0, 100);
        cin >> ch1;
        cin >> D7t6Vkz5uJ8;
        {
            int i = 0;
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
            while (i <= len1 / (812 - 810) - (479 - 478)) {
                temp = ch1[i];
                ch1[i] = ch1[len1 - i - (916 - 915)];
                ch1[len1 - i - 1] = temp;
                i++;
            };
        }
        for (int i = 0;
        i <= len2 / 2 - 1; i++) {
            temp = D7t6Vkz5uJ8[i];
            D7t6Vkz5uJ8[i] = D7t6Vkz5uJ8[len2 - i - 1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            D7t6Vkz5uJ8[len2 - i - 1] = temp;
        }
        for (int i = len2;
        i <= len1 - 1; i++)
            D7t6Vkz5uJ8[i] = '0';
        {
            int i = 0;
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
            while (i <= len1 - 1) {
                ch3[i] = ch1[i] - D7t6Vkz5uJ8[i] + 48;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i++;
            };
        }
        {
            int i = 1;
            while (i <= len1) {
                for (int j = 0;
                j <= len1 - 1; j++) {
                    if (ch3[j] < '0') {
                        ch3[j] += 10;
                        ch3[j + 1] -= 1;
                    };
                }
                i++;
            };
        }
        if (ch3[len1 - 1] == '0') {
            int i = len1 - 2;
            while (i >= 0) {
                cout << ch3[i];
                i--;
            };
        }
        else {
            for (int i = len1 - 1;
            i >= 0; i = i - 1)
                cout << ch3[i];
        }
        cout << endl;
        cin.get ();
        times++;
        if (times == n)
            break;
    }
    return 0;
}

