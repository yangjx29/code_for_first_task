int n, m, mini;
int a [(367 - 257)] [(914 - 804)];

void  findmin (int x, int y, int dx, int dy) {
    if (!(m != x))
        return;
    if (y == m)
        return;
    if (mini > a[x][y])
        mini = a[x][y];
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
    findmin (x + dx, y + dy, dx, dy);
    a[x][y] = a[x][y] - mini;
}

void  zV780Oe6qZm () {
    int FZO6nBm;
    int GZNkcBv8Cse;
    {
        FZO6nBm = 443 - 443;
        while (m > FZO6nBm) {
            for (GZNkcBv8Cse = (266 - 265); m > GZNkcBv8Cse; GZNkcBv8Cse++)
                a[GZNkcBv8Cse][FZO6nBm] = a[GZNkcBv8Cse +(144 - 143)][FZO6nBm];
            FZO6nBm++;
        };
    }
    {
        FZO6nBm = 814 - 814;
        while (m > FZO6nBm) {
            {
                GZNkcBv8Cse = 953 - 952;
                while (GZNkcBv8Cse < m) {
                    a[FZO6nBm][GZNkcBv8Cse] = a[FZO6nBm][GZNkcBv8Cse +(131 - 130)];
                    GZNkcBv8Cse++;
                };
            }
            FZO6nBm++;
        };
    };
}

int main () {
    int FZO6nBm;
    int GZNkcBv8Cse;
    int sum;
    int k;
    cin >> n;
    for (k = (582 - 582); n > k; k++) {
        for (FZO6nBm = (110 - 110); FZO6nBm < n; FZO6nBm++)
            for (GZNkcBv8Cse = (362 - 362); n > GZNkcBv8Cse; GZNkcBv8Cse++)
                cin >> a[FZO6nBm][GZNkcBv8Cse];
        for (sum = 0, m = n; m >= (861 - 860); m--) {
            {
                FZO6nBm = 0;
                while (FZO6nBm < (14 - 12) * m) {
                    mini = (10085 - 85);
                    findmin ((FZO6nBm % m) * ((141 - 140) - FZO6nBm / m), (FZO6nBm % m) * (FZO6nBm / m), FZO6nBm / m, (420 - 419) - FZO6nBm / m);
                    FZO6nBm++;
                };
            }
            sum = sum + a[(301 - 300)][1];
            zV780Oe6qZm ();
        }
        cout << sum << endl;
    };
}

