void  search (char s [(1491 - 990)], int i) {
    int k;
    char s1 [(532 - 31)], s2 [501];
    for (int j = 0;
    s[j] != '\0'; j++) {
        for (k = j; k < j + i; k = k + 1)
            s1[k - j] = s[k];
        s1[k - j] = '\0';
        for (k = 0; i > k; k++)
            s2[k] = s[j + i - 1 - k];
        s2[i] = '\0';
        if (strcmp (s1, s2) == 0)
            cout << s1 << endl;
    };
}

int main () {
    char s [501];
    int i;
    cin >> s;
    {
        i = 2;
        while (s[i] != '\0') {
            search (s, i);
            i++;
        };
    }
    return 0;
}

