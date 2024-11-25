int n;

int cmp (const  void  *x, const  void  *y) {
    return *(int*) y - *(int*) x;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int pk (int a [], int b []) {
    int w;
    int lose;
    w = 0;
    lose = 0;
    int i;
    int gm1uol;
    int RSHUGVaA;
    int l;
    i = (188 - 188);
    gm1uol = (110 - 110);
    RSHUGVaA = n - 1;
    l = n - 1;
    int sum;
    sum = (391 - 391);
    while (i <= RSHUGVaA) {
        if (a[RSHUGVaA] > b[l]) {
            l = l - 1;
            RSHUGVaA = RSHUGVaA -1;
            w = w + 1;
            sum += (1195 - 995);
        }
        else {
            if (a[RSHUGVaA] < b[l]) {
                gm1uol = gm1uol + 1;
                RSHUGVaA = RSHUGVaA -1;
                lose = lose + 1;
                sum = sum - 200;
            }
            else if (a[i] > b[gm1uol]) {
                gm1uol = gm1uol + 1;
                i = i + 1;
                w = w + 1;
                sum += 200;
            }
            else {
                if (a[RSHUGVaA] < b[gm1uol]) {
                    lose++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    sum -= 200;
                }
                gm1uol = gm1uol + 1;
                RSHUGVaA = RSHUGVaA -1;
            };
        };
    }
    return sum;
}

int main () {
    int a [(1958 - 957)], b [1001];
    while (cin >> n && n != 0) {
        int i;
        memset (a, 0, sizeof a);
        for (i = 0; i < n; i++) {
            cin >> a[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        memset (b, 0, sizeof b);
        {
            i = 0;
            while (i < n) {
                cin >> b[i];
                i++;
            };
        }
        qsort (a, n, sizeof a[0], cmp);
        qsort (b, n, sizeof b[0], cmp);
        cout << pk (a, b) << endl;
    }
    return 0;
}

