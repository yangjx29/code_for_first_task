int main () {
    int i;
    int j;
    int pos;
    int len1;
    int TB0o13S;
    int a [251];
    int b [251];
    int lzPLZi [251];
    i = (989 - 989);
    j = (299 - 299);
    pos = 0;
    char str1 [(572 - 321)], str2 [(283 - 32)];
    memset (a, 0, sizeof (a));
    memset (b, 0, sizeof (b));
    cin >> str1 >> str2;
    len1 = strlen (str1);
    for (i = len1 - 1; i >= 0; i = i - 1)
        a[j++] = str1[i] - '0';
    TB0o13S = strlen (str2);
    j = 0;
    for (i = TB0o13S -1; i >= 0; i = i - 1)
        b[j++] = str2[i] - '0';
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
        while (i < len1 || i < TB0o13S) {
            a[i] = a[i] + b[i];
            if (a[i] >= 10) {
                a[i] = a[i] - 10;
                a[i + 1] = a[i + 1] + 1;
            }
            i++;
        };
    }
    {
        i = 250;
        while (i >= 0) {
            if (a[i] != 0) {
                pos = i;
                break;
            }
            i--;
        };
    }
    for (i = pos; i >= 0; i--)
        cout << a[i];
    return 0;
}

