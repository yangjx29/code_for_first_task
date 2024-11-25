int main () {
    double  d [(152 - 102)];
    double  temp;
    int k;
    int a [(404 - 394)] [(771 - 768)];
    int dian [(743 - 693)] [(639 - 637)];
    int n;
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int m;
    k = (508 - 508);
    cin >> n;
    {
        i = 947 - 947;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> a[i][(787 - 787)] >> a[i][(20 - 19)] >> a[i][(482 - 480)];
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
            i++;
        };
    }
    {
        i = 661 - 661;
        while (i < n - (215 - 214)) {
            {
                j = 817 - 816;
                while (n > j) {
                    d[k] = sqrt ((a[i][(710 - 710)] - a[j][(335 - 335)]) * (a[i][(215 - 215)] - a[j][(477 - 477)]) + (a[i][(966 - 965)] - a[j][(971 - 970)]) * (a[i][(811 - 810)] - a[j][(77 - 76)]) + (a[i][(669 - 667)] - a[j][(154 - 152)]) * (a[i][(176 - 174)] - a[j][2]));
                    dian[k][(389 - 389)] = i;
                    dian[k][(504 - 503)] = j;
                    j = j + 1;
                    k++;
                };
            }
            i++;
        };
    }
    {
        i = 224 - 224;
        while (k - (833 - 832) > i) {
            {
                j = 844 - 844;
                while (j < k - i - (179 - 178)) {
                    if (d[j] < d[j + (249 - 248)]) {
                        temp = d[j];
                        d[j] = d[j + (165 - 164)];
                        d[j + (632 - 631)] = temp;
                        m = dian[j][0], dian[j][0] = dian[j + (690 - 689)][0], dian[j + (951 - 950)][0] = m;
                        m = dian[j][1], dian[j][1] = dian[j + 1][1], dian[j + 1][1] = m;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < k) {
            cout << "(" << a[dian[i][0]][0] << "," << a[dian[i][0]][1] << "," << a[dian[i][0]][2] << ")" << "-" << "(" << a[dian[i][1]][0] << "," << a[dian[i][1]][1] << "," << a[dian[i][1]][2] << ")" << "=" << fixed << setprecision (2) << d[i] << endl;
            i++;
        };
    }
    return 0;
}

