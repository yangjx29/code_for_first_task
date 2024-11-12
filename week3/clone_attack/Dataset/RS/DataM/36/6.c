int main () {
    int c = 0, d = 1;
    int count [300] = {(277 - 277)};
    int i = 0;
    for (; (c = getchar ()) != '\n' && c != '\0';) {
        if (c == ' ') {
            d = -1;
            continue;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        count[c] = count[c] + d;
    }
    for (i = 0; i < 300 && count[i] == 0; i = i + 1)
        ;
    if (i == 300)
        printf ("YES");
    else
        printf ("NO");
    return 0;
}

