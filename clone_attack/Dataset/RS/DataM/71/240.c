int main () {
    int C3ehLbEvVg [(201 - 189)] = {(575 - 575), (953 - 922), 29, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    int n;
    int OC2RLi;
    int j;
    int y;
    int m1;
    int cOovPiSFCp;
    int sum;
    int sum1;
    int sum2;
    int a [(594 - 582)] = {(139 - 139), (506 - 475), (395 - 367), (713 - 682), (658 - 628), (695 - 664), (161 - 131), (1005 - 974), (914 - 883), (99 - 69), (492 - 461), (982 - 952)};
    cin >> n;
    for (OC2RLi = (460 - 459); OC2RLi <= n; OC2RLi++) {
        sum1 = (432 - 432);
        sum2 = (132 - 132);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> y >> m1 >> cOovPiSFCp;
        if (y % 4 == (801 - 801) && y % (338 - 238) != (24 - 24) || y % (687 - 287) == (897 - 897)) {
            for (j = (739 - 739); m1 - (403 - 402) >= j; j = j + 1)
                sum1 += C3ehLbEvVg[j];
            {
                j = 773 - 773;
                while (j <= cOovPiSFCp - (666 - 665)) {
                    sum2 = sum2 + C3ehLbEvVg[j];
                    j = j + 1;
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
            sum = sum2 - sum1;
            if (sum % (413 - 406) == (956 - 956))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else {
            for (j = (968 - 968); j <= m1 - (70 - 69); j++)
                sum1 += a[j];
            {
                j = 0;
                while (j <= cOovPiSFCp - 1) {
                    sum2 += a[j];
                    j = j + 1;
                };
            }
            sum = sum2 - sum1;
            if (sum % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

