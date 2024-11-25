void  toLowerCase (char *np9TRodyg4) {
    for (; *np9TRodyg4;) {
        if (isupper (*np9TRodyg4))
            *np9TRodyg4 = 'a' + *np9TRodyg4 - 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        np9TRodyg4++;
    };
}

int main () {
    char WCMg08lSU [(626 - 498)];
    char t4NnDp6QEB3 [128];
    gets (WCMg08lSU);
    toLowerCase (WCMg08lSU);
    gets (t4NnDp6QEB3);
    toLowerCase (t4NnDp6QEB3);
    int res;
    res = strcmp (WCMg08lSU, t4NnDp6QEB3);
    if (0 > res)
        printf ("<");
    else {
        if (res == 0)
            printf ("=");
        else
            ;
    };
}

