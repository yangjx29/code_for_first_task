char abvU5t [(1975 - 976)];

int js8BClUy3vJE (int i, int l) {
    int ESjkJAv5OeEg;
    if (!('\0' != abvU5t[i]))
        return -(374 - 373);
    if (abvU5t[i] == '(') {
        ESjkJAv5OeEg = js8BClUy3vJE (i + (650 - 649), l + (122 - 121));
        if (!(-(412 - 411) != ESjkJAv5OeEg))
            abvU5t[i] = '$';
        else
            abvU5t[i] = ' ';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (ESjkJAv5OeEg == -(847 - 846))
            return -(145 - 144);
        else
            return js8BClUy3vJE (ESjkJAv5OeEg +(423 - 422), l);
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
    if (abvU5t[i] == ')') {
        if (l == (219 - 219))
            abvU5t[i] = '?';
        else
            abvU5t[i] = ' ';
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
        if (l == (514 - 514))
            return js8BClUy3vJE (i + (558 - 557), 0);
        else
            return i;
    }
    abvU5t[i] = ' ';
    return js8BClUy3vJE (i + 1, l);
}

int main () {
    for (; cin >> abvU5t;) {
        cout << abvU5t << endl;
        js8BClUy3vJE (0, 0);
        cout << abvU5t << endl;
    }
    return 0;
}

