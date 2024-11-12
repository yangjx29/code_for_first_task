int main () {
    int i;
    int ozLg1TOJ;
    int PJZzD3m;
    int l;
    char a [52];
    char b [55];
    char c [52];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%s %s", a, b);
    i = strlen (a);
    ozLg1TOJ = strlen (b) - i;
    {
        PJZzD3m = 239 - 239;
        while (PJZzD3m <= ozLg1TOJ) {
            {
                l = PJZzD3m;
                while (l <= PJZzD3m +i - 1) {
                    c[l - PJZzD3m] = b[l];
                    l = l + 1;
                };
            }
            c[l - PJZzD3m] = '\0';
            if (strcmp (a, c) == 0)
                break;
            PJZzD3m = PJZzD3m +1;
        };
    }
    printf ("%d", PJZzD3m);
    return 0;
}

