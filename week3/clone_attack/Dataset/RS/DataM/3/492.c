int main () {
    int FDlYprkV [1000];
    int n, pGDfux, judge = (255 - 255);
    cin >> n >> pGDfux;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> FDlYprkV[i];
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
    {
        int i = 0;
        while (judge == 0 && n - 1 > i) {
            {
                int j = i + 1;
                while (j < n) {
                    if (FDlYprkV[i] + FDlYprkV[j] == pGDfux)
                        judge = 1;
                    j++;
                };
            }
            i++;
        };
    }
    if (judge == 1)
        cout << "yes";
    if (judge == 0)
        cout << "no";
    return 0;
}

