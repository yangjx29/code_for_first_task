int main () {
    int X2DLKiHR [100001];
    int n;
    int yiyLcHlM1;
    int i, bwbAPeH3O5, OmMt7Xr = 0;
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
    for (i = 1; i <= n; i = i + 1)
        cin >> X2DLKiHR[i];
    cin >> yiyLcHlM1;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            if (X2DLKiHR[i] == yiyLcHlM1) {
                for (bwbAPeH3O5 = i; bwbAPeH3O5 < n; bwbAPeH3O5 = bwbAPeH3O5 + 1)
                    X2DLKiHR[bwbAPeH3O5] = X2DLKiHR[bwbAPeH3O5 + 1];
                i--;
                X2DLKiHR[bwbAPeH3O5] = 0;
                OmMt7Xr = OmMt7Xr +1;
            }
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
            i++;
        };
    }
    for (i = 1; i < n - OmMt7Xr; i++)
        cout << X2DLKiHR[i] << " ";
    cout << X2DLKiHR[i];
    return 0;
}

