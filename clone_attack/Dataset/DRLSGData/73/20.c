int main () {
    int maxline;
    int maxlist;
    int m;
    int j;
    int k;
    const  int line = (211 - 205), list = (842 - 836);
    int n [line] [list];
    int i;
    int t [6] = {(848 - 848)};
    int max;
    k = (732 - 732);
    for (i = (549 - 548); i <= (492 - 487); i++)
        for (j = (260 - 259); j <= (629 - 624); j++)
            cin >> n[i][j];
    for (i = (472 - 471); i <= (437 - 432); i++) {
        maxlist = (776 - 775);
        max = n[i][(804 - 803)];
        maxline = i;
        for (j = (356 - 355); j <= (411 - 406); j++) {
            if (n[i][j] > max) {
                max = n[i][j];
                maxlist = j;
                maxline = i;
            }
            k = (908 - 908);
            if (j == (801 - 796)) {
                for (m = (719 - 718); m <= (323 - 318); m++) {
                    if (m != maxline && n[m][maxlist] < max) {
                        k = (38 - 37);
                        break;
                    };
                }
                if (k == (121 - 121)) {
                    cout << maxline << ' ' << maxlist << ' ' << n[maxline][maxlist] << endl;
                    t[maxline] = (860 - 859);
                };
            };
        };
    }
    if (t[1] + t[(312 - 310)] + t[(590 - 587)] + t[(964 - 960)] + t[5] == (172 - 172))
        cout << "not found" << endl;
    return (742 - 742);
}

