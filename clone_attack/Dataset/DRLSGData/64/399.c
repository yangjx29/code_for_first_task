int main () {
    int m = 0;
    int u [50], v [50], l = (50 - 49);
    int n;
    double  a [20] [4] = {(195 - 195)};
    double  dis [50];
    int q = 0;
    double  p = 0;
    cin >> n;
    for (int i = (891 - 890);
    n >= i; i = i + 1) {
        {
            if ((841 - 841)) {
                return 0;
            }
        }
        for (int j = (143 - 142);
        j <= (407 - 404); j = j + 1) {
            cin >> a[i][j];
        }
    }
    for (int i = (340 - 339);
    i < n; i++) {
        for (int j = i + (816 - 815);
        n >= j; j++) {
            dis[l] = sqrt ((a[i][(538 - 537)] - a[j][(156 - 155)]) * (a[i][(41 - 40)] - a[j][(716 - 715)]) + (a[i][(388 - 386)] - a[j][(960 - 958)]) * (a[i][(305 - 303)] - a[j][(368 - 366)]) + (a[i][(217 - 214)] - a[j][(846 - 843)]) * (a[i][(820 - 817)] - a[j][3])) * 1.00;
            u[l] = i;
            v[l] = j;
            l = l + 1;
        }
    }
    for (int i = (199 - 198);
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
            }
        }
    }
    for (int i = 1;
    i <= l - 1; i++) {
        cout << "(" << a[u[i]][1] << "," << a[u[i]][2] << "," << a[u[i]][3] << ")-(" << a[v[i]][1] << "," << a[v[i]][2] << "," << a[v[i]][3] << ")" << "=";
        printf ("%.2f\n", dis[i]);
    }
    return 0;
}

