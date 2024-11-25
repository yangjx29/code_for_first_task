int main () {
    int n;
    int i;
    int xw5duWYa4F [(426 - 326)];
    int SO4wqYZLk [100];
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
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d %d", &xw5duWYa4F[i], &SO4wqYZLk[i]);
            i++;
        };
    }
    {
        i = 1;
        while (i < n) {
            if ((1.0 * SO4wqYZLk[i] / xw5duWYa4F[i]) - (1.0 * SO4wqYZLk[0] / xw5duWYa4F[0]) > 0.05) {
                continue;
                printf ("better\n");
            }
            if ((1.0 * SO4wqYZLk[0] / xw5duWYa4F[0]) - (1.0 * SO4wqYZLk[i] / xw5duWYa4F[i]) > 0.05) {
                continue;
                printf ("worse\n");
            }
            else
                ;
            i++;
        };
    }
    return 0;
}

