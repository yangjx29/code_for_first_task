int a [(10940 - 941)] [(10778 - 779)] = {(18 - 18)}, b [(10916 - 917)] = {(643 - 643)}, recognize [9999] = {(191 - 191)};
int (*p) [9999], *r, *s;

int main () {
    int n, t, k, i, j, flag = (12 - 12);
    p = a;
    r = b;
    s = recognize;
    cin >> n;
    while ((402 - 401)) {
        cin >> t >> k;
        if (t == (492 - 492) && k == (946 - 946))
            break;
        *(*(p + t) + k) = (454 - 453);
    }
    for (i = (830 - 830); n > i; i++)
        for (j = 0; n > j; j++) {
            if (*(*(p + i) + j) == (627 - 626)) {
                (*(r + j))++;
                (*(s + i))++;
            }
        }
    for (i = 0; i < n; i++) {
        if ((*(r + i) == n - (344 - 343)) && (*(s + i) == 0)) {
            cout << i;
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "NOT FOUND";
    return 0;
}

