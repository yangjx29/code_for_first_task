int main () {
    char a1 [81];
    char zlXE5wLKFVy [81];
    int MyStrCmp (char *pStr1, char *pStr2);
    int t;
    gets (a1);
    gets (zlXE5wLKFVy);
    t = MyStrCmp (a1, zlXE5wLKFVy);
    if (!(1 != t))
        printf (">");
    if (!(0 != t))
        printf ("=");
    if (!(-1 != t))
        printf ("<");
    printf ("\n");
    return 0;
}

int MyStrCmp (char *pStr1, char *pStr2) {
    char u4eyjhpvBNal [81];
    char b2 [81];
    int t;
    int i;
    t = 0;
    for (i = 0; !('\0' == pStr1[i]); i = i + 1)
        if ('A' <= pStr1[i] && pStr1[i] <= 'Z')
            *(pStr1 + i) = *(pStr1 + i) + 32;
    for (i = 0; !('\0' == pStr2[i]); i++)
        if ('A' <= pStr2[i] && pStr2[i] <= 'Z')
            *(pStr2 + i) = *(pStr2 + i) + 32;
    if (strlen (pStr1) > strlen (pStr2))
        t = 1;
    if (strlen (pStr1) < strlen (pStr2))
        t = -1;
    if (strlen (pStr1) == strlen (pStr2)) {
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
        for (i = 0; i < strlen (pStr1); i++) {
            if (*(pStr1 + i) > *(pStr2 + i)) {
                t = 1;
                break;
            }
            if (*(pStr1 + i) < *(pStr2 + i)) {
                t = -1;
                break;
            }
            if (*(pStr1 + i) == *(pStr2 + i))
                continue;
        };
    }
    return (t);
}

