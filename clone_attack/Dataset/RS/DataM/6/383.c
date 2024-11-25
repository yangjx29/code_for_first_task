int main () {
    int CSmLaKqC, wbw6D89GNWj, RoM148pW, W2ZUBQb9Xac6;
    int FD7l642;
    int d8uTRqUXpBMh;
    int oGZRHCIx;
    int zZz82PfLOM [(922 - 822)] [100];
    cin >> FD7l642;
    {
        wbw6D89GNWj = 444 - 444;
        while (wbw6D89GNWj < FD7l642) {
            wbw6D89GNWj = wbw6D89GNWj + 1;
            CSmLaKqC = 0;
            cin >> d8uTRqUXpBMh >> oGZRHCIx;
            {
                RoM148pW = 0;
                while (RoM148pW < d8uTRqUXpBMh) {
                    {
                        W2ZUBQb9Xac6 = 0;
                        while (W2ZUBQb9Xac6 < oGZRHCIx) {
                            cin >> zZz82PfLOM[RoM148pW][W2ZUBQb9Xac6];
                            W2ZUBQb9Xac6 = W2ZUBQb9Xac6 +1;
                        };
                    }
                    RoM148pW = RoM148pW +1;
                };
            }
            for (RoM148pW = 0; RoM148pW < d8uTRqUXpBMh; RoM148pW++)
                CSmLaKqC = CSmLaKqC +zZz82PfLOM[RoM148pW][0] + zZz82PfLOM[RoM148pW][oGZRHCIx - 1];
            {
                W2ZUBQb9Xac6 = 0;
                while (W2ZUBQb9Xac6 < oGZRHCIx) {
                    CSmLaKqC = CSmLaKqC +zZz82PfLOM[0][W2ZUBQb9Xac6] + zZz82PfLOM[d8uTRqUXpBMh - 1][W2ZUBQb9Xac6];
                    W2ZUBQb9Xac6 = W2ZUBQb9Xac6 +1;
                };
            }
            cout << CSmLaKqC -zZz82PfLOM[0][0] - zZz82PfLOM[0][oGZRHCIx - 1] - zZz82PfLOM[d8uTRqUXpBMh - 1][0] - zZz82PfLOM[d8uTRqUXpBMh - 1][oGZRHCIx - 1] << endl;
        };
    }
    cin.get ();
    return 0;
}

