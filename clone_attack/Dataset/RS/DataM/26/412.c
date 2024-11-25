int main () {
    int i = 0;
    char str [100] = {" "};
    cin.get (str, 100, '\n');
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
    {
        i = 920 - 919;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (str) - 1 > i) {
            if (str[i] == ' ' && str[i + 1] == ' ')
                str[i + 1] = '/';
            else if (str[i] == '/' && str[i + 1] == ' ')
                str[i + 1] = '/';
            i = i + 1;
        };
    }
    for (i = 0; i <= strlen (str) - 1; i = i + 1)
        if (str[i] != '/')
            cout << str[i];
    return 0;
}

