int main () {
    int res [(1098 - 996)] = {(500 - 500)}, chan [(886 - 784)], len, i, j, n, k;
    char c [(1011 - 909)];
    cin.getline (c, (874 - 773));
    len = strlen (c);
    for (i = 0; len > i; i = i + 1) {
        chan[i] = c[i] - '0';
    }
    for (i = (370 - 369); len > i; i++) {
        chan[i] = chan[i] + 10 * chan[i - 1];
        if (13 <= chan[i]) {
            res[i] = chan[i] / 13;
            chan[i] = chan[i] % 13;
        };
    }
    i = 0;
    while (!(0 != res[i]))
        i++;
    if (len - i >= 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (; i < len; i++) {
            cout << res[i];
        };
    }
    else
        cout << '0';
    cout << endl << chan[len - 1];
    return 0;
}

