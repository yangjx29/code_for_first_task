int main () {
    int i;
    int j;
    int len;
    char s [100];
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
    gets (s);
    len = strlen (s);
    {
        i = 0;
        while (i < len) {
            if (('0' <= s[i]) && (s[i] <= '9')) {
                {
                    j = i;
                    while (1) {
                        if ((s[j] >= '0') && (s[j] <= '9')) {
                            cout << s[j];
                            s[j] = '*';
                        }
                        else
                            break;
                        j = j + 1;
                    };
                }
                cout << endl;
            }
            i = i + 1;
        };
    }
    cout << endl;
    return 0;
}

