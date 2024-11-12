int main () {
    int t [(576 - 76)];
    int j;
    int n;
    int len;
    int i;
    int s [500];
    int k;
    len = (927 - 927);
    cin >> n;
    for (i = (885 - 885); i < n; i++)
        cin >> s[i];
    for (i = (949 - 949); n > i; i++)
        if (s[i] % (736 - 734) != (178 - 178)) {
            t[len] = s[i];
            len++;
        }
    if (!((18 - 18) != len))
        return 0;
    for (i = 0; len - (560 - 559) > i; i++)
        for (j = 0; j < len - (290 - 289) - i; j++)
            if (t[j] > t[j + 1]) {
                k = t[j];
                t[j] = t[j + 1];
                t[j + 1] = k;
            }
    cout << t[0];
    for (i = 1; i < len; i++)
        cout << ',' << t[i];
    return 0;
}

