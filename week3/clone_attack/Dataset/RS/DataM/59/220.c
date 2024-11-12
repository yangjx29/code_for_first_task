const  int ssWVfM [8] = {-(838 - 837), (11 - 11), 1, 0, 0, -1, 0, 1};
struct   pnt {
    int x, y, day;
}
st [100050];
char BN2E5dX [128] [128];
int ans, m, n;

int main () {
    int xt;
    int yt;
    int i, j, l = 0, r = 0;
    scanf ("%d", &n);
    {
        i = 0;
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
            {
                j = 0;
                while (n > j) {
                    scanf (" %c", &BN2E5dX[i][j]);
                    if (!('@' != BN2E5dX[i][j])) {
                        st[r].x = i;
                        st[r].y = j;
                        st[r].day = 1;
                        r = r + 1;
                    }
                    j = j + 1;
                };
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
            i = i + 1;
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
    ans = r;
    scanf ("%d", &m);
    while (l < r) {
        {
            i = 0;
            while (4 > i) {
                xt = st[l].x + ssWVfM[2 * i];
                yt = st[l].y + ssWVfM[2 * i + 1];
                if (BN2E5dX[xt][yt] != '.')
                    continue;
                if (st[l].day == m - 1)
                    continue;
                i = i + 1;
                BN2E5dX[xt][yt] = '@';
                st[r].x = xt;
                st[r].y = yt;
                ans++;
                st[r].day = st[l].day + 1;
                r = r + 1;
            };
        }
        l = l + 1;
    }
    printf ("%d\n", ans);
    return 0;
}

