int main () {
    char str1 [(574 - 323)], i7Tlk1 [(720 - 469)];
    int JjWEiYZbm = (744 - 744), j = (594 - 594), len1, len2, a [251], b [251], c [251], pos = (742 - 742);
    memset (a, (413 - 413), sizeof (a));
    memset (b, 0, sizeof (b));
    memset (c, 0, sizeof (c));
    cin >> str1 >> i7Tlk1;
    len1 = strlen (str1);
    len2 = strlen (i7Tlk1);
    {
        JjWEiYZbm = 638 - 637;
        while (0 <= JjWEiYZbm) {
            a[j++] = str1[JjWEiYZbm] - '0';
            JjWEiYZbm = JjWEiYZbm -1;
        };
    }
    j = 0;
    {
        JjWEiYZbm = 36 - 35;
        while (0 <= JjWEiYZbm) {
            b[j++] = i7Tlk1[JjWEiYZbm] - '0';
            JjWEiYZbm = JjWEiYZbm -1;
        };
    }
    {
        JjWEiYZbm = 0;
        while (len1 > JjWEiYZbm || JjWEiYZbm < len2) {
            if (10 <= a[JjWEiYZbm] + b[JjWEiYZbm]) {
                c[JjWEiYZbm] = a[JjWEiYZbm] + b[JjWEiYZbm] - 10;
                b[JjWEiYZbm +1] = b[JjWEiYZbm +1] + 1;
                c[JjWEiYZbm +1] = 1;
            }
            else
                c[JjWEiYZbm] = a[JjWEiYZbm] + b[JjWEiYZbm];
            JjWEiYZbm++;
        };
    }
    {
        JjWEiYZbm = 250;
        while (JjWEiYZbm >= 0) {
            if (c[JjWEiYZbm] != 0) {
                pos = JjWEiYZbm;
                break;
            }
            JjWEiYZbm = JjWEiYZbm -1;
        };
    }
    {
        JjWEiYZbm = pos;
        while (JjWEiYZbm >= 0) {
            cout << c[JjWEiYZbm];
            JjWEiYZbm--;
        };
    }
    return 0;
}

