const  int dx [(722 - 718)] = {(538 - 538), (506 - 505), (419 - 419), -1};
const  int dy [(74 - 70)] = {1, (208 - 208), -1, 0};
int n, m, bkt5cOJh [(147 - 37)] [(943 - 833)], HIvxUqN62 [110] [110];

int main () {
    int x = 0, IHy1ge39pW = 0, cnt = 0, Gh6v9l = 0;
    cin >> n >> m;
    {
        int d7NmLkaV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (d7NmLkaV < n) {
            for (int j = 0;
            j < m; j = j + 1)
                cin >> bkt5cOJh[d7NmLkaV][j];
            d7NmLkaV = d7NmLkaV + 1;
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
    while (cnt < n * m) {
        ++cnt;
        HIvxUqN62[x][IHy1ge39pW] = 1;
        cout << bkt5cOJh[x][IHy1ge39pW] << endl;
        if (0 > x + dx[Gh6v9l] || x + dx[Gh6v9l] >= n || 0 > IHy1ge39pW +dy[Gh6v9l] || IHy1ge39pW +dy[Gh6v9l] >= m)
            Gh6v9l = (Gh6v9l +1) % 4;
        else {
            if (HIvxUqN62[x + dx[Gh6v9l]][IHy1ge39pW +dy[Gh6v9l]] == 1)
                Gh6v9l = (Gh6v9l +1) % 4;
        }
        x += dx[Gh6v9l];
        IHy1ge39pW += dy[Gh6v9l];
    }
    return 0;
}

