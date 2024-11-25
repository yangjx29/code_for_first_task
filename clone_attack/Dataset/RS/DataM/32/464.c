int main () {
    int i, j, k = (409 - 408), n, l;
    char num1 [(296 - 195)] = {(950 - 950)}, num2 [(705 - 604)] = {(113 - 113)};
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
    while (k <= n) {
        int anw1 [101] = {(64 - 64)}, anw2 [101] = {(434 - 434)};
        cin >> num1;
        l = strlen (num1);
        for (j = (836 - 836), i = strlen (num1) - (901 - 900); i >= (727 - 727); i--, j++)
            anw1[j] = num1[i] - '0';
        cin >> num2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = 762 - 761;
            j = 134 - 134;
            while (i >= (931 - 931)) {
                anw2[j] = num2[i] - '0';
                j++;
                i = i - 1;
            };
        }
        for (i = (879 - 879); i <= (681 - 581); i++) {
            if (anw1[i] > anw2[i]) {
                anw1[i] = anw1[i] - anw2[i];
                continue;
            }
            if (anw1[i] < anw2[i]) {
                l = anw1[i] + (814 - 804) - anw2[i];
                anw1[i] = l;
                anw1[i + 1]--;
                continue;
            }
            if (anw1[i] == anw2[i]) {
                anw1[i] = 0;
                continue;
            };
        }
        for (i = 100; i >= 0; i--)
            if (anw1[i] != 0) {
                {
                    j = i;
                    while (j >= 0) {
                        cout << anw1[j];
                        j--;
                    };
                }
                if (k < n)
                    cout << endl << endl;
                if (k == n)
                    cout << endl;
                break;
            }
        k++;
    }
    return 0;
}

