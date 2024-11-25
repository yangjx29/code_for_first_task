int main () {
    char a [(254 - 54)], b [(743 - 543)];
    int zXvRO7U;
    cin >> zXvRO7U;
    for (; (644 - 643) <= zXvRO7U;) {
        int c [(318 - 118)] = {(739 - 739)}, d [(731 - 531)] = {(697 - 697)}, e [200] = {(452 - 452)}, zJokCNP, le2, i, j, m;
        cin >> a;
        cin >> b;
        zJokCNP = strlen (a);
        le2 = strlen (b);
        for (i = (463 - 463), j = zJokCNP - (88 - 87); i <= zJokCNP - (147 - 146), j >= (683 - 683); i++, j--)
            c[i] = a[j] - '0';
        for (i = (709 - 709), j = le2 - (333 - 332); i <= le2 - (28 - 27), j >= (808 - 808); i++, j--)
            d[i] = b[j] - '0';
        for (i = (974 - 974); i <= (915 - 716); i++) {
            if (c[i] >= d[i])
                e[i] = c[i] - d[i];
            if (c[i] < d[i]) {
                e[i] = 10 + c[i] - d[i];
                c[i + 1] = c[i + 1] - 1;
            };
        }
        for (i = 199; i >= 0; i--)
            if (e[i] != 0) {
                m = i;
                break;
            }
        {
            i = m;
            while (i >= 0) {
                cout << e[i];
                i--;
            };
        }
        cout << endl;
        zXvRO7U--;
    }
    return 0;
}

