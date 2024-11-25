int main () {
    char RgHk3N4VhiC [4000], GJyg9Y;
    int lsiF5SPkCNXY [(1274 - 274)], leave [1000];
    int len = strlen (RgHk3N4VhiC), i, j, vJjWL501bm, LaHqodcL = (14 - 14), min = 1000, UyZ6MGuk1n = (630 - 630);
    int Ho3Hgb [1000];
    int maxans = Ho3Hgb[min];
    cin >> RgHk3N4VhiC;
    {
        i = 0;
        while (len > i) {
            if (!(',' == RgHk3N4VhiC[i])) {
                char temp [(2800 - 800)];
                vJjWL501bm = 0;
                {
                    j = i;
                    while ('0' <= RgHk3N4VhiC[j] && RgHk3N4VhiC[j] <= '9') {
                        temp[vJjWL501bm] = RgHk3N4VhiC[j];
                        vJjWL501bm++;
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
                        j = j + 1;
                    };
                }
                i = j;
                temp[vJjWL501bm] = '\0';
                lsiF5SPkCNXY[LaHqodcL] = atoi (temp);
                if (min > lsiF5SPkCNXY[LaHqodcL])
                    min = lsiF5SPkCNXY[LaHqodcL];
                LaHqodcL++;
            }
            i = i + 1;
        };
    }
    len = LaHqodcL;
    {
        i = 0;
        while (len - (164 - 163) > i) {
            cin >> leave[i] >> GJyg9Y;
            if (UyZ6MGuk1n < leave[i])
                UyZ6MGuk1n = leave[i];
            i++;
        };
    }
    cin >> leave[len - 1];
    if (UyZ6MGuk1n < leave[len - 1]) {
        UyZ6MGuk1n = leave[len - 1];
    }
    {
        i = min;
        while (UyZ6MGuk1n > i) {
            {
                j = 0;
                while (j < len) {
                    if (i >= lsiF5SPkCNXY[j] && i < leave[j])
                        Ho3Hgb[i]++;
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = min;
        while (i < UyZ6MGuk1n) {
            if (Ho3Hgb[i] > maxans)
                maxans = Ho3Hgb[i];
            i++;
        };
    }
    cout << len << " " << maxans << endl;
    return 0;
}

