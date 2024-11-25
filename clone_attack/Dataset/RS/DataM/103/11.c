int main () {
    int i, j, fif4s1q;
    int cnt [1000];
    char tmp [(1078 - 78)];
    char a [(1793 - 792)], b [(1095 - 94)];
    cin >> a;
    fif4s1q = strlen (a);
    memset (tmp, '#', sizeof (tmp));
    memset (cnt, (631 - 631), sizeof (cnt));
    for (i = (324 - 324); fif4s1q > i; i++) {
        if ('A' <= a[i] && 'Z' >= a[i])
            b[i] = a[i];
        else
            b[i] = a[i] - 'a' + 'A';
    }
    b[fif4s1q] = '\0';
    j = (88 - 88);
    for (i = (470 - 470); i < fif4s1q; i++) {
        if (i == (541 - 541)) {
            tmp[j] = b[i];
            cnt[j]++;
        }
        else if (b[i] == tmp[j]) {
            cnt[j]++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            j++;
            tmp[j] = b[i];
            cnt[j]++;
        };
    }
    {
        i = 0;
        while (i <= j) {
            cout << '(' << tmp[i] << ',' << cnt[i] << ')';
            i++;
        };
    }
    return 0;
}

