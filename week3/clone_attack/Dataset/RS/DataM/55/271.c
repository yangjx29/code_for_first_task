int main () {
    char num [33], result [33];
    int n, a, b, i, k = -1, dec = (239 - 239), temp [33];
    cin >> a >> num >> b;
    n = strlen (num);
    {
        i = 0;
        while (n > i) {
            if ('A' <= num[i] && num[i] <= 'Z')
                num[i] = num[i] + 'a' - 'A';
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if ('a' <= num[i] && num[i] <= 'z')
            dec = dec * a + (num[i] - 'a' + 10);
        else
            dec = dec * a + (num[i] - '0');
    }
    if (dec == 0)
        cout << '0' << endl;
    else
        while (dec > 0) {
            k = k + 1;
            temp[k] = dec % b;
            dec = (dec - dec % b) / b;
        }
    for (i = k; i >= 0; i = i - 1) {
        if (temp[i] < 10)
            result[i] = temp[i] + '0';
        else
            result[i] = temp[i] + 'A' - 10;
        cout << result[i];
    }
    cout << endl;
    return 0;
}

