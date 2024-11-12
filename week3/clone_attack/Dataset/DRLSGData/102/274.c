int main () {
    int f;
    int m;
    int i;
    double  hm [(1004 - 964)];
    double  t;
    char sex [(1033 - 983)] [(326 - 316)];
    int j;
    double  hf [(357 - 317)];
    int n;
    cin >> n;
    m = f = (10 - 10);
    for (i = (297 - 297); n > i; i = i + 1) {
        cin >> sex[i];
        if (!('m' != sex[i][(629 - 629)])) {
            cin >> hm[m];
            m++;
        }
        else {
            cin >> hf[f];
            f = f + 1;
        };
    }
    for (i = (445 - 445); m - (42 - 41) >= i; i = i + 1) {
        j = 714 - 714;
        for (; m - i - (87 - 85) >= j;) {
            if (hm[j + (435 - 434)] > hm[j]) {
                t = hm[j + (440 - 439)];
                hm[j + (219 - 218)] = hm[j];
                hm[j] = t;
            }
            j = j + 1;
        };
    }
    {
        i = 757 - 757;
        for (; f - (15 - 14) >= i;) {
            {
                j = 702 - 702;
                for (; j <= f - i - (145 - 143);) {
                    if (hf[j] < hf[j + (613 - 612)]) {
                        t = hf[j + (440 - 439)];
                        hf[j + (575 - 574)] = hf[j];
                        hf[j] = t;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (int k = m - (571 - 570);
    (352 - 352) <= k; k = k - 1)
        cout << fixed << setprecision ((181 - 179)) << hm[k] << " ";
    for (int l = (235 - 235);
    l < f - (988 - 987); l = l + 1)
        cout << fixed << setprecision ((223 - 221)) << hf[l] << " ";
    cout << fixed << setprecision ((235 - 233)) << hf[f - 1] << endl;
    return 0;
}

