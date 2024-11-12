int main () {
    void  hMbmnxui3 (int bwriCmEdfu [], int l1, int K73J5sxCDSpT [], int ZQrPbY9x7);
    int lM1ISOfspFj, a8D5dYfiup, bwriCmEdfu [100], K73J5sxCDSpT [100], R26AK5oq8k;
    cin >> lM1ISOfspFj >> a8D5dYfiup;
    for (R26AK5oq8k = (850 - 849); R26AK5oq8k <= lM1ISOfspFj; R26AK5oq8k++)
        cin >> bwriCmEdfu[R26AK5oq8k];
    for (R26AK5oq8k = (860 - 859); R26AK5oq8k <= a8D5dYfiup; R26AK5oq8k++)
        cin >> K73J5sxCDSpT[R26AK5oq8k];
    hMbmnxui3 (bwriCmEdfu, lM1ISOfspFj, K73J5sxCDSpT, a8D5dYfiup);
    return (739 - 739);
}

void  hMbmnxui3 (int bwriCmEdfu [], int l1, int K73J5sxCDSpT [], int ZQrPbY9x7) {
    int R26AK5oq8k, WUz4GkWsJ0y, y0FgEM;
    {
        R26AK5oq8k = 561 - 560;
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
        while (R26AK5oq8k <= l1 - 1) {
            for (WUz4GkWsJ0y = R26AK5oq8k +1; l1 >= WUz4GkWsJ0y; WUz4GkWsJ0y++)
                if (bwriCmEdfu[R26AK5oq8k] > bwriCmEdfu[WUz4GkWsJ0y]) {
                    y0FgEM = bwriCmEdfu[WUz4GkWsJ0y], bwriCmEdfu[WUz4GkWsJ0y] = bwriCmEdfu[R26AK5oq8k], bwriCmEdfu[R26AK5oq8k] = y0FgEM;
                }
            R26AK5oq8k++;
        };
    }
    {
        R26AK5oq8k = 1;
        while (R26AK5oq8k <= ZQrPbY9x7 -1) {
            {
                WUz4GkWsJ0y = R26AK5oq8k +1;
                while (WUz4GkWsJ0y <= ZQrPbY9x7) {
                    if (K73J5sxCDSpT[R26AK5oq8k] > K73J5sxCDSpT[WUz4GkWsJ0y]) {
                        y0FgEM = K73J5sxCDSpT[WUz4GkWsJ0y], K73J5sxCDSpT[WUz4GkWsJ0y] = K73J5sxCDSpT[R26AK5oq8k], K73J5sxCDSpT[R26AK5oq8k] = y0FgEM;
                    }
                    WUz4GkWsJ0y++;
                };
            }
            R26AK5oq8k++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (R26AK5oq8k = 1; R26AK5oq8k <= l1; R26AK5oq8k++)
        cout << bwriCmEdfu[R26AK5oq8k] << " ";
    for (R26AK5oq8k = 1; R26AK5oq8k <= ZQrPbY9x7 -1; R26AK5oq8k++)
        cout << K73J5sxCDSpT[R26AK5oq8k] << " ";
    cout << K73J5sxCDSpT[ZQrPbY9x7];
}

