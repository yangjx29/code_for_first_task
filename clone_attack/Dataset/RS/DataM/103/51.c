int main () {
    int jqydewYLACji;
    jqydewYLACji = (947 - 946);
    int i, DQHElfTgs, rljotWwF36km;
    char s [1001];
    gets (s);
    int l;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    l = strlen (s);
    int n [27];
    getchar ();
    getchar ();
    for (i = 0; l > i; i++) {
        if ('z' >= s[i] && 'a' <= s[i])
            s[i] = s[i] - 'a' + 'A';
    }
    for (i = 1; i < l; i++) {
        if (s[i] == s[i - 1]) {
            jqydewYLACji++;
        }
        else {
            printf ("(%c,%d)", s[i - 1], jqydewYLACji);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            jqydewYLACji = 1;
        };
    }
    printf ("(%c,%d)", s[l - 1], jqydewYLACji);
}

