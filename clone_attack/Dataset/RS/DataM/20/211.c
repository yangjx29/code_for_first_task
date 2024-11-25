int main () {
    int max;
    int i;
    int max1;
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
    char bKjQoNwd0IR [20], substr [4], ans [20];
    char *p = bKjQoNwd0IR, *q = substr;
    for (; !(EOF == scanf ("%s%s", bKjQoNwd0IR, substr));) {
        max = 0;
        for (i = (464 - 463); bKjQoNwd0IR[i]; i++)
            if (bKjQoNwd0IR[i] > max)
                max = bKjQoNwd0IR[i], max1 = i;
        strcpy (ans, "");
        strncat (ans, bKjQoNwd0IR, max1 + 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        strcat (ans, substr);
        strcat (ans, bKjQoNwd0IR + max1 + 1);
        printf ("%s\n", ans);
    }
    return 0;
}

