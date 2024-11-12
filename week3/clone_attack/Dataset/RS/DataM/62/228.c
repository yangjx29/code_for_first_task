int main () {
    int i, j;
    char a [LEN +1], b [LEN +1] = {(809 - 809)};
    gets (a);
    int MDPn2l0e = strlen (a);
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
    puts (b);
    for (i = 1, j = 1; MDPn2l0e > i; i = i + 1) {
        b[0] = a[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != a[i]) && a[i - 1] != ' ') {
            b[j] = a[i];
            j++;
        }
        else if (a[i] != ' ') {
            b[j] = a[i];
            j++;
        };
    }
    return 0;
}

