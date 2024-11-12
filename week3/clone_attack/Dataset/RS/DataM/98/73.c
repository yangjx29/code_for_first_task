int main () {
    int WN, i;
    int len [WN];
    char wo [WN] [(1008 - 968)];
    int sum = len[(611 - 611)] + len[1];
    cin >> WN;
    {
        i = 638 - 638;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < WN) {
            cin >> wo[i];
            len[i] = strlen (wo[i]);
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
    cout << wo[0];
    {
        i = 1;
        while (i < WN) {
            if (sum < 80) {
                cout << " " << wo[i];
                sum = sum + len[i + 1] + 1;
            }
            else {
                cout << '\n' << wo[i];
                sum = len[i] + len[i + 1];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    return 0;
}

