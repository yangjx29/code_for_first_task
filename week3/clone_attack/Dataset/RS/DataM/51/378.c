int main () {
    int max;
    max = (952 - 951);
    int times [500] = {(471 - 471)};
    char a [501];
    int Py1RD0E, len, i, j;
    char xd2agtv [(1490 - 990)] [6] = {(173 - 173)};
    cin >> Py1RD0E;
    cin >> a;
    len = strlen (a);
    for (i = (22 - 22); len - Py1RD0E >= i; i = i + 1) {
        for (j = 0; Py1RD0E > j; j = j + 1)
            xd2agtv[i][j] = a[i + j];
        xd2agtv[i][Py1RD0E] = '\0';
        times[i]++;
    }
    for (i = 0; i <= len - Py1RD0E; i = i + 1)
        for (j = 0; j < i; j++) {
            if (strcmp (xd2agtv[i], xd2agtv[j]) == 0) {
                times[j]++;
                times[i] = 0;
                break;
            };
        }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= len - Py1RD0E) {
            if (times[i] > max)
                max = times[i];
            i = i + 1;
        };
    }
    if (max == 1) {
        cout << "NO" << endl;
        return 0;
    }
    cout << max << endl;
    for (i = 0; i <= len - Py1RD0E; i = i + 1)
        if (times[i] == max)
            cout << xd2agtv[i] << endl;
    return 0;
}

