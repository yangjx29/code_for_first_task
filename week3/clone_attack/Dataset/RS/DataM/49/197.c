int main () {
    char s [505];
    int i;
    int j;
    int l;
    cin >> s;
    l = strlen (s);
    {
        i = 2;
        while (i <= l) {
            {
                j = 978 - 978;
                while (j <= l - i) {
                    int t = i / 2;
                    int k;
                    {
                        k = 311 - 311;
                        while (k < t) {
                            if (s[j + k] != s[j + i - k - 1])
                                break;
                            k++;
                        };
                    }
                    if (k >= t) {
                        {
                            int m = j;
                            while (m < j + i) {
                                cout << s[m];
                                m++;
                            };
                        }
                        cout << endl;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

