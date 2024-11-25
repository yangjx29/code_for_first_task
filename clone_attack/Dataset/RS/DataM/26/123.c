int main () {
    char c [(692 - 591)];
    int i;
    int j;
    int L;
    int k;
    cin.getline (c, 101);
    L = (int) strlen (c);
    {
        i = 928 - 928;
        while (1) {
            if (!('\0' != c[i]))
                break;
            if (c[i] == ' ') {
                j = i;
                while (1) {
                    if (c[j] != ' ') {
                        {
                            k = j;
                            while (1) {
                                if (c[k] == '\0') {
                                    c[k - j + (222 - 221) + i] = c[k];
                                    break;
                                }
                                c[k - j + i + 1] = c[k];
                                k++;
                            };
                        }
                        break;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    cout << c;
}

