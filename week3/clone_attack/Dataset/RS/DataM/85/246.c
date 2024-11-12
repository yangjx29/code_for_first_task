int main (int aYTdIlz, char *fHVo9wuSr []) {
    int n;
    int pLY4tos2;
    int lHhi7NzBX;
    int RYAhJl;
    int fgLaS0U;
    char s [(139 - 119)];
    scanf ("%d", &n);
    for (pLY4tos2 = (634 - 634); pLY4tos2 < n; pLY4tos2 = pLY4tos2 + 1) {
        RYAhJl = (506 - 506);
        scanf ("%s", s);
        fgLaS0U = strlen (s);
        if (s[(890 - 890)] == '_' || 'A' <= s[(519 - 519)] && s[(736 - 736)] <= 'Z' || 'a' <= s[(403 - 403)] && s[0] <= 'z')
            RYAhJl = RYAhJl +1;
        {
            lHhi7NzBX = 1;
            while (!('\0' == s[lHhi7NzBX])) {
                if ('0' <= s[lHhi7NzBX] && s[lHhi7NzBX] <= '9' || s[lHhi7NzBX] == '_' || s[lHhi7NzBX] >= 'A' && s[lHhi7NzBX] <= 'Z' || s[lHhi7NzBX] >= 'a' && s[lHhi7NzBX] <= 'z')
                    RYAhJl++;
                lHhi7NzBX = lHhi7NzBX + 1;
            };
        }
        if (RYAhJl == fgLaS0U)
            printf ("yes\n");
        else
            printf ("no\n");
    }
    return 0;
}

