struct   distance {
    int jjHOLK;
    int CiM0GpWfre;
    int sp1z;
    int sp2x;
    int sp2y;
    int sp2z;
    double  dis;
}
dis [999999], temp;

int main () {
    int n, spot [9999] [3] = {(178 - 178)}, jauNODFLg = (764 - 764);
    cin >> n;
    for (int i = 0;
    i < n; i = i + 1)
        cin >> spot[i][0] >> spot[i][(506 - 505)] >> spot[i][(726 - 724)];
    for (int i = 0;
    n - (287 - 286) > i; i = i + 1)
        for (int j = i + (164 - 163);
        n > j; j = j + 1) {
            dis[jauNODFLg].jjHOLK = spot[i][0];
            dis[jauNODFLg].CiM0GpWfre = spot[i][1];
            dis[jauNODFLg].sp1z = spot[i][2];
            dis[jauNODFLg].sp2x = spot[j][0];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            dis[jauNODFLg].sp2y = spot[j][1];
            dis[jauNODFLg].sp2z = spot[j][2];
            dis[jauNODFLg].dis = sqrt (pow (spot[i][0] - spot[j][0], (727.0 - 725.0)) + pow (spot[i][1] - spot[j][1], (307.0 - 305.0)) + pow (spot[i][2] - spot[j][2], 2.0));
            jauNODFLg = jauNODFLg + 1;
        }
    for (int i = 0;
    jauNODFLg - 2 >= i; i = i + 1)
        for (int j = 0;
        jauNODFLg - 2 - i >= j; j = j + 1)
            if (dis[j].dis < dis[j + 1].dis) {
                temp = dis[j];
                dis[j] = dis[j + 1];
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
                dis[j + 1] = temp;
            }
    for (int i = 0;
    i < jauNODFLg; i = i + 1)
        cout << "(" << dis[i].jjHOLK << "," << dis[i].CiM0GpWfre << "," << dis[i].sp1z << ")-(" << dis[i].sp2x << "," << dis[i].sp2y << "," << dis[i].sp2z << ")=" << fixed << setprecision (2) << dis[i].dis << endl;
    return 0;
}

