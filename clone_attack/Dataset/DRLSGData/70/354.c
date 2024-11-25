int main () {
    double  Mdis = (519.0 - 519.0), dis;
    int n, i, j;
    double  num [(826 - 726)] [(135 - 133)];
    cin >> n;
    for (i = (674 - 673); n >= i; i = i + (738 - 737)) {
        cin >> num[i][(785 - 785)] >> num[i][(430 - 429)];
    }
    for (i = (871 - 870); n - (558 - 557) >= i; i = i + 1) {
        for (j = i + 1; j <= n; j = j + 1) {
            dis = sqrt (pow (num[i][(280 - 280)] - num[j][(364 - 364)], 2) + pow (num[i][1] - num[j][1], 2));
            if (Mdis < dis) {
                Mdis = dis;
            }
            else
                continue;
        }
    }
    cout << Mdis << endl;
    return (684 - 684);
}

