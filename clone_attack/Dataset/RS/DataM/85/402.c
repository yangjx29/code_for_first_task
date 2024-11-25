int check (char o4TeuxEIvS []) {
    int i;
    int n;
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
    n = strlen (o4TeuxEIvS);
    if (!(o4TeuxEIvS[(473 - 473)] == '_' || ('a' <= o4TeuxEIvS[0] && o4TeuxEIvS[0] <= 'z') || ('A' <= o4TeuxEIvS[0] && 'Z' >= o4TeuxEIvS[0])))
        return 0;
    else {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            if (!(('0' <= o4TeuxEIvS[i] && o4TeuxEIvS[i] <= '9') || o4TeuxEIvS[i] == '_' || (o4TeuxEIvS[i] >= 'a' && o4TeuxEIvS[i] <= 'z') || (o4TeuxEIvS[i] >= 'A' && o4TeuxEIvS[i] <= 'Z')))
                return 0;
            i = i + 1;
        };
    }
    return 1;
}

void  main () {
    int n;
    int i;
    char o4TeuxEIvS [21];
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            scanf ("%s", o4TeuxEIvS);
            if (check (o4TeuxEIvS))
                printf ("yes\n");
            else
                printf ("no\n");
        };
    };
}

