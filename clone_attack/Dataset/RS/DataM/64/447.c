int main () {
    double  k1x9RtWqj [10] [10];
    int Kq94OoK [30];
    int n;
    int vi9gcGx;
    int j;
    int sQPwbiN7d;
    double  bP6QnaLTwB [45];
    int fuOp6T4V;
    int J0ES4yWMcIw5;
    int m0bHdj [45];
    int Yvk62u [45];
    double  npHcjwJT7M;
    npHcjwJT7M = 0;
    scanf ("%d", &n);
    for (vi9gcGx = 0; ((163 - 160) * n) > vi9gcGx; vi9gcGx = vi9gcGx + 1) {
        scanf ("%d", &Kq94OoK[vi9gcGx]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (vi9gcGx = 0; n > vi9gcGx; vi9gcGx++) {
        j = 0;
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
        while (n > j) {
            k1x9RtWqj[vi9gcGx][j] = sqrt (1.0 * ((Kq94OoK[3 * vi9gcGx] - Kq94OoK[3 * j]) * (Kq94OoK[3 * vi9gcGx] - Kq94OoK[3 * j]) + (Kq94OoK[3 * vi9gcGx + 1] - Kq94OoK[3 * j + 1]) * (Kq94OoK[3 * vi9gcGx + 1] - Kq94OoK[3 * j + 1]) + (Kq94OoK[3 * vi9gcGx + 2] - Kq94OoK[3 * j + 2]) * (Kq94OoK[3 * vi9gcGx + 2] - Kq94OoK[3 * j + 2])));
            j++;
        };
    }
    for (sQPwbiN7d = 0; n * (n - 1) / 2 > sQPwbiN7d; sQPwbiN7d++) {
        for (vi9gcGx = n - 1; 0 <= vi9gcGx; vi9gcGx--) {
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
            for (j = n - 1; 0 <= j; j--) {
                if (npHcjwJT7M <= k1x9RtWqj[vi9gcGx][j] && !(0 != sQPwbiN7d) && vi9gcGx != j) {
                    m0bHdj[sQPwbiN7d] = vi9gcGx;
                    Yvk62u[sQPwbiN7d] = j;
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
                    npHcjwJT7M = k1x9RtWqj[vi9gcGx][j];
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (k1x9RtWqj[vi9gcGx][j] >= npHcjwJT7M && sQPwbiN7d != 0 && vi9gcGx != j) {
                    m0bHdj[sQPwbiN7d] = vi9gcGx;
                    Yvk62u[sQPwbiN7d] = j;
                    npHcjwJT7M = k1x9RtWqj[vi9gcGx][j];
                };
            };
        }
        k1x9RtWqj[m0bHdj[sQPwbiN7d]][Yvk62u[sQPwbiN7d]] = -1;
        k1x9RtWqj[Yvk62u[sQPwbiN7d]][m0bHdj[sQPwbiN7d]] = -1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        bP6QnaLTwB[sQPwbiN7d] = npHcjwJT7M;
        npHcjwJT7M = 0;
    }
    for (vi9gcGx = 0; vi9gcGx < n * (n - 1) / 2; vi9gcGx++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", Kq94OoK[3 * m0bHdj[vi9gcGx]], Kq94OoK[3 * m0bHdj[vi9gcGx] + 1], Kq94OoK[3 * m0bHdj[vi9gcGx] + 2], Kq94OoK[3 * Yvk62u[vi9gcGx]], Kq94OoK[3 * Yvk62u[vi9gcGx] + 1], Kq94OoK[3 * Yvk62u[vi9gcGx] + 2], bP6QnaLTwB[vi9gcGx]);
    }
    return 0;
}

