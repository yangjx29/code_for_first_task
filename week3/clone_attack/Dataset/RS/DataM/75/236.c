int main () {
    char str1 [100000];
    char str2 [100000];
    char strx [100000];
    char stry [100000];
    int OFIi4KjpdJ;
    int max;
    int m;
    int n;
    int count [(100196 - 196)] = {(633 - 633)};
    int a [(100753 - 753)];
    int i;
    int j;
    int len1;
    int len2;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    OFIi4KjpdJ = (102 - 102);
    max = (405 - 405);
    m = 0;
    n = 0;
    cin.getline (str1, 100000);
    cin.getline (str2, 100000);
    len1 = strlen (str1);
    {
        i = 0;
        while (len1 > i) {
            while ('0' <= str1[i] && '9' >= str1[i] && len1 > i) {
                strx[m] = str1[i];
                m = m + 1;
                i = i + 1;
            }
            i = i + 1;
            strx[m] = '\0';
            m = 0;
            a[OFIi4KjpdJ] = atoi (strx);
            memset (strx, 0, 100000);
            OFIi4KjpdJ = OFIi4KjpdJ +1;
        };
    }
    len2 = strlen (str2);
    {
        i = 0;
        while (len2 > i) {
            while ('0' <= str2[i] && '9' >= str2[i] && len2 > i) {
                stry[n] = str2[i];
                n++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + 1;
            }
            i++;
            stry[n] = '\0';
            a[OFIi4KjpdJ] = atoi (stry);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            memset (stry, 0, 100000);
            OFIi4KjpdJ++;
            n = 0;
        };
    }
    {
        i = 0;
        while ((1731 - 731) > i) {
            {
                j = 0;
                while (OFIi4KjpdJ / 2 > j) {
                    if (a[j] <= i && i < a[j + OFIi4KjpdJ / 2])
                        count[i]++;
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 1000) {
            if (count[i] > max)
                max = count[i];
            i++;
        };
    }
    cout << OFIi4KjpdJ / 2 << " " << max;
    return 0;
}

