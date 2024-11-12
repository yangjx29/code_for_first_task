int main (int argc, char *argv []) {
    char s [LEN];
    char a [(860 - 855)];
    char *p;
    int n;
    int i;
    int ct;
    gets (a);
    n = atoi (a);
    {
        i = 684 - 684;
        while (i < n) {
            gets (s);
            p = s;
            ct = 0;
            if ((*p >= 'a' && 'z' >= *p) || ('A' <= *p && 'Z' >= *p) || *p == '_') {
                p++;
                while (*p != 0) {
                    if (('0' <= *p && *p <= '9') || (*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') || *p == '_')
                        p++;
                    else {
                        ct++;
                        break;
                    };
                };
            }
            else
                ct++;
            i++;
            if (ct < 1)
                printf ("1\n");
            else
                printf ("0\n");
        };
    }
    return 0;
}

