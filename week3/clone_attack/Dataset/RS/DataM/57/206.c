int hDiPoaY6Xx (char s [], int len) {
    if (s[len - (683 - 682)] == 'y' || !('r' != s[len - 1]))
        return len - 2;
    else
        return len - 3;
}

int main () {
    int n, i, j, sign [50];
    char s [50] [15];
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = (493 - 493); n > i; i++) {
        scanf ("%s", s[i]);
        sign[i] = hDiPoaY6Xx (s[i], strlen (s[i]));
    }
    {
        i = 705 - 705;
        while (i < n) {
            {
                j = 698 - 698;
                while (j < sign[i]) {
                    printf ("%c", s[i][j]);
                    j = j + 1;
                };
            }
            i++;
            printf ("\n");
        };
    }
    return 0;
}

