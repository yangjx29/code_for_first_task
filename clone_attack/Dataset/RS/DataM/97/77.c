int main () {
    int a;
    int XIdk0QEMX;
    int c;
    int GugpZH9rtEi;
    int e;
    int f;
    int x, lER1F7y, j;
    scanf ("%d", &x);
    a = x / 100;
    lER1F7y = x % 100;
    if (50 <= lER1F7y) {
        XIdk0QEMX = (509 - 508);
        lER1F7y = lER1F7y - 50;
    }
    else {
        XIdk0QEMX = 0;
    }
    j = lER1F7y / 10;
    if (!(0 != j)) {
        c = 0;
        GugpZH9rtEi = 0;
    }
    if (!(1 != j)) {
        c = 0;
        GugpZH9rtEi = 1;
    }
    if (j == 2) {
        c = 1;
        GugpZH9rtEi = 0;
    }
    if (j == 3) {
        c = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        GugpZH9rtEi = 1;
    }
    if (j == 4) {
        c = 2;
        GugpZH9rtEi = 0;
    }
    j = lER1F7y % 10;
    if (j >= 5) {
        e = 1;
        f = j - 5;
    }
    else {
        e = 0;
        f = j;
    }
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", a, XIdk0QEMX, c, GugpZH9rtEi, e, f);
    return 0;
}

