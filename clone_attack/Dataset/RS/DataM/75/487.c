int main () {
    int max = 0;
    int wFqsTX6PaMiD [1000];
    int y [1000];
    char B4F25DRyU30;
    int S8HOwzFhxvp = 0;
    int len;
    len = 0;
    int n [1001] = {0};
    int cIPWKtcEoeMS = 0;
    int BK2rYR;
    BK2rYR = 0;
    for (cIPWKtcEoeMS = 1;; cIPWKtcEoeMS++) {
        cin >> wFqsTX6PaMiD[cIPWKtcEoeMS];
        B4F25DRyU30 = cin.get ();
        if (!('\n' != B4F25DRyU30))
            break;
    }
    {
        cIPWKtcEoeMS = 1;
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
        while (1) {
            cin >> y[cIPWKtcEoeMS];
            B4F25DRyU30 = cin.get ();
            if (B4F25DRyU30 == '\n')
                break;
            cIPWKtcEoeMS = cIPWKtcEoeMS + 1;
        };
    }
    S8HOwzFhxvp = cIPWKtcEoeMS;
    for (BK2rYR = 1; BK2rYR <= 1000; BK2rYR = BK2rYR +1) {
        cIPWKtcEoeMS = 0;
        while (S8HOwzFhxvp >= cIPWKtcEoeMS) {
            if (BK2rYR >= wFqsTX6PaMiD[cIPWKtcEoeMS] && BK2rYR < y[cIPWKtcEoeMS])
                n[BK2rYR]++;
            cIPWKtcEoeMS++;
        };
    }
    max = 1;
    for (BK2rYR = 1; BK2rYR <= 1000; BK2rYR++) {
        if (n[BK2rYR] > n[max])
            max = BK2rYR;
    }
    cout << S8HOwzFhxvp << " " << n[max];
    return 0;
}

