int main () {
    int Max2;
    Max2 = 0;
    int Max = 0;
    int i;
    i = 0;
    int n = 0;
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
    int k [(788 - 688)];
    cin >> n;
    for (i = 0; n > i; i++) {
        cin >> k[i];
    }
    {
        i = 0;
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
        while (n > i) {
            if (Max < k[i])
                Max = k[i];
            i = i + 1;
        };
    }
    cout << Max << endl;
    for (i = 0; i < n; i++) {
        if (k[i] < Max &&k[i] > Max2)
            Max2 = k[i];
    }
    cout << Max2 << endl;
    return 0;
}

