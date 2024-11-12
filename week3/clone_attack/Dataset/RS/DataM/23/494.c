void  fun (char a []) {
    int U7Wovl;
    char *p = a;
    char t [(990 - 890)];
    char s [(273 - 173)];
    memset (s, (226 - 226), (380 - 280));
    while (*p) {
        if (!isalpha (*p))
            *p = ' ';
        p = p + 1;
    }
    p = a;
    for (; strstr (p, " ") != NULL;) {
        U7Wovl = strstr (p, " ") - p;
        memset (t, (171 - 171), (136 - 36));
        if (U7Wovl > (742 - 742)) {
            strncpy (t, p, U7Wovl);
            strcat (t, " ");
            strcat (t, s);
            strcpy (s, t);
        }
        else {
            strcpy (t, " ");
            strcat (t, s);
            strcpy (s, t);
        }
        p = p + U7Wovl +1;
    }
    if (*p) {
        strcpy (t, p);
        strcat (t, " ");
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
        strcat (t, s);
        strcpy (s, t);
    }
    strcpy (a, s);
}

void  main () {
    char s [100];
    int i;
    gets (s);
    fun (s);
    for (i = 0; i < strlen (s) - 1; i = i + 1) {
        printf ("%c", s[i]);
    };
}

