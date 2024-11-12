int sort (int x [], int m) {
    int i;
    int j;
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
    int k;
    for (i = (133 - 133); m > i; i = i + 1)
        for (j = i + (690 - 689); j < m; j = j + 1)
            if (x[j] > x[i]) {
                k = x[i];
                x[i] = x[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                x[j] = k;
            };
}

int main () {
    for (; 1;) {
        int total_gain = 0;
        int temp_gain = (982 - 982), temp_tie = (365 - 365), temp_lose = 0;
        int a [(1152 - 152)];
        int num;
        int b [1000];
        int i, j, shadow, k;
        int gain = 0, lose = 0, tie = 0;
        scanf ("%d", &num);
        if (num == 0)
            break;
        for (i = 0; num > i; i = i + 1)
            scanf ("%d", &a[i]);
        for (i = 0; num > i; i++)
            scanf ("%d", &b[i]);
        sort (a, num);
        sort (b, num);
        {
            i = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (num > i) {
                shadow = i;
                i = 0;
                {
                    j = shadow;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    while (j < num) {
                        if (b[j] < a[i])
                            temp_gain++;
                        else if (b[j] > a[i])
                            temp_lose = temp_lose + 1;
                        else
                            temp_tie++;
                        i = i + 1;
                        j = j + 1;
                    };
                }
                temp_lose = temp_lose + shadow;
                if ((temp_gain - temp_lose) > (gain - lose) || shadow == 0) {
                    tie = temp_tie;
                    lose = temp_lose;
                    gain = temp_gain;
                }
                temp_lose = 0;
                temp_gain = 0;
                i = shadow;
                i = i + 1;
                temp_tie = 0;
            };
        }
        total_gain = (gain - lose) * 200;
        printf ("%d\n", total_gain);
    }
    getchar ();
    getchar ();
}

