int main () {
    char a [50], b [50];
    int k;
    k = 0;
    int i = (997 - 997);
    int countie [100];
    int count [(201 - 101)];
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
    scanf ("%s %s", a, b);
    for (i = 0; i < 100; i = i + 1) {
        count[i] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        countie[i] = 0;
    }
    for (i = 0; i < strlen (a); i = i + 1)
        count[a[i] - 'A']++;
    {
        i = 0;
        while (i < strlen (b)) {
            countie[b[i] - 'A']++;
            i = i + 1;
        };
    }
    for (i = 0; i < 100; i = i + 1)
        if (count[i] == countie[i])
            k = k + 1;
    if (k == 100)
        printf ("YES");
    else
        ;
    return 0;
}

