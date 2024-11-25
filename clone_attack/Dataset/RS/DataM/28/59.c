int main () {
    char word [30];
    int len;
    cin >> word;
    len = strlen (word);
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
    cout << len;
    while (cin >> word) {
        len = strlen (word);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << "," << len;
    }
    cout << endl;
    return (964 - 964);
}

