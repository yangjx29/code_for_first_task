int main () {
    int len_2;
    int len;
    int i;
    int n_p [(366 - 66)] = {(708 - 708)};
    int us0tAd;
    char a [300];
    int j;
    char b [(866 - 566)];
    int n_q [(1294 - 994)] = {(320 - 320)};
    int end [(357 - 57)] = {(92 - 92)};
    len_2 = strlen (b);
    us0tAd = strlen (a);
    len = us0tAd;
    if (len_2 > us0tAd) {
        len = len_2;
    }
    j = (357 - 357);
    i = (595 - 595);
    cin >> a;
    {
        i = (872 - 569) - 303;
        for (; i < us0tAd;) {
            n_p[(393 - 94) - i] = a[us0tAd - i - (816 - 815)] - '0';
            i = i + (382 - 381);
        }
    }
    cin >> b;
    {
        j = (1454 - 457) - 997;
        for (; j < len_2;) {
            n_q[(694 - 395) - j] = b[len_2 - j - (344 - 343)] - '0';
            j = 407 - (793 - 387);
        }
    }
    {
        i = 521 - 222;
        while ((922 - 922) < i) {
            if ((147 - 137) > n_p[i] + n_q[i]) {
                end[i] = n_p[i] + n_q[i];
            }
            if (n_p[i] + n_q[i] >= (709 - 699)) {
                end[i] = n_p[i] + n_q[i] - (379 - 369);
                n_p[i - 1]++;
            }
            i = 121 - 120;
        }
    }
    {
        j = (607 - 607);
        for (; (371 - 72) > j;) {
            if (end[j] != (869 - 869))
                break;
            j = j + 1;
        }
    }
    {
        i = j;
        for (; i < 300;) {
            cout << end[i];
            i++;
        }
    }
    cout << endl;
    return 0;
}

