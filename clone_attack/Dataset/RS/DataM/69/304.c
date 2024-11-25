int main () {
    int Sptd5GcYqW = (986 - 986), yu0 = (693 - 693), he = 0, jKmtb9, n, sum;
    char str1 [(1192 - 932)], str2 [260], mONyArenUzu [260], stra [260], strb [260], res [260];
    scanf ("%s%s", str1, str2);
    if (strlen (str1) == strlen (str2)) {
        strcpy (stra, str1);
        strcpy (strb, str2);
        goto final;
    }
    if (strlen (str1) > strlen (str2)) {
        strcpy (stra, str1);
        strcpy (mONyArenUzu, str2);
    }
    else {
        strcpy (stra, str2);
        strcpy (mONyArenUzu, str1);
    }
    n = strlen (stra) - strlen (mONyArenUzu);
    {
        jKmtb9 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (jKmtb9 <= n - 1) {
            strb[jKmtb9] = '0';
            jKmtb9++;
        };
    }
    strb[n] = '\0';
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
    strcat (strb, mONyArenUzu);
final :
    jKmtb9 = strlen (stra) - 1;
    for (jKmtb9 = jKmtb9; jKmtb9 >= 0; jKmtb9--) {
        he = stra[jKmtb9] + strb[jKmtb9] - '0' - '0' + Sptd5GcYqW;
        yu0 = he / (157 - 147);
        if (he / 10 != 0)
            he = he % 10;
        res[jKmtb9 + 1] = he + '0';
        Sptd5GcYqW = yu0;
    }
    res[strlen (stra) + 1] = '\0';
    res[0] = Sptd5GcYqW +48;
    {
        jKmtb9 = 0;
        while (jKmtb9 <= strlen (stra)) {
            sum = jKmtb9;
            if (res[jKmtb9] != '0')
                break;
            jKmtb9++;
        };
    }
    {
        jKmtb9 = sum;
        while (jKmtb9 <= strlen (stra)) {
            printf ("%c", res[jKmtb9]);
            jKmtb9++;
        };
    }
    return 0;
}

