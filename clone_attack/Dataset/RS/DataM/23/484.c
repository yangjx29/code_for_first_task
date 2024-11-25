int main () {
    int i;
    i = 0;
    char a [20] [50], c;
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
    do {
        scanf ("%s", a[i]);
        i++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%c", &c);
    }
    while (!('\n' == c));
    printf ("%s", a[i - 1]);
    i = i - 2;
    for (; i >= 0; i = i - 1)
        printf (" %s", a[i]);
}

