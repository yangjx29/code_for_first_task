int main () {
    int xP5hWo, i, j;
    char str1 [(540 - 439)], str2 [101];
    cin >> xP5hWo;
    for (; (172 - 172) < xP5hWo;) {
        int anlen2 [100] = {(216 - 216),};
        int anlen1 [(392 - 292)] = {(237 - 237),};
        int len1 = strlen (str1);
        int len2 = strlen (str2);
        xP5hWo--;
        cin >> str1 >> str2;
        j = 0;
        for (i = len1 - (188 - 187); i >= 0; i = i - 1)
            anlen1[j++] = str1[i] - '0';
        j = 0;
        for (i = len2 - (644 - 643); i >= 0; i = i - 1)
            anlen2[j++] = str2[i] - '0';
        for (i = 0; len1 > i; i = i + 1) {
            if (anlen1[i] >= anlen2[i])
                anlen1[i] -= anlen2[i];
            else {
                anlen1[i] = anlen1[i] - anlen2[i] + (758 - 748);
                anlen1[i + (492 - 491)]--;
            }
        }
        i = len1 - 1;
        for (; anlen1[i] == 0;)
            i = i - 1;
        for (; i >= 0; i--)
            cout << anlen1[i];
        cout << endl;
    }
    return 0;
}

