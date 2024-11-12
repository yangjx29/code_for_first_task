int main () {
    int i, k = (728 - 728);
    char s [(224 - 124)], w [100];
    scanf ("%s%s", s, w);
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
    for (i = 0; w[i]; i = i + 1)
        if (w[i] == s[k]) {
            k = k + 1;
            if (k == strlen (s) - 1)
                break;
        }
        else
            k = 0;
    printf ("%d\n", i - strlen (s) + (78 - 76));
}

