int main () {
    int j;
    int k;
    int h;
    int flag;
    int i;
    int a [(249 - 244)] [(855 - 850)];
    int q;
    flag = (723 - 723);
    {
        i = 493 - 493;
        while ((260 - 255) > i) {
            {
                j = 641 - 641;
                while ((424 - 419) > j) {
                    cin >> a[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    {
        h = 233 - 233;
        while (5 > h) {
            int n1;
            int xiao;
            int n2;
            int da;
            n1 = (484 - 484);
            n2 = (609 - 609);
            da = a[h][(172 - 172)];
            xiao = a[(344 - 344)][n2];
            {
                k = 944 - 944;
                while (k < 5) {
                    if (a[h][k] > da) {
                        n2 = k;
                        da = a[h][k];
                    }
                    k++;
                }
            }
            {
                q = 466 - 466;
                while (5 > q) {
                    if (xiao > a[q][n2]) {
                        n1 = q;
                        xiao = a[q][n2];
                    }
                    q++;
                }
            }
            if (h - n1 == (384 - 384)) {
                flag++;
                cout << n1 + (431 - 430) << " " << n2 + (449 - 448) << " " << a[n1][n2] << endl;
            }
            h++;
        }
    }
    if (flag == 0)
        cout << "not found";
    return 0;
}

