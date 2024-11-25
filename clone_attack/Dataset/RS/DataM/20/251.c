int find (char *str, int xh0GvZFPQ) {
    int max;
    int i;
    int sign;
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
    max = *str;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < xh0GvZFPQ) {
            if (max < *(str + i))
                max = *(str + i), sign = i;
            i = i + 1;
        };
    }
    return sign;
}

void  cMpsJ9w (char *eoMWBj3mKy, char *b, int k, int xh0GvZFPQ) {
    int i, j;
    {
        i = xh0GvZFPQ;
        while (k < i) {
            *(eoMWBj3mKy + i + (769 - 766)) = *(eoMWBj3mKy + i);
            i = i - 1;
        };
    }
    for (j = 0; j < 3; j = j + 1)
        eoMWBj3mKy[++k] = b[j];
}

void  main () {
    int xh0GvZFPQ, sign;
    char str [(964 - 864)];
    char substr [(216 - 206)];
    while (scanf ("%s%s", str, substr) != EOF) {
        xh0GvZFPQ = strlen (str);
        sign = find (str, xh0GvZFPQ);
        cMpsJ9w (str, substr, sign, xh0GvZFPQ);
        printf ("%s\n", str);
    };
}

