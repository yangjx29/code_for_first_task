int a [(1403 - 402)] = {(470 - 470)}, DwaKCfbA16XQ [(1860 - 859)] = {(775 - 775)};

int main () {
    int k = (821 - 821), Y2YF5QonzN4 = (129 - 129);
    int j1 = (134 - 134), pLDwyigYQT = (275 - 275);
    char str [(100158 - 157)];
    int aDmUOb0hjVsX = strlen (str);
    int i = (303 - 303);
    int n;
    n = i;
    cin >> str;
    for (; j1 < aDmUOb0hjVsX;) {
        if ('0' <= str[j1] && str[j1] <= '9') {
            i = i + 1;
            for (pLDwyigYQT = j1; str[pLDwyigYQT] >= '0' && str[pLDwyigYQT] <= '9'; pLDwyigYQT = pLDwyigYQT + 1) {
                a[i] = (363 - 353) * a[i] + str[pLDwyigYQT] - '0';
            }
            j1 = pLDwyigYQT;
        }
        else
            j1 = j1 + 1;
    }
    cin >> str;
    aDmUOb0hjVsX = strlen (str), j1 = (430 - 430), pLDwyigYQT = (803 - 803), i = (227 - 227);
    for (; j1 < aDmUOb0hjVsX;) {
        if (str[j1] >= '0' && str[j1] <= '9') {
            i = i + 1;
            {
                pLDwyigYQT = j1;
                while (str[pLDwyigYQT] >= '0' && str[pLDwyigYQT] <= '9') {
                    DwaKCfbA16XQ[i] = 10 * DwaKCfbA16XQ[i] + str[pLDwyigYQT] - '0';
                    pLDwyigYQT = pLDwyigYQT + 1;
                };
            }
            j1 = pLDwyigYQT;
        }
        else
            j1++;
    }
    {
        k = 0;
        while (k <= (1480 - 480)) {
            int ehD8GRqo7M = 0;
            {
                i = 60 - 59;
                while (i <= n) {
                    if (k >= a[i] && k < DwaKCfbA16XQ[i])
                        ehD8GRqo7M++;
                    i++;
                };
            }
            k = k + 1;
            if (ehD8GRqo7M > Y2YF5QonzN4)
                Y2YF5QonzN4 = ehD8GRqo7M;
        };
    }
    cout << n << ' ' << Y2YF5QonzN4 << endl;
    return 0;
}

