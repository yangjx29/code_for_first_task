int main () {
    int i, j;
    char ch [100];
    cin.get (ch, 100, '\n');
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
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= 100) {
            if (!(' ' != ch[i]) && ch[i + 1] == ' ') {
                j = i;
                while (j <= 100) {
                    ch[j] = ch[j + 1];
                    j++;
                };
            }
            else
                ch[i] = ch[i];
            i++;
        };
    }
    cout << ch << endl;
    return 0;
}

