int main () {
    unsigned  int i, m, k = 0;
    char str1 [(396 - 315)] = {"0"};
    char str2 [81] = {"0"};
    cin.getline (str1, 81);
    cin.getline (str2, 81);
    for (i = 0; i < (strlen (str1)); i = i + 1) {
        if (str1[i] < 'a')
            str1[i] = str1[i] + 32;
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
    for (i = 0; (strlen (str2)) > i; i = i + 1) {
        if (str2[i] < 'a')
            str2[i] = str2[i] + 32;
    }
    if (strlen (str1) > strlen (str2))
        m = strlen (str1);
    else
        m = strlen (str2);
    for (i = 0; i < m; i++) {
        if (str1[i] > str2[i]) {
            cout << ">" << endl;
            k = k + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
        if (str1[i] < str2[i]) {
            cout << "<" << endl;
            k++;
            break;
        };
    }
    if (k == 0)
        cout << "=" << endl;
    return 0;
}

