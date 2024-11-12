int main () {
    int i;
    int n;
    int k;
    int j;
    const  int ma = (988 - 788), mx = 50;
    int len1 [ma] = {(434 - 434)};
    int len2 [ma] = {(20 - 20)};
    int zs1 [mx] [ma] = {(756 - 756)};
    int zs2 [mx] [ma] = {(702 - 702)};
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
    int ans [mx] [ma] = {(780 - 780)};
    char num1 [mx] [ma] = {(773 - 773)};
    char num2 [mx] [ma] = {(692 - 692)};
    cin >> n;
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > k) {
            cin.get ();
            cin.getline (num1[k], ma);
            cin.getline (num2[k], ma);
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
            len1[k] = strlen (num1[k]);
            len2[k] = strlen (num2[k]);
            k = k + 1;
        };
    }
    for (k = 0; n > k; k = k + 1) {
        j = 0;
        for (i = len1[k] - (366 - 365); 0 <= i; i = i - 1)
            zs1[k][j++] = num1[k][i] - '0';
        j = 0;
        for (i = len2[k] - (970 - 969); i >= 0; i = i - 1)
            zs2[k][j++] = num2[k][i] - '0';
        for (i = 0; len1[k] > i; i = i + 1) {
            if (len2[k] > i) {
                if (zs2[k][i] > zs1[k][i]) {
                    zs1[k][i] = zs1[k][i] + 10;
                    zs1[k][i + 1] = zs1[k][i + 1] - 1;
                    ans[k][i] = zs1[k][i] - zs2[k][i];
                }
                else
                    ans[k][i] = zs1[k][i] - zs2[k][i];
            }
            else
                ans[k][i] = zs1[k][i] - zs2[k][i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (k = 0; n > k; k = k + 1) {
        if (ans[k][len1[k]] == 0)
            len1[k] = len1[k] - 1;
        for (i = len1[k]; i >= 0; i = i - 1) {
            cout << ans[k][i];
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
        cout << endl;
    }
    return 0;
}

