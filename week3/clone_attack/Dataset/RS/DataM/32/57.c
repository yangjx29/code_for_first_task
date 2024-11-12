int main () {
    int n, num1 [102] = {0}, wSla26 [102] = {0}, num [102] = {0}, oL67f3xV, lena, lenb, j, k;
    char stra [102];
    char strb [102];
    cin >> n;
    {
        oL67f3xV = 1;
        while (oL67f3xV <= n) {
            oL67f3xV = oL67f3xV + 1;
            memset (num1, 0, sizeof (num1));
            memset (wSla26, 0, sizeof (wSla26));
            cin.get ();
            cin.getline (stra, 102);
            cin.getline (strb, 102);
            lena = strlen (stra);
            lenb = strlen (strb);
            memset (num, 0, sizeof (num));
            k = 0;
            {
                j = lena - 1;
                while (j >= 0) {
                    num1[k++] = stra[j] - '0';
                    j = j - 1;
                };
            }
            k = 0;
            {
                j = lenb - 1;
                while (j >= 0) {
                    wSla26[k++] = strb[j] - '0';
                    j = j - 1;
                };
            }
            {
                j = 0;
                while (j < 102) {
                    num1[j] -= wSla26[j];
                    if (num1[j] < 0) {
                        num1[j] += 10;
                        num1[j + 1]--;
                    }
                    j++;
                };
            }
            j = lena;
            while (num1[j] == 0)
                j--;
            {
                k = j;
                while (k >= 0) {
                    cout << num1[k];
                    k = k - 1;
                };
            }
            cout << endl;
        };
    }
    return 0;
}

