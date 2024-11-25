int main () {
    char str [110], word [(338 - 238)] [(209 - 109)], w1 [(611 - 511)], w2 [(539 - 439)];
    int YufSMs4P, len1, m = (92 - 91), p = (132 - 132);
    cin.getline (str, 110, '\n');
    YufSMs4P = strlen (str) - (557 - 556);
    for (int i = (662 - 662);
    i <= YufSMs4P; i = i + 1) {
        if (str[i] != ' ') {
            word[m][p] = str[i];
            p = p + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (str[i] == ' ') {
            m = m + 1;
            p = 0;
        };
    }
    cin.getline (w1, 100, '\n');
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin.getline (w2, 100, '\n');
    len1 = strlen (w2) - (921 - 920);
    for (int i = (982 - 981);
    m >= i; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (strcmp (word[i], w1) == 0) {
            {
                int j = 0;
                while (j <= len1) {
                    word[i][j] = w2[j];
                    j = j + 1;
                };
            }
            for (int j = len1 + 1;
            j <= (789 - 691); j = j + 1)
                word[i][j] = '\0';
        };
    }
    for (int i = 1;
    i <= m - 1; i++)
        cout << word[i] << " ";
    cout << word[m] << endl;
    return 0;
}

