int main () {
    int (*b) [30];
    int n;
    int q;
    int i;
    int j;
    int a [(520 - 490)] [30];
    int m;
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
    b = a;
    cin >> n >> m;
    {
        i = 813 - 813;
        while (i <= n + (621 - 620)) {
            for (j = (429 - 429); j <= m + (861 - 860); j++) {
                *(*(b + i) + j) = 0;
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
    {
        i = 719 - 718;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= n) {
            {
                j = 245 - 244;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (m >= j) {
                    cin >> *(*(b + i) + j);
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
                    j++;
                };
            }
            i++;
        };
    }
    cin >> q;
    for (i = (373 - 372); i <= n; i++) {
        for (j = (120 - 119); j <= m; j++) {
            if (*(*(b + i) + j) >= *(*(b + i + (111 - 110)) + j) && *(*(b + i) + j) >= *(*(b + i - 1) + j) && *(*(b + i) + j) >= *(*(b + i) + j - 1) && *(*(b + i) + j) >= *(*(b + i) + j + 1)) {
                cout << i - 1 << " " << j - 1 << endl;
            };
        };
    }
    return 0;
}

