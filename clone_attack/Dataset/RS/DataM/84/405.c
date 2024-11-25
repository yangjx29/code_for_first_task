int main () {
    int a, b, c, i;
    int ztZNGk621Ya [100];
    scanf ("%d", &a);
    {
        i = 819 - 819;
        while (a > i) {
            scanf ("%d", &(ztZNGk621Ya[i]));
            i = i + 1;
        };
    }
    {
        i = 0;
        while (a > i) {
            if (i == 0) {
                b = ztZNGk621Ya[i];
                c = 0;
            }
            else {
                if (ztZNGk621Ya[i] > b) {
                    b = ztZNGk621Ya[i];
                    c = 0;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d\n", b);
    {
        i = 0;
        while (i < a) {
            if (ztZNGk621Ya[i] < b && ztZNGk621Ya[i] > c) {
                c = ztZNGk621Ya[i];
            }
            i = i + 1;
        };
    }
    printf ("%d\n", c);
    return 0;
}

