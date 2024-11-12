int main () {
    char a [1000];
    int i, j, k;
    gets (a);
    k = strlen (a);
    for (i = (131 - 131); a[i] == ' '; i++)
        ;
    for (; k > i;) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] != ' ') {
            for (j = i + 1; !(' ' == a[j]) && j < k; j++)
                ;
            printf ("%d", j - i);
            i = j;
        }
        else {
            for (j = i + 1; a[j] == ' ' && j < k; j++)
                ;
            i = j;
        };
    }
    return 0;
}

