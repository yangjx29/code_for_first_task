int main () {
    char a [102] [102];
    int O8WBNVXd, HyBQOlMhs, i, j, JDeRBrA1xZf, MMa7QvB = 0;
    int b [200] [200], AnsG5Ja0D [200] [200];
    cin >> O8WBNVXd;
    {
        i = 1;
        while (O8WBNVXd >= i) {
            {
                j = 1;
                while (O8WBNVXd >= j) {
                    cin >> a[i][j];
                    j++;
                }
            }
            i++;
        }
    }
    cin >> HyBQOlMhs;
    {
        i = 1;
        while (i <= O8WBNVXd) {
            j = 1;
            while (O8WBNVXd >= j) {
                if (!('.' != a[i][j]))
                    b[i + 1][j + 1] = 0;
                if (!('#' != a[i][j]))
                    b[i + 1][j + 1] = -10000;
                if (!('@' != a[i][j]))
                    b[i + 1][j + 1] = 1;
                j++;
            }
            i++;
        }
    }
    {
        i = 2;
        while (O8WBNVXd +1 >= i) {
            {
                j = 2;
                while (j <= O8WBNVXd +1) {
                    AnsG5Ja0D[i][j] = 0;
                    j++;
                }
            }
            i++;
        }
    }
    {
        JDeRBrA1xZf = 0;
        while (HyBQOlMhs -1 > JDeRBrA1xZf) {
            {
                i = 2;
                while (i <= O8WBNVXd +1) {
                    {
                        j = 2;
                        while (j <= O8WBNVXd +1) {
                            if (b[i][j] > 0) {
                                AnsG5Ja0D[i][j] = 1;
                            }
                            j++;
                        }
                    }
                    i++;
                }
            }
            {
                i = 2;
                while (i <= O8WBNVXd +1) {
                    {
                        j = 2;
                        while (j <= O8WBNVXd +1) {
                            if (AnsG5Ja0D[i][j] == 1) {
                                b[i][j + 1]++;
                                b[i][j - 1]++;
                                b[i + 1][j]++;
                                b[i - 1][j]++;
                            }
                            j++;
                        }
                    }
                    i++;
                }
            }
            {
                i = 2;
                while (i <= O8WBNVXd +1) {
                    {
                        j = 2;
                        while (j <= O8WBNVXd +1) {
                            AnsG5Ja0D[i][j] = 0;
                            j++;
                        }
                    }
                    i++;
                }
            }
            JDeRBrA1xZf++;
        }
    }
    {
        i = 2;
        while (i <= O8WBNVXd +1) {
            {
                j = 2;
                while (j <= O8WBNVXd +1) {
                    if (b[i][j] > 0)
                        MMa7QvB++;
                    j++;
                }
            }
            i++;
        }
    }
    cout << MMa7QvB;
    return 0;
}

