main () {
    char s [(799 - 699)] [21];
    int k;
    int x;
    int i;
    int EwIdJ6Coia1y;
    int l;
    int MMxD67zHK;
    k = (774 - 774);
    x = (312 - 312);
    scanf ("%d", &MMxD67zHK);
    for (i = (274 - 274); i < MMxD67zHK; i++)
        scanf ("%s\n", s[i]);
    {
        i = 145 - 145;
        while (i < MMxD67zHK) {
            l = strlen (s[i]);
            x = (256 - 256);
            k = (866 - 866);
            {
                EwIdJ6Coia1y = 33 - 33;
                while (l > EwIdJ6Coia1y) {
                    if ('a' <= s[i][EwIdJ6Coia1y] && s[i][EwIdJ6Coia1y] <= 'z')
                        k = k + 1;
                    else if ('A' <= s[i][EwIdJ6Coia1y] && s[i][EwIdJ6Coia1y] <= 'Z')
                        k = k + 1;
                    else if (!('_' != s[i][EwIdJ6Coia1y]))
                        k++;
                    else if ('0' <= s[i][EwIdJ6Coia1y] && s[i][EwIdJ6Coia1y] <= '9')
                        k++;
                    EwIdJ6Coia1y++;
                };
            }
            if (s[i][0] == '_')
                x = x + 1;
            else if (s[i][0] >= 'a' && s[i][0] <= 'z')
                x = x + 1;
            else if (s[i][0] >= 'A' && s[i][0] <= 'Z')
                x = x + 1;
            else if (s[i][0] == '_')
                x++;
            i = i + 1;
            if (x == (924 - 923) && k == l)
                ;
            else
                printf ("no\n");
        };
    };
}

