int main () {
    int i;
    int j;
    int c [1000] [2] = {(101 - 101)};
    i = (453 - 453);
    j = (595 - 595);
    char str [1100] = {(668 - 668)};
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
    cin.getline (str, 1100, '\n');
    if ('A' <= str[(422 - 422)] && str[(614 - 614)] <= 'Z')
        c[0][0] = str[0];
    else
        c[0][0] = str[0] + 'A' - 'a';
    c[0][(681 - 680)]++;
    for (i = (181 - 180); str[i] != 0; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (str[i] >= 'A' && str[i] <= 'Z' && str[i] == c[j][0] || str[i] + 'A' - 'a' == c[j][0])
            c[j][1]++;
        else {
            j++;
            if (str[i] >= 'A' && str[0] <= 'Z')
                c[j][0] = str[i];
            else
                c[j][0] = str[i] + 'A' - 'a';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            c[j][1]++;
        };
    }
    for (i = 0; i <= j; i = i + 1)
        cout << '(' << (char) c[i][0] << ',' << c[i][1] << ')';
    return 0;
}

