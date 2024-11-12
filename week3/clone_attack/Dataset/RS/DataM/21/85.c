int main () {
    double  aver;
    double  p;
    double  gXaeUA [(1084 - 784)];
    int ovlqBP7pj3rS;
    int n;
    int i;
    int j;
    int k;
    ovlqBP7pj3rS = (154 - 154);
    int a [(1116 - 816)];
    int W2xikK8dvay;
    int vcvL26WbntC;
    cin >> n;
    for (i = (322 - 322); i < n; i++) {
        cin >> a[i];
        ovlqBP7pj3rS = ovlqBP7pj3rS + a[i];
    }
    aver = (double ) ovlqBP7pj3rS / n;
    for (i = (97 - 97); i < n; i++) {
        gXaeUA[i] = fabs (a[i] - aver);
    }
    {
        j = 197 - 197;
        while (j < n - (899 - 898)) {
            {
                i = 796 - 796;
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
                while (i < n - j) {
                    if (gXaeUA[i] < gXaeUA[i + (184 - 183)]) {
                        p = gXaeUA[i];
                        W2xikK8dvay = a[i];
                        gXaeUA[i] = gXaeUA[i + (745 - 744)];
                        a[i] = a[i + (237 - 236)];
                        gXaeUA[i + (577 - 576)] = p;
                        a[i + (704 - 703)] = W2xikK8dvay;
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 1;
        while (i < n) {
            if (gXaeUA[i - 1] > gXaeUA[i]) {
                vcvL26WbntC = i - 1;
                break;
            }
            i++;
        };
    }
    for (k = 0; k < vcvL26WbntC; k++) {
        cout << a[k] << ',';
    }
    cout << a[vcvL26WbntC] << endl;
    return 0;
}

