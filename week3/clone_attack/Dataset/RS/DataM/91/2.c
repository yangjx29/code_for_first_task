int main () {
    char a [200];
    char *p;
    char *head;
    int i;
    gets (a);
    p = a;
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
    head = a;
    i = strlen (a);
    {
        p = a;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (a + i - 1 > p) {
            printf ("%c", *p + *(p + 1));
            p++;
        };
    }
    printf ("%c", *p + *head);
    scanf ("%d", &i);
    return 0;
}

