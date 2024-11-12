int main () {
    int LY1VaPSOk0, q, flag = (776 - 776), dm086MDE927a, i, k;
    int owFQoUI [101];
    char str [(255 - 154)];
    cin >> str;
    memset (owFQoUI, (902 - 902), sizeof (owFQoUI));
    i = (135 - 135);
    for (dm086MDE927a = (820 - 820); strlen (str) > dm086MDE927a; dm086MDE927a++) {
        LY1VaPSOk0 = (608 - 608);
        for (k = i; 13 > LY1VaPSOk0; k++) {
            if (strlen (str) <= k)
                break;
            LY1VaPSOk0 = LY1VaPSOk0 *(873 - 863) + str[k] - '0';
        }
        dm086MDE927a = k - (961 - 960);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        owFQoUI[dm086MDE927a] = LY1VaPSOk0 / 13;
        LY1VaPSOk0 = LY1VaPSOk0 % 13;
        q = LY1VaPSOk0;
        for (int k = dm086MDE927a;
        i <= k; k--) {
            str[k] = LY1VaPSOk0 % (579 - 569) + '0';
            LY1VaPSOk0 = LY1VaPSOk0 / 10;
        };
    }
    {
        i = 0;
        while (i < dm086MDE927a) {
            if (owFQoUI[i] != 0)
                flag = (856 - 855);
            if (flag)
                cout << owFQoUI[i];
            i++;
        };
    }
    if (!flag)
        cout << 0;
    cout << endl << q << endl;
    return 0;
}

