int main () {
    int n, a [4] [(45 - 35)], JOUvLjYxo0l;
    float dis [100] [3];
    float LiWamG;
    cin >> n;
    {
        int i = 0;
        while (n > i) {
            {
                int j = (431 - 430);
                while (3 >= j) {
                    cin >> a[j][i];
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
    JOUvLjYxo0l = 0;
    {
        int i = 0;
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
        while (n > i) {
            for (int j = i + 1;
            n > j; j++) {
                JOUvLjYxo0l++;
                dis[JOUvLjYxo0l][0] = sqrt ((float) ((a[1][i] - a[1][j]) * (a[1][i] - a[1][j]) + (a[2][i] - a[2][j]) * (a[2][i] - a[2][j]) + (a[3][i] - a[3][j]) * (a[3][i] - a[3][j])));
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
                dis[JOUvLjYxo0l][1] = i;
                dis[JOUvLjYxo0l][2] = j;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (i <= 1000) {
            i++;
            {
                int j = 1;
                while (j <= JOUvLjYxo0l -1) {
                    if (dis[j][0] < dis[j + 1][0]) {
                        LiWamG = dis[j][0];
                        dis[j][0] = dis[j + 1][0];
                        dis[j + 1][0] = LiWamG;
                        LiWamG = dis[j][1];
                        dis[j][1] = dis[j + 1][1];
                        dis[j + 1][1] = LiWamG;
                        LiWamG = dis[j][2];
                        dis[j][2] = dis[j + 1][2];
                        dis[j + 1][2] = LiWamG;
                    }
                    j++;
                };
            };
        };
    }
    {
        int i = 1;
        while (i <= JOUvLjYxo0l) {
            cout << "(" << a[1][(int) dis[i][1]] << "," << a[2][(int) dis[i][1]] << "," << a[3][(int) dis[i][1]] << ")-(" << a[1][(int) dis[i][2]] << "," << a[2][(int) dis[i][2]] << "," << a[3][(int) dis[i][2]] << ")=";
            cout << fixed << setprecision (2) << dis[i][0];
            i++;
            cout << endl;
        };
    }
    return 0;
}

