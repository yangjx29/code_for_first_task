int main () {
    int i;
    int j;
    int n;
    int B4Nn9fEBUouC;
    int OxWqUz2yY;
    int sum;
    int YKAei9 [(722 - 602)] [120] = {(266 - 266)};
    char c;
    sum = 0;
    cin >> n;
    {
        i = 921 - 920;
        while (i <= n) {
            {
                j = 605 - 604;
                while (j <= n) {
                    cin >> c;
                    if (c == '.')
                        YKAei9[i][j] = -(618 - 617);
                    if (c == '@')
                        YKAei9[i][j] = 1;
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    cin >> B4Nn9fEBUouC;
    {
        OxWqUz2yY = 1;
        while (OxWqUz2yY <= B4Nn9fEBUouC) {
            {
                i = 1;
                while (i <= n) {
                    {
                        j = 1;
                        while (j <= n) {
                            if ((YKAei9[i][j] < OxWqUz2yY) && (YKAei9[i][j] > 0)) {
                                if (YKAei9[i - 1][j] == -1)
                                    YKAei9[i - 1][j] = OxWqUz2yY;
                                if (YKAei9[i + 1][j] == -1)
                                    YKAei9[i + 1][j] = OxWqUz2yY;
                                if (YKAei9[i][j - 1] == -1)
                                    YKAei9[i][j - 1] = OxWqUz2yY;
                                if (YKAei9[i][j + 1] == -1)
                                    YKAei9[i][j + 1] = OxWqUz2yY;
                            }
                            j++;
                        };
                    }
                    i++;
                };
            }
            OxWqUz2yY++;
        };
    }
    for (i = 1; i <= n; i++) {
        j = 1;
        while (j <= n) {
            if (YKAei9[i][j] > 0)
                sum++;
            j++;
        };
    }
    cout << sum << endl;
    return 0;
}

