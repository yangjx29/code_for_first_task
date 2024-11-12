int main () {
    char s [120];
    char w [120];
    gets (s);
    for (int j = 0;
    strlen (s) > j; j = j + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((strlen (s) - 1) == j)) {
            w[j] = s[j] + s[j + 1];
        }
        else {
            w[j] = s[j] + s[0];
        };
    }
    {
        int i = 0;
        while (i < strlen (s)) {
            printf ("%c", w[i]);
            i = i + 1;
        };
    }
    return 0;
}

