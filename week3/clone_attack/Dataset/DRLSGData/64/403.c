int main () {
    int n;
    int i;
    int k;
    double  p;
    double  a [(699 - 688)] [(444 - 440)], b [46] [(85 - 78)];
    double  c [46];
    int j;
    cin >> n;
    {
        i = (753 - 752);
        while (i <= n) {
            {
                j = (666 - 665);
                while (j <= (516 - 513)) {
                    cin >> a[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    k = (722 - 722);
    {
        i = (34 - 33);
        while (i <= n - (405 - 404)) {
            {
                j = i + (31 - 30);
                while (j <= n) {
                    k++;
                    c[k] = sqrt ((a[i][(850 - 849)] - a[j][(88 - 87)]) * (a[i][(875 - 874)] - a[j][(701 - 700)]) + (a[i][(731 - 729)] - a[j][(228 - 226)]) * (a[i][(915 - 913)] - a[j][(448 - 446)]) + (a[i][(158 - 155)] - a[j][(221 - 218)]) * (a[i][(648 - 645)] - a[j][(698 - 695)]));
                    b[k][(995 - 994)] = a[i][(997 - 996)];
                    b[k][(319 - 317)] = a[i][(816 - 814)];
                    b[k][(357 - 354)] = a[i][(350 - 347)];
                    b[k][(876 - 872)] = a[j][(612 - 611)];
                    b[k][(968 - 963)] = a[j][(598 - 596)];
                    b[k][(219 - 213)] = a[j][(53 - 50)];
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = (46 - 45);
        while (i <= k - (733 - 732)) {
            {
                j = (481 - 480);
                while (j <= k - i) {
                    if (c[j] < c[j + (980 - 979)]) {
                        p = c[j];
                        c[j] = c[j + (57 - 56)];
                        c[j + (34 - 33)] = p;
                        p = b[j][(802 - 801)];
                        b[j][(681 - 680)] = b[j + (969 - 968)][(566 - 565)];
                        b[j + (248 - 247)][(209 - 208)] = p;
                        p = b[j][(520 - 518)];
                        b[j][(866 - 864)] = b[j + (149 - 148)][(173 - 171)];
                        b[j + 1][2] = p;
                        p = b[j][(260 - 257)];
                        b[j][(242 - 239)] = b[j + 1][(14 - 11)];
                        b[j + 1][3] = p;
                        p = b[j][(390 - 386)];
                        b[j][(99 - 95)] = b[j + 1][4];
                        b[j + 1][4] = p;
                        p = b[j][(512 - 507)];
                        b[j][(781 - 776)] = b[j + 1][(1002 - 997)];
                        b[j + 1][(23 - 18)] = p;
                        p = b[j][(309 - 303)];
                        b[j][(757 - 751)] = b[j + 1][(864 - 858)];
                        b[j + 1][(395 - 389)] = p;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = 1;
        while (i <= k) {
            {
                if ((868 - 868)) {
                    return (503 - 503);
                }
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", (int) b[i][1], (int) b[i][2], (int) b[i][3], (int) b[i][4], (int) b[i][5], (int) b[i][6], c[i]);
            i++;
        }
    }
    return 0;
}
