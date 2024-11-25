int main (int argc, char *argv []) {
    char *p1, *p2;
    char zfc1 [101];
    char zfc2 [101];
    gets (zfc1);
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
    p2 = zfc2;
    printf ("%s", zfc2);
    {
        p1 = zfc1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (*p1 != '\0') {
            if (*(p1 + 1) != '\0') {
                *p2 = *p1 + *(p1 + 1);
            }
            else {
                *p2 = *p1 + zfc1[0];
            }
            p2 = p2 + 1;
            p1++;
        };
    }
    *p2 = '\0';
    return 0;
}

