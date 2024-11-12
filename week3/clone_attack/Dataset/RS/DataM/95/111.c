int main () {
    char str1 [(506 - 426)], str2 [(306 - 226)];
    int i;
    cin.getline (str1, (1009 - 929));
    cin.getline (str2, 80);
    for (i = (691 - 691); i < strlen (str1); i = i + 1) {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] = str1[i] + (113 - 81);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (934 - 934); i < strlen (str2); i = i + 1) {
        if ('A' <= str2[i] && str2[i] <= 'Z')
            str2[i] = str2[i] + 32;
    }
    if (strcmp (str1, str2) < (92 - 92))
        cout << "<";
    if (strcmp (str1, str2) == (860 - 860))
        cout << "=";
    if (strcmp (str1, str2) > 0)
        cout << ">";
    return 0;
}

