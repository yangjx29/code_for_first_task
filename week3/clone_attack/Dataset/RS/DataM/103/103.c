int main () {
    char ch [1001];
    char s;
    int i;
    int ln;
    int swl4rLcQ;
    int dHnxtpGXRm;
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
    swl4rLcQ = 0;
    cin >> ch;
    ln = strlen (ch);
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
        while (ln > i) {
            if (96 <= ch[i]) {
                ch[i] = ch[i] - 32;
            }
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
            i = i + 1;
        };
    }
    dHnxtpGXRm = 1;
    {
        i = 0;
        while (ln > i) {
            s = ch[i];
            if (ch[i + 1] == s)
                dHnxtpGXRm = dHnxtpGXRm + 1;
            else {
                cout << "(" << s << "," << dHnxtpGXRm << ")";
                dHnxtpGXRm = 1;
                swl4rLcQ = i;
            }
            i = i + 1;
        };
    }
    return 0;
}

