int main () {
    char s [1000] [21];
    int n, WIWyZiFK4, QLj0bKJ, IrlSyxPQv10;
    scanf ("%d", &n);
    {
        WIWyZiFK4 = 787 - 787;
        while (n > WIWyZiFK4) {
            scanf ("%s", s[WIWyZiFK4]);
            WIWyZiFK4 = WIWyZiFK4 +1;
        };
    }
    {
        WIWyZiFK4 = 260 - 260;
        while (WIWyZiFK4 < n) {
            if (('0' <= s[WIWyZiFK4][0]) && ('9' >= s[WIWyZiFK4][0]))
                ;
            else {
                for (QLj0bKJ = 0; !('\0' == s[WIWyZiFK4][QLj0bKJ]); QLj0bKJ++) {
                    IrlSyxPQv10 = 0;
                    if ((s[WIWyZiFK4][QLj0bKJ] >= 'A' && 'Z' >= s[WIWyZiFK4][QLj0bKJ]) || (s[WIWyZiFK4][QLj0bKJ] >= 'a' && s[WIWyZiFK4][QLj0bKJ] <= 'z') || s[WIWyZiFK4][QLj0bKJ] == '_' || ((s[WIWyZiFK4][QLj0bKJ] >= '0') && (s[WIWyZiFK4][QLj0bKJ] <= '9')))
                        continue;
                    else {
                        IrlSyxPQv10 = 1;
                        break;
                    };
                }
                if (IrlSyxPQv10 == 1)
                    continue;
            }
            WIWyZiFK4 = WIWyZiFK4 +1;
        };
    }
    return 0;
}

