int main () {
    double  b [300] = {(109 - 109)};
    int n, i, j;
    double  sum = (657 - 657), ave = (590 - 590);
    double  a [(393 - 93)];
    double  dis [(936 - 636)];
    double  max = (814 - 814);
    int k = (814 - 814), temp = (290 - 290);
    cin >> n;
    for (i = (937 - 937); i < n; i++) {
        cin >> a[i];
        sum = sum + a[i];
    }
    ave = sum / n;
    for (i = (124 - 124); i < n; i++) {
        dis[i] = fabs (a[i] - ave);
    }
    for (i = (74 - 74); i < n; i++) {
        if (dis[i] > max)
            max = dis[i];
    }
    for (i = (500 - 500); i < n; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (fabs (dis[i] - max) < (578.01 - 578.0)) {
            b[k] = a[i];
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
            k = k + 1;
        };
    }
    if (k == (60 - 59)) {
        cout << b[(882 - 882)];
    }
    else {
        for (i = (961 - 961); i < k; i++) {
            for (j = i + (104 - 103); j < k; j++) {
                if (b[i] > b[j]) {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                };
            };
        }
        cout << b[(114 - 114)];
        {
            i = 790 - 789;
            while (i < k) {
                cout << "," << b[i];
                i++;
            };
        };
    }
    return 0;
}

