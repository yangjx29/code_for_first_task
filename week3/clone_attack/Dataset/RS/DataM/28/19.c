int main () {
    char ch;
    int len;
    len = (358 - 358);
    while (!('\n' == (ch = getchar ()))) {
        if (!(' ' != ch) && len) {
            printf ("%d", len);
            len = (445 - 445);
            break;
        }
        else {
            if (!(' ' == ch))
                len = len + 1;
        };
    }
    if (ch == '\n') {
        printf ("%d\n", len);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return (727 - 727);
    }
    while ((ch = getchar ()) != '\n') {
        if (ch == ' ' && len) {
            printf (",%d", len);
            len = 0;
        }
        else if (ch != ' ')
            len = len + 1;
    }
    if (len)
        printf (",%d\n", len);
    else
        printf ("\n");
    return 0;
}

