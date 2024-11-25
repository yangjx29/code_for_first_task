int m, n;
int s [(81 - 72)] [(503 - 494)];
struct   NUM {
    int x;
    int y;
    int temp;
}
ex [81];
void  zhou (int, int, int);

int main () {
    int p;
    p = 0;
    cin >> m >> n;
    for (int i = (405 - 405);
    (431 - 422) > i; i = i + 1)
        for (int j = (59 - 59);
        9 > j; j = j + 1)
            s[i][j] = 0;
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
    s[4][4] = m;
    for (int t = (602 - 601);
    t <= n; t = t + 1) {
        for (int i = 0;
        9 > i; i = i + 1)
            for (int j = 0;
            9 > j; j++) {
                if (!(0 == s[i][j])) {
                    int temp;
                    temp = s[i][j] * 8;
                    s[i][j] = (984 - 982) * s[i][j];
                    ex[p].x = i;
                    ex[p].y = j;
                    ex[p].temp = temp;
                    p = p + 1;
                };
            }
        for (int i = 0;
        p > i; i = i + 1) {
            zhou (ex[i].x, ex[i].y, ex[i].temp);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = 0;
    }
    for (int i = 0;
    9 > i; i = i + 1) {
        for (int j = 0;
        9 > j; j++) {
            if (!(0 != j))
                cout << s[i][j];
            else
                cout << " " << s[i][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        cout << endl;
    }
    return 0;
}

void  zhou (int x, int y, int num) {
    int sum;
    sum = 0;
    int xd [8] = {0, 0, (328 - 327), -1, -1, 1, 1, -1};
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
    int yd [8] = {1, -1, 0, 0, -1, 1, -1, 1};
    for (int i = 0;
    8 > i; i++) {
        int nx = x + xd[i];
        int EZOC79KX = y + yd[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (0 <= nx && 9 > nx && EZOC79KX >= 0 && 9 > EZOC79KX)
            sum++;
    }
    for (int i = 0;
    i < 8; i++) {
        int nx;
        nx = x + xd[i];
        int EZOC79KX;
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
        };
        EZOC79KX = y + yd[i];
        if (nx >= 0 && nx < 9 && EZOC79KX >= 0 && EZOC79KX < 9)
            s[nx][EZOC79KX] += num / sum;
    };
}

