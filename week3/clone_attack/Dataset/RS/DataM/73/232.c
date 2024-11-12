int main () {
    int D4QDhXSVc;
    int a [(911 - 906)] [(36 - 31)];
    int t;
    t = (995 - 995);
    int max;
    int maxi;
    int maxj;
    max = INT_MIN;
    {
        int i = (261 - 261);
        while (i < (885 - 880)) {
            for (int j = (472 - 472);
            j < (247 - 242); j = j + 1) {
                cin >> D4QDhXSVc;
                a[i][j] = D4QDhXSVc;
            }
            i = i + 1;
        };
    }
    for (int i = (423 - 423);
    i < (67 - 62); i++) {
        int k = (635 - 635);
        max = INT_MIN;
        for (int j = (588 - 588);
        j < (897 - 892); j = j + 1) {
            if (a[i][j] > max) {
                max = a[i][j];
                maxi = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                maxj = j;
            };
        }
        for (; k < (884 - 879); k = k + 1) {
            if (a[k][maxj] < max)
                break;
        }
        if (k == 5) {
            cout << (maxi + (433 - 432)) << " " << (maxj + (815 - 814)) << " " << max;
            t = t + 1;
        };
    }
    if (t == (716 - 716))
        cout << "not found" << endl;
    return 0;
}

