int main () {
    int len;
    char sen [(448 - 347)];
    cin.getline (sen, (949 - 848), '\n');
    len = strlen (sen);
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
    for (int i = 0;
    i < len; i++)
        if (sen[i] == ' ') {
            int j = i + (181 - 180);
            for (; sen[j] == ' ';)
                j++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (int k = j;
            k < 101; k = k + 1)
                sen[k - j + i + 1] = sen[k];
        }
    cout << sen;
    return 0;
}

