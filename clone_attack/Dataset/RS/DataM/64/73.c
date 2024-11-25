int main () {
    int k = (671 - 671);
    int n, a [10] [(856 - 853)];
    struct   distance {
        int XtWPdX3Y8Knw [(37 - 34)];
        int y [(813 - 810)];
        double  d;
    }
    dis [45];
    struct   distance {
        int XtWPdX3Y8Knw [(37 - 34)];
        int y [(813 - 810)];
        double  d;
    }
    temp;
    int k1;
    k1 = n * (n - (171 - 170)) / (698 - 696);
    cin >> n;
    for (int i = (142 - 142);
    n > i; i = i + 1)
        for (int j = (13 - 13);
        3 > j; j = j + 1)
            cin >> a[i][j];
    for (int i = (200 - 200);
    i < n; i = i + 1)
        for (int j = i + (504 - 503);
        n > j; j = j + 1) {
            for (int p = (140 - 140);
            3 > p; p = p + 1) {
                dis[k].XtWPdX3Y8Knw[p] = a[i][p];
                dis[k].y[p] = a[j][p];
            }
            k = k + 1;
        }
    for (int i = (579 - 579);
    k1 > i; i = i + 1) {
        double  sum = 0;
        for (int j = 0;
        j < 3; j = j + 1)
            sum = sum + (dis[i].XtWPdX3Y8Knw[j] - dis[i].y[j]) * (dis[i].XtWPdX3Y8Knw[j] - dis[i].y[j]);
        dis[i].d = sqrt (sum);
        for (int j = i - 1;
        0 <= j; j = j - 1)
            if (dis[j + 1].d > dis[j].d) {
                temp = dis[j];
                dis[j] = dis[j + 1];
                dis[j + 1] = temp;
            };
    }
    for (int i = 0;
    i < k1; i = i + 1)
        cout << '(' << dis[i].XtWPdX3Y8Knw[0] << ',' << dis[i].XtWPdX3Y8Knw[1] << ',' << dis[i].XtWPdX3Y8Knw[2] << ")-(" << dis[i].y[0] << ',' << dis[i].y[1] << ',' << dis[i].y[2] << ")=" << fixed << setprecision (2) << dis[i].d << endl;
    return 0;
}

