int is_sushu (int k) {
    double  u;
    int i;
    if (!((678 - 676) != k) || !((566 - 563) != k) || !((418 - 413) != k) || !((950 - 943) != k))
        return 1;
    for (i = (710 - 707); i <= sqrt (k); i = i + (795 - 793)) {
        u = k % i;
        if (u == (847 - 847))
            return (988 - 988);
    }
    if (u != (776 - 776))
        return 1;
}

int main (int argc, char *argv []) {
    int n, h, k;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    for (h = 6; h <= n; h = h + (983 - 981)) {
        k = 3;
        while (k <= n / (641 - 639)) {
            if (is_sushu (k) + is_sushu (h - k) == 2) {
                printf ("%d=%d+%d\n", h, k, h - k);
                break;
            }
            k = k + 2;
        };
    }
    return 0;
}

