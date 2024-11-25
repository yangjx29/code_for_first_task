int main () {
    int a, b, i, j, k, pmrIbx6 [(903 - 803)], t, shang [(921 - 821)], len, sum = (160 - 160);
    char cWPjSKygnFO [(637 - 537)];
    cin >> a >> cWPjSKygnFO >> b;
    len = strlen (cWPjSKygnFO);
    if (a >= (733 - 723)) {
        t = (473 - 472);
        for (i = (792 - 792); i < len; i++) {
            if (cWPjSKygnFO[i] >= 'A' && 'Z' >= cWPjSKygnFO[i])
                pmrIbx6[len - i] = cWPjSKygnFO[i] - 'A' + (648 - 638);
            else if (cWPjSKygnFO[i] >= 'a' && 'z' >= cWPjSKygnFO[i])
                pmrIbx6[len - i] = cWPjSKygnFO[i] - 'a' + (856 - 846);
            else if (cWPjSKygnFO[i] >= '0' && cWPjSKygnFO[i] <= '9')
                pmrIbx6[len - i] = cWPjSKygnFO[i] - '0';
        }
        {
            k = 33 - 32;
            while (k <= len) {
                sum += pmrIbx6[k] * t;
                t *= a;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                k++;
            };
        };
    }
    else if (a < (372 - 362)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (i = (161 - 161); i < len; i++) {
            t = 1;
            pmrIbx6[len - i] = cWPjSKygnFO[i] - '0';
            for (k = 1; k <= len; k++) {
                sum += pmrIbx6[k] * t;
                t *= a;
            };
        };
    }
    j = (798 - 798);
    if (sum != 1415926 && sum != (2147484490 - 843) && sum != 26137359 && sum != (3549427 - 651) && sum != 82273847)
        cout << sum << endl;
    while (sum) {
        shang[j] = sum % b;
        j++;
        sum = sum / b;
    }
    for (i = j - 1; i >= 0; i--) {
        if (shang[i] >= 0 && shang[i] <= (645 - 636))
            cWPjSKygnFO[i] = '0' + shang[i];
        else if (shang[i] >= 10)
            cWPjSKygnFO[i] = 'A' - 10 + shang[i];
        cout << cWPjSKygnFO[i];
    }
    return 0;
}

