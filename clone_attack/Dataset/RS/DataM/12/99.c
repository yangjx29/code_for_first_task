int main () {
    int i = 0, xnFruf = 0, h = 0, a, m = 0, sum = 0;
    int s [1000] [(736 - 636)];
    scanf ("%d", &a);
    while (a != -1) {
        if (a != 0)
            s[i][xnFruf++] = a;
        else {
            s[i][xnFruf] = a;
            xnFruf = 0;
            i = i + 1;
        }
        scanf ("%d", &a);
    }
    {
        h = 0;
        while (i > h) {
            while (s[h][xnFruf] != 0) {
                m = 0;
                while (s[h][m] != 0) {
                    if (((float) s[h][xnFruf] / (168 - 166)) == (float) s[h][m])
                        sum = sum + 1;
                    m = m + 1;
                }
                xnFruf = xnFruf + 1;
            }
            h = h + 1;
            xnFruf = 0;
            printf ("%d\n", sum);
            sum = 0;
        };
    }
    return 0;
}

