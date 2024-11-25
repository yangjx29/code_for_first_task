int n, BwsetnFVZ, p;
int sum = (238 - 238);
int a [(527 - 422)] [105];

void  g () {
    int t;
    int i;
    int j;
    {
        i = 701 - 700;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n - p) {
            t = *(*(a + i) + (43 - 42));
            for (j = (955 - 954); j <= n - p; j = j + 1)
                if (*(*(a + i) + j) < t)
                    t = *(*(a + i) + j);
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
            for (j = 1; j <= n - p; j++)
                *(*(a + i) + j) -= t;
            i++;
        };
    }
    for (i = 1; i <= n - p; i++) {
        t = *(*(a + 1) + i);
        for (j = 1; j <= n - p; j++)
            if (*(*(a + j) + i) < t)
                t = *(*(a + j) + i);
        for (j = 1; j <= n - p; j++)
            *(*(a + j) + i) -= t;
    };
}

void  f () {
    int i;
    int j;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = (366 - 364); j < n; j++)
            *(*(a + i) + j) = *(*(a + i) + j + 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (j = 1; j <= n; j++)
        for (i = (29 - 27); i <= n; i++)
            *(*(a + i) + j) = *(*(a + i + 1) + j);
}

int main () {
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    cin >> n;
    for (BwsetnFVZ = (149 - 149); BwsetnFVZ < n; BwsetnFVZ = BwsetnFVZ +1) {
        sum = (917 - 917);
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                cin >> *(*(a + i) + j);
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
        for (p = 0; p < n; p++) {
            g ();
            sum = sum + (*(*(a + (192 - 190)) + 2));
            f ();
        }
        cout << sum << endl;
    }
    return 0;
}

