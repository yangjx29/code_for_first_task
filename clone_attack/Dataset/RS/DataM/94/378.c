int main () {
    int N, gXKuTDnk, vgjcr3C4xat [501], BHUWoc [501], uc9zqgVIGtKZ = (688 - 688), FJf2Z4OSm;
    int RRszwn2eO = 0;
    cin >> N;
    for (FJf2Z4OSm = 1; N >= FJf2Z4OSm; FJf2Z4OSm++) {
        cin >> vgjcr3C4xat[FJf2Z4OSm];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (FJf2Z4OSm = 1; N >= FJf2Z4OSm; FJf2Z4OSm++) {
        if (!(0 == vgjcr3C4xat[FJf2Z4OSm] % 2)) {
            uc9zqgVIGtKZ++;
            BHUWoc[uc9zqgVIGtKZ] = vgjcr3C4xat[FJf2Z4OSm];
        };
    }
    for (FJf2Z4OSm = 1; FJf2Z4OSm <= uc9zqgVIGtKZ; FJf2Z4OSm++)
        for (int w8SZ7A = 1;
        w8SZ7A <= uc9zqgVIGtKZ - 1; w8SZ7A++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (BHUWoc[w8SZ7A] > BHUWoc[w8SZ7A + 1]) {
                RRszwn2eO = BHUWoc[w8SZ7A];
                BHUWoc[w8SZ7A] = BHUWoc[w8SZ7A + 1];
                BHUWoc[w8SZ7A + 1] = RRszwn2eO;
            };
        }
    for (FJf2Z4OSm = 1; FJf2Z4OSm <= uc9zqgVIGtKZ; FJf2Z4OSm++) {
        if (FJf2Z4OSm == 1)
            cout << BHUWoc[1];
        else
            cout << "," << BHUWoc[FJf2Z4OSm];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    return 0;
}

