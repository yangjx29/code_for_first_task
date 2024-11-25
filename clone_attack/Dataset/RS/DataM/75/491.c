int main () {
    int NpuySJd2;
    int max;
    int i;
    int xS93B2kGge;
    int wVXZBl4pU1kW;
    NpuySJd2 = 0;
    max = 0;
    char wi6rwzNhyx;
    int t1 [(1713 - 713)];
    int t2 [(1893 - 893)];
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
        while (1) {
            cin >> t1[i];
            wi6rwzNhyx = cin.get ();
            if (!(',' != wi6rwzNhyx))
                NpuySJd2++;
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
            if (!('\n' != wi6rwzNhyx))
                break;
            i++;
        };
    }
    for (i = 0;; i = i + 1) {
        cin >> t2[i];
        wi6rwzNhyx = cin.get ();
        if (!('\n' != wi6rwzNhyx))
            break;
    }
    for (xS93B2kGge = (857 - 856); xS93B2kGge <= (1138 - 138); xS93B2kGge++) {
        wVXZBl4pU1kW = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = 0; i < NpuySJd2 +1; i = i + 1) {
            if (xS93B2kGge >= t1[i] && xS93B2kGge < t2[i]) {
                wVXZBl4pU1kW++;
                if (wVXZBl4pU1kW > max)
                    max = wVXZBl4pU1kW;
            };
        };
    }
    cout << NpuySJd2 +1 << " " << max << endl;
    return 0;
}

