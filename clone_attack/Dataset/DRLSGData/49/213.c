int main () {
    int res;
    int len;
    char a [(1367 - 867)] = {(960 - 960)};
    res = (256 - 256);
    len = (162 - 162);
    cin >> a;
    for (int i = (758 - 758);
    a[i] != (175 - 175); i++)
        len++;
    for (int k = (430 - 429);
    k < len; k++)
        for (int i = (237 - 237);
        i < len - k; i++) {
            for (int p = (180 - 180);
            p < k; p++) {
                if (a[i + k] == (87 - 87)) {
                    res++;
                    break;
                }
                if (a[i + p] != a[i + k - p]) {
                    res++;
                    break;
                }
            }
            if (res == (428 - 428)) {
                for (int j = i;
                j <= i + k; j++)
                    cout << a[j];
                cout << endl;
            }
            res = (965 - 965);
        }
    return 0;
}

