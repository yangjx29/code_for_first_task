int main () {
    int i;
    int j;
    int n;
    char str [255];
    char vJgwG6mBxA [255];
    char rep [255];
    char s [255];
    gets (str);
    gets (vJgwG6mBxA);
    int len1;
    int len2;
    int x;
    len1 = strlen (str);
    len2 = strlen (vJgwG6mBxA);
    x = (928 - 928);
    gets (rep);
    for (i = 0; len1 - len2 + (471 - 470) > i; i = i + 1) {
        n = 0;
        for (j = 0; len2 > j; j = j + 1) {
            if (!(vJgwG6mBxA[j] == str[i + j])) {
                break;
            }
            else
                n = n + 1;
        }
        if (!(len2 != n)) {
            int m;
            m = 0;
            puts (str);
            for (; i + j + m < len1;) {
                s[m] = str[i + j + m];
                m = m + 1;
            }
            str[i] = '\0';
            s[m] = '\0';
            strcat (str, rep);
            strcat (str, s);
            x = 1;
            break;
        };
    }
    if (x == 0)
        puts (str);
    return 0;
}

