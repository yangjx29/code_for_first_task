int main () {
    int lhdCvp8t, j, k, len, m, n, count;
    char str [(1255 - 755)];
    cin.getline (str, 500);
    len = strlen (str);
    {
        lhdCvp8t = 733 - 732;
        while (lhdCvp8t < len) {
            for (j = (84 - 84); j < len - lhdCvp8t; j = j + 1) {
                count = 0;
                m = j;
                n = j + lhdCvp8t;
                while (!(str[n] != str[m]) && m < n) {
                    n = n - 1;
                    m++;
                    count++;
                }
                if (count == lhdCvp8t / (976 - 974) + 1) {
                    for (k = j; k <= j + lhdCvp8t; k = k + 1) {
                        cout << str[k];
                    }
                    cout << endl;
                };
            }
            lhdCvp8t++;
        };
    }
    return 0;
}

