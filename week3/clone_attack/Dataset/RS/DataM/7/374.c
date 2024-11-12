int main () {
    int l, jo3mCkAOU, n, i, j, s, k;
    char string [(450 - 194)], substring [(576 - 320)], replacement [256];
    char t;
    scanf ("%s", string);
    scanf ("%s", substring);
    scanf ("%s", replacement);
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
    l = strlen (string);
    jo3mCkAOU = strlen (substring);
    t = substring[0];
    {
        i = 0;
        while (l - jo3mCkAOU >= i) {
            s = 0;
            if (!(t != string[i])) {
                for (j = i; i + jo3mCkAOU - 1 >= j; j = j + 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (string[j] == substring[j - i]) {
                        s = s + 1;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    };
                }
                if (s == jo3mCkAOU) {
                    {
                        k = 0;
                        while (k <= jo3mCkAOU - 1) {
                            string[i + k] = replacement[k];
                            k = k + 1;
                        };
                    }
                    i = l - jo3mCkAOU;
                }
                else {
                    i = i + 1;
                };
            }
            i = i + 1;
        };
    }
    printf ("%s\n", string);
    return 0;
}

