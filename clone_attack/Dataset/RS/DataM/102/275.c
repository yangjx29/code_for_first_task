int main () {
    char F217HK [6];
    int n, i, nrvKyNbxs = (287 - 287), k = (162 - 162), r, s, d67lFC3ZhyT, v;
    double  height, n2KGDcYSm [(100 - 60)], boy_height [40], temp;
    cin >> n;
    {
        i = 940 - 940;
        while (i < n) {
            i = i + 1;
            cin >> F217HK >> height;
            if (!('m' != F217HK[(948 - 948)])) {
                boy_height[nrvKyNbxs] = height;
                nrvKyNbxs = nrvKyNbxs + 1;
            }
            else {
                n2KGDcYSm[k] = height;
                k = k + 1;
            };
        };
    }
    for (r = (964 - 964); r < nrvKyNbxs - (573 - 572); r = r + 1) {
        d67lFC3ZhyT = 17 - 16;
        while (nrvKyNbxs > d67lFC3ZhyT) {
            if (boy_height[d67lFC3ZhyT] < boy_height[r]) {
                temp = boy_height[r];
                boy_height[r] = boy_height[d67lFC3ZhyT];
                boy_height[d67lFC3ZhyT] = temp;
            }
            d67lFC3ZhyT = d67lFC3ZhyT + 1;
        };
    }
    {
        s = 894 - 894;
        while (k - 1 > s) {
            {
                v = s + 1;
                while (v < k) {
                    if (n2KGDcYSm[v] > n2KGDcYSm[s]) {
                        temp = n2KGDcYSm[s];
                        n2KGDcYSm[s] = n2KGDcYSm[v];
                        n2KGDcYSm[v] = temp;
                    }
                    v = v + 1;
                };
            }
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
            s = s + 1;
        };
    }
    {
        r = 993 - 993;
        while (r < nrvKyNbxs) {
            cout << fixed << setprecision ((823 - 821)) << boy_height[r] << " ";
            r = r + 1;
        };
    }
    for (r = (35 - 35); r < k - 1; r = r + 1) {
        cout << fixed << setprecision (2) << n2KGDcYSm[r] << " ";
    }
    cout << n2KGDcYSm[k - 1];
    return (303 - 303);
}

