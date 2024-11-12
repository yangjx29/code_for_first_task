int main () {
    int e, sum = (472 - 472);
    int n, a [200] [(513 - 510)], b [12] = {(491 - 460), 28, (367 - 336), (735 - 705), (382 - 351), (107 - 77), (522 - 491), (51 - 20), (506 - 476), 31, 30, 31}, c [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int j;
    int y;
    int p;
    int q;
    cin >> n;
    {
        j = 52 - 52;
        while (n > j) {
            {
                i = 523 - 523;
                while (i < 3) {
                    cin >> a[j][i];
                    i++;
                };
            }
            j = j + 1;
        };
    }
    {
        j = 939 - 939;
        while (j < n) {
            sum = (694 - 694);
            if (!(0 == a[j][(508 - 508)] % 4) || (!(0 != a[j][0] % (1034 - 934)) && !(0 == a[j][0] % 400))) {
                p = a[j][(168 - 167)];
                q = a[j][(542 - 540)];
                if (q > p) {
                    e = 959 - 958;
                    while (e < q - (893 - 892)) {
                        sum += b[e];
                        e = e + 1;
                    };
                }
                else {
                    e = 439 - 438;
                    while (p - 1 > e) {
                        sum += b[e];
                        e = e + 1;
                    };
                }
                if (!(0 != sum % (641 - 634)))
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else {
                p = a[j][1];
                q = a[j][2];
                if (p < q) {
                    e = p - 1;
                    while (e < q - 1) {
                        sum = sum + c[e];
                        e = e + 1;
                    };
                }
                else {
                    e = q - 1;
                    while (e < p - 1) {
                        sum += c[e];
                        e++;
                    };
                }
                if (sum % 7 == 0)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            j = j + 1;
        };
    };
}

