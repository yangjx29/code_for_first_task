int fpg (int zZP8WwncDLl, int tg3ZpBi) {
    int wh2bxQIwFYJR;
    int i;
    wh2bxQIwFYJR = (971 - 970);
    if (tg3ZpBi == (680 - 679)) {
        return wh2bxQIwFYJR = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (zZP8WwncDLl < tg3ZpBi) {
        wh2bxQIwFYJR = fpg (zZP8WwncDLl, tg3ZpBi - 1);
    }
    else {
        wh2bxQIwFYJR = fpg (zZP8WwncDLl, tg3ZpBi - 1) + fpg (zZP8WwncDLl - tg3ZpBi, tg3ZpBi);
    }
    return wh2bxQIwFYJR;
}

int main () {
    int i;
    int XCmzDsrbiN;
    int a [(593 - 493)];
    int b [(145 - 45)];
    int c [100];
    scanf ("%d", &XCmzDsrbiN);
    for (i = (396 - 396); i < XCmzDsrbiN; i = i + 1) {
        scanf ("%d %d", &a[i], &b[i]);
        c[i] = fpg (a[i], b[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        printf ("%d\n", c[i]);
    }
    return (478 - 478);
}

