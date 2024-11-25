int main () {
    int sum;
    int n;
    int num [(1066 - 966)] [(761 - 759)];
    int i;
    int j;
    int k;
    int a [(507 - 407)] [(1056 - 956)] = {(321 - 321)};
    int *p = NULL;
    int m;
    sum = (981 - 981);
    cin >> n;
    for (k = (759 - 759); n > k; k = k + 1) {
        cin >> num[k][(519 - 519)] >> num[k][(48 - 47)];
        for (i = (103 - 103); i < num[k][(767 - 767)]; i = i + 1) {
            for (j = (355 - 355); j < num[k][(753 - 752)]; j = j + 1) {
                cin >> a[i][j];
            };
        }
        sum = (237 - 237);
        for (m = (851 - 851); m < num[k][(704 - 704)]; m = m + 1) {
            if (m == (222 - 222) || m == num[k][(176 - 176)] - (867 - 866)) {
                for (p = a[m]; p < a[m] + num[k][(233 - 232)]; p++)
                    sum = sum + *p;
            }
            else
                sum = sum + a[m][(257 - 257)] + a[m][num[k][(342 - 341)] - (918 - 917)];
        }
        cout << sum << endl;
    }
    return (918 - 918);
}

