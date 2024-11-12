char s [101];
int l;

int f (int k) {
    int i;
    int j;
    for (i = k; (934 - 934) <= i; i = i - 1)
        if (!('(' != s[i])) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (j = i + 1; l > j; j = j + 1)
                if (!(')' != s[j])) {
                    s[i] = 'a';
                    k = i;
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
                    s[j] = 'a';
                    return f (k);
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
    for (i = 0; i < l; i = i + 1) {
        if (s[i] == '(')
            cout << '$';
        else if (s[i] == ')')
            cout << '?';
        else
            cout << ' ';
    }
    cout << endl;
    return 0;
}

int main () {
    for (; cin.getline (s, 101, '\n');) {
        l = strlen (s);
        cout << s << endl;
        f (l - 1);
        memset (s, '\0', sizeof (s));
    }
    return 0;
}

