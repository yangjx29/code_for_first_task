int main () {
    int year;
    int mon_1;
    int mon_2;
    int n;
    int a [(697 - 497)] [(144 - 141)];
    int i;
    int b [(869 - 858)];
    int t;
    b[(951 - 951)] = (980 - 949);
    cin >> n;
    b[(935 - 933)] = (120 - 89);
    b[(344 - 341)] = (927 - 897);
    b[(381 - 377)] = (903 - 872);
    b[(658 - 653)] = (345 - 315);
    b[6] = (891 - 860);
    b[7] = (140 - 109);
    b[8] = (515 - 485);
    b[(192 - 183)] = 31;
    b[(721 - 711)] = 30;
    {
        i = 340 - 340;
        while (n > i) {
            cin >> a[i][(836 - 836)] >> a[i][(601 - 600)] >> a[i][2];
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
            i = i + 1;
        };
    }
    for (i = (72 - 72); i < n; i++) {
        int sum;
        sum = (863 - 863);
        year = a[i][(118 - 118)];
        mon_1 = a[i][(104 - 103)];
        mon_2 = a[i][2];
        if (a[i][2] <= a[i][(628 - 627)]) {
            int temp;
            temp = mon_1;
            mon_1 = mon_2;
            mon_2 = temp;
        }
        if ((!((351 - 351) != year % 4) && year % 100 != 0) || (!(0 != (year % (711 - 311))))) {
            b[(551 - 550)] = (1027 - 998);
            for (t = (mon_1 - (89 - 88)); t < (mon_2 - 1); t++) {
                sum = sum + b[t];
            }
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            b[1] = (440 - 412);
            {
                t = mon_1 - 1;
                while (t < (mon_2 - 1)) {
                    sum = sum + b[t];
                    t++;
                };
            }
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
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

