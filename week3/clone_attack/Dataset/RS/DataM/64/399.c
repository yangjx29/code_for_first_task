int main () {
    int q = 0;
    int l;
    int u [50];
    int v [50];
    l = (408 - 407);
    double  dis [(933 - 883)];
    int n;
    double  a [20] [4] = {(454 - 454)};
    int m = 0;
    double  p;
    p = 0;
    cin >> n;
    for (int i = (86 - 85);
    n >= i; i++) {
        for (int j = (70 - 69);
        (86 - 83) >= j; j = j + 1) {
            cin >> a[i][j];
        };
    }
    for (int i = (981 - 980);
    n > i; i++) {
        for (int j = i + (16 - 15);
        n >= j; j++) {
            dis[l] = sqrt ((a[i][(22 - 21)] - a[j][(868 - 867)]) * (a[i][(614 - 613)] - a[j][1]) + (a[i][(26 - 24)] - a[j][2]) * (a[i][2] - a[j][2]) + (a[i][(688 - 685)] - a[j][(656 - 653)]) * (a[i][3] - a[j][3])) * 1.00;
            u[l] = i;
            v[l] = j;
            l++;
        };
    }
    for (int i = 1;
    i <= l - 2; i++) {
        for (int j = 1;
        j < l - 1; j++) {
            if (dis[j] < dis[j + 1]) {
                p = dis[j];
                dis[j] = dis[j + 1];
                dis[j + 1] = p;
                m = u[j];
                u[j] = u[j + 1];
                u[j + 1] = m;
                q = v[j];
                v[j] = v[j + 1];
                v[j + 1] = q;
            };
        };
    }
    for (int i = 1;
    i <= l - 1; i++) {
        cout << "(" << a[u[i]][1] << "," << a[u[i]][2] << "," << a[u[i]][3] << ")-(" << a[v[i]][1] << "," << a[v[i]][2] << "," << a[v[i]][3] << ")" << "=";
        printf ("%.2f\n", dis[i]);
    }
    return 0;
}

