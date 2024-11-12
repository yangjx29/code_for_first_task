int main () {
    int qh7gtDkp;
    int w05eRSVfugT;
    int tGdnx6vPm;
    int x [10];
    int y [10];
    int z [10];
    qh7gtDkp = 0;
    int n;
    struct   distance {
        int x1;
        int qNHZLcg;
        int XUoLTxfyk;
        int zPpuQ2y0Ht;
        int y2;
        int z2;
        double  d;
    }
    dis [100];
    struct   distance {
        int x1;
        int qNHZLcg;
        int XUoLTxfyk;
        int zPpuQ2y0Ht;
        int y2;
        int z2;
        double  d;
    }
    jnieYAqO9;
    cin >> n;
    {
        w05eRSVfugT = 0;
        while (w05eRSVfugT < n) {
            cin >> x[w05eRSVfugT];
            cin >> y[w05eRSVfugT];
            cin >> z[w05eRSVfugT];
            w05eRSVfugT = w05eRSVfugT + 1;
        }
    }
    {
        w05eRSVfugT = 0;
        while (w05eRSVfugT < n - 1) {
            {
                tGdnx6vPm = w05eRSVfugT + 1;
                while (tGdnx6vPm < n) {
                    dis[qh7gtDkp].x1 = x[w05eRSVfugT];
                    dis[qh7gtDkp].qNHZLcg = y[w05eRSVfugT];
                    dis[qh7gtDkp].XUoLTxfyk = z[w05eRSVfugT];
                    dis[qh7gtDkp].zPpuQ2y0Ht = x[tGdnx6vPm];
                    dis[qh7gtDkp].y2 = y[tGdnx6vPm];
                    dis[qh7gtDkp].z2 = z[tGdnx6vPm];
                    dis[qh7gtDkp].d = sqrt ((x[w05eRSVfugT] - x[tGdnx6vPm]) * (x[w05eRSVfugT] - x[tGdnx6vPm]) + (y[w05eRSVfugT] - y[tGdnx6vPm]) * (y[w05eRSVfugT] - y[tGdnx6vPm]) + (z[w05eRSVfugT] - z[tGdnx6vPm]) * (z[w05eRSVfugT] - z[tGdnx6vPm]));
                    qh7gtDkp++;
                    tGdnx6vPm++;
                }
            }
            w05eRSVfugT++;
        }
    }
    for (w05eRSVfugT = 0; qh7gtDkp - 1 > w05eRSVfugT; w05eRSVfugT++) {
        tGdnx6vPm = 0;
        while (qh7gtDkp - 1 - w05eRSVfugT > tGdnx6vPm) {
            if (dis[tGdnx6vPm + 1].d > dis[tGdnx6vPm].d) {
                jnieYAqO9 = dis[tGdnx6vPm];
                dis[tGdnx6vPm] = dis[tGdnx6vPm + 1];
                dis[tGdnx6vPm + 1] = jnieYAqO9;
            }
            tGdnx6vPm++;
        }
    }
    {
        w05eRSVfugT = 0;
        while (qh7gtDkp > w05eRSVfugT) {
            cout << "(" << dis[w05eRSVfugT].x1 << "," << dis[w05eRSVfugT].qNHZLcg << "," << dis[w05eRSVfugT].XUoLTxfyk << ")-(" << dis[w05eRSVfugT].zPpuQ2y0Ht << "," << dis[w05eRSVfugT].y2 << "," << dis[w05eRSVfugT].z2 << ")=" << fixed << setprecision (2) << dis[w05eRSVfugT].d << endl;
            w05eRSVfugT++;
        }
    }
    return 0;
}

