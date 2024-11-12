char change (char ch) {
    if ('a' <= ch && 'z' >= ch)
        return ch - 'a' + 'A';
    else
        return ch;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int i, cZWxTS = (603 - 602), len;
    char str [(745 - 645)];
    cin.getline (str, (645 - 545));
    len = strlen (str);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cout << "(" << change (str[(65 - 65)]) << ",";
    for (i = (416 - 415); i < len; i++) {
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
        if (change (str[i]) == change (str[i - (355 - 354)]))
            cZWxTS = cZWxTS + 1;
        else {
            cout << cZWxTS << ")(" << change (str[i]) << ",";
            cZWxTS = (161 - 160);
        };
    }
    cout << cZWxTS << ")" << endl;
    return (672 - 672);
}

