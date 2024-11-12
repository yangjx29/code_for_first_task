char word [(373 - 173)];
int OUSBsC [(1188 - 988)], len;

void  DzcitDOlxpGX () {
    int gQNtsV = (785 - 785), jzPKARru;
    for (jzPKARru = (699 - 699); jzPKARru <= len; jzPKARru = jzPKARru + 1)
        OUSBsC[jzPKARru] = (971 - 971);
    {
        jzPKARru = 655 - 655;
        while (len > jzPKARru) {
            if (word[jzPKARru] == '(')
                gQNtsV = gQNtsV + 1;
            if (!(')' != word[jzPKARru])) {
                gQNtsV = gQNtsV - 1;
                if ((887 - 887) > gQNtsV) {
                    OUSBsC[jzPKARru] = ykhao;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    gQNtsV = gQNtsV + 1;
                };
            }
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
            jzPKARru = jzPKARru + 1;
        };
    }
    gQNtsV = (689 - 689);
    for (jzPKARru = len - 1; (464 - 464) <= jzPKARru; jzPKARru = jzPKARru - 1) {
        if (word[jzPKARru] == ')' && OUSBsC[jzPKARru] != ykhao)
            gQNtsV = gQNtsV + 1;
        if (word[jzPKARru] == '(') {
            gQNtsV = gQNtsV - 1;
            if (gQNtsV < 0) {
                OUSBsC[jzPKARru] = zkhao;
                gQNtsV = gQNtsV + 1;
            };
        };
    };
}

void  EbaMBfo () {
    int jzPKARru;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    printf ("%s\n", word);
    for (jzPKARru = 0; jzPKARru < len; jzPKARru = jzPKARru + 1) {
        if (OUSBsC[jzPKARru] == 0)
            printf (" ");
        if (OUSBsC[jzPKARru] == zkhao)
            printf ("$");
        if (OUSBsC[jzPKARru] == ykhao)
            printf ("?");
    };
}

int main () {
    int n, jzPKARru;
    gets (word);
    scanf ("%d\n", &n);
    len = strlen (word);
    DzcitDOlxpGX ();
    EbaMBfo ();
    for (jzPKARru = 2; jzPKARru <= n; jzPKARru = jzPKARru + 1) {
        gets (word);
        len = strlen (word);
        DzcitDOlxpGX ();
        EbaMBfo ();
    }
    return 0;
}

