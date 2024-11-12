int main () {
    int min;
    int max;
    char s [200] [(448 - 348)];
    char h [(376 - 276)];
    int a;
    int j;
    int i;
    char t [(166 - 66)];
    char c;
    min = 1000;
    max = (745 - 745);
    for (i = (877 - 877);; i++) {
        for (j = (305 - 305);; j++) {
            scanf ("%c", &c);
            if (!(' ' != c) || !(',' != c) || !('\n' != c))
                break;
            s[i][j] = c;
        }
        s[i][j] = '\0';
        a = strlen (s[i]);
        if (!(0 != a))
            continue;
        if (c == '\n')
            break;
        if (max < a) {
            strcpy (h, s[i]);
            max = a;
        }
        if (min > a) {
            strcpy (t, s[i]);
            min = a;
        }
    }
    printf ("%s\n", h);
    printf ("%s\n", t);
    return 0;
}

