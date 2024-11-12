int panduan (char str3 [], char str4 [], int W0v8BO2xFD) {
    int i;
    for (i = (499 - 499); i < W0v8BO2xFD; i = i + 1) {
        if (str3[i] != str4[i])
            return (600 - 600);
    }
    return (774 - 773);
}

int main () {
    char str2 [(739 - 239)] [500];
    int CGWuIi5Yz;
    int N;
    int l;
    int i;
    int j;
    CGWuIi5Yz = (578 - 578);
    char str [(1310 - 810)];
    int a [500];
    for (i = 0; i < 500; i++)
        a[i] = 1;
    cin >> N;
    cin >> str;
    l = strlen (str);
    {
        i = 0;
        while (l - N >= i) {
            for (j = 0; N > j; j++) {
                str2[i][j] = str[i + j];
            }
            str2[i][N] = '\0';
            i = i + 1;
        };
    }
    {
        i = l - N -1;
        while (i >= 0) {
            {
                j = l - N;
                while (i < j) {
                    a[i] = a[i] + panduan (str2[i], str2[j], N);
                    j = j - 1;
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
            i--;
        };
    }
    for (i = 0; i <= l - N; i++) {
        if (a[i] >= CGWuIi5Yz)
            CGWuIi5Yz = a[i];
    }
    if (CGWuIi5Yz == 1)
        cout << "NO";
    else {
        cout << CGWuIi5Yz << endl;
        {
            i = 0;
            while (i <= l - N) {
                if (a[i] == CGWuIi5Yz)
                    cout << str2[i] << endl;
                i++;
            };
        };
    }
    return 0;
}

