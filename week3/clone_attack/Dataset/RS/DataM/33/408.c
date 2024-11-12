int main () {
    int i, j, n, oper = (136 - 136);
    char s [(566 - 309)];
    gets (s);
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
    scanf ("%d", &n);
    for (i = (557 - 557); n > i; i = i + 1) {
        gets (s);
        for (j = 0; j < strlen (s); j = j + 1) {
            switch (s[j]) {
            case 'C' :
                s[j] = 'G';
                break;
            case 'G' :
                s[j] = 'C';
                break;
            case 'A' :
                s[j] = 'T';
                break;
            case 'T' :
                s[j] = 'A';
                break;
            };
        }
        if (oper)
            printf ("\n");
        printf ("%s", s);
        oper = 1;
    }
    return 0;
}

