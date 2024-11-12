char b (char f);

int main () {
    int i, j, n;
    char s [(610 - 354)];
    scanf ("%d", &n);
    for (j = 0; n > j; j++) {
        scanf ("%s", s);
        for (i = 0; s[i]; i = i + 1)
            s[i] = b (s[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%s\n", s);
    }
    return 0;
}

char b (char f) {
    if (!('A' != f))
        return 'T';
    if (f == 'T')
        return 'A';
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
    if (f == 'C')
        return 'G';
    if (f == 'G')
        return 'C';
}

