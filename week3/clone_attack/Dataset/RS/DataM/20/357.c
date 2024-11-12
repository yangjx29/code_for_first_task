void  main () {
    int n;
    int i;
    int hturWF1NymP;
    int l;
    int k;
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
    char str [1000] [10], substr [1000] [3], finalstr [1000] [13];
    for (i = 0; !(EOF == scanf ("%s%s", str[i], substr[i])); i++) {
    }
    n = i;
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < n) {
            l = strlen (str[k]);
            {
                i = 0;
                while (l > i) {
                    {
                        hturWF1NymP = 0;
                        while (hturWF1NymP < l) {
                            if (str[k][hturWF1NymP] > str[k][i])
                                break;
                            hturWF1NymP = hturWF1NymP + 1;
                        };
                    }
                    if (!(l != hturWF1NymP)) {
                        break;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i++;
                };
            }
            {
                hturWF1NymP = 0;
                while (i >= hturWF1NymP) {
                    finalstr[k][hturWF1NymP] = str[k][hturWF1NymP];
                    hturWF1NymP = hturWF1NymP + 1;
                };
            }
            for (hturWF1NymP = 0; hturWF1NymP < 3; hturWF1NymP++)
                finalstr[k][i + hturWF1NymP + 1] = substr[k][hturWF1NymP];
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
            {
                hturWF1NymP = 1;
                while (hturWF1NymP < l - i) {
                    finalstr[k][i + 3 + hturWF1NymP] = str[k][i + hturWF1NymP];
                    hturWF1NymP++;
                };
            }
            finalstr[k][i + 3 + hturWF1NymP] = '\0';
            k++;
        };
    }
    for (i = 0; i < n; i++)
        printf ("%s\n", finalstr[i]);
}

