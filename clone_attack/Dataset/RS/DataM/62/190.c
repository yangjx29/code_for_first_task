int main () {
    char a [200];
    gets (a);
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
    printf ("%c", a[0]);
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < strlen (a)) {
            if (a[i - 1] != ' ' && a[i] != ' ') {
                printf ("%c", a[i]);
                continue;
            }
            else if (a[i - 1] == ' ' && a[i] != ' ')
                printf (" %c", a[i]);
            i = i + 1;
        };
    }
    return 0;
}

