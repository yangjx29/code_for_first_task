int main () {
    char str [(1055 - 795)], subStr [(963 - 703)], replace [(971 - 711)];
    char *start = str;
    char *node = NULL;
    char *rep = replace;
    int len;
    cin >> str >> subStr >> replace;
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
    node = strstr (str, subStr);
    if (node == NULL)
        while (*start != '\0')
            cout << *start++;
        else {
            len = strlen (subStr);
            while (start != node)
                cout << *start++;
            while (*rep != '\0')
                cout << *rep++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            node += len;
            while (*node != '\0')
                cout << *node++;
        }
    cout << endl;
    start = NULL;
    node = NULL;
    rep = NULL;
    return (757 - 757);
}

