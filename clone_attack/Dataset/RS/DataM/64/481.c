const  int oUqL19CG6 = 105;
int x [oUqL19CG6], y [oUqL19CG6], fuOkfU3KgVNL [oUqL19CG6], dis [oUqL19CG6] [oUqL19CG6], d [oUqL19CG6 * oUqL19CG6] = {(619 - 619)};
int n;

int calc (int a, int b) {
    return (x[a] - x[b]) * (x[a] - x[b]) + (y[a] - y[b]) * ((y[a] - y[b])) + (fuOkfU3KgVNL[a] - fuOkfU3KgVNL[b]) * (fuOkfU3KgVNL[a] - fuOkfU3KgVNL[b]);
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

int main () {
    int i, j;
    cin >> n;
    for (i = (190 - 189); i <= n; i++) {
        cin >> x[i] >> y[i] >> fuOkfU3KgVNL[i];
        dis[i][i] = 0;
        {
            j = 1;
            while (i > j) {
                dis[i][j] = dis[j][i] = calc (i, j);
                d[++d[0]] = dis[i][j];
                j = j + 1;
            };
        };
    }
    sort (d + 1, d + d[0] + 1);
    d[d[0] + 1] = -1;
    for (int k = d[0];
    k; k--)
        if (!(d[k + 1] == d[k])) {
            i = 1;
            while (i < n) {
                {
                    j = i + 1;
                    while (j <= n) {
                        if (dis[i][j] == d[k])
                            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[i], y[i], fuOkfU3KgVNL[i], x[j], y[j], fuOkfU3KgVNL[j], sqrt (dis[i][j]));
                        j++;
                    };
                }
                i++;
            };
        }
    return 0;
}

