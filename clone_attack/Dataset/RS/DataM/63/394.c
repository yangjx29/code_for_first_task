int main () {
    int i, vkOxQLa, k;
    int c [101] [101] = {0};
    int b [101] [101] = {0};
    int x1;
    int BWdzkeficNs5;
    int y1;
    int y2;
    int a [(225 - 124)] [101] = {0};
    scanf ("%d %d", &x1, &y1);
    {
        i = 0;
        while (i < x1) {
            for (vkOxQLa = 0; vkOxQLa < y1; vkOxQLa++) {
                scanf ("%d", &a[i][vkOxQLa]);
            }
            i++;
        };
    }
    scanf ("%d %d", &BWdzkeficNs5, &y2);
    for (i = 0; i < BWdzkeficNs5; i++) {
        for (vkOxQLa = 0; y2 > vkOxQLa; vkOxQLa++) {
            scanf ("%d", &b[i][vkOxQLa]);
        };
    }
    for (i = 0; i < x1; i++) {
        {
            vkOxQLa = 0;
            while (vkOxQLa < (y2 - 1)) {
                for (k = 0; k < BWdzkeficNs5; k++) {
                    c[i][vkOxQLa] = c[i][vkOxQLa] + a[i][k] * b[k][vkOxQLa];
                }
                printf ("%d ", c[i][vkOxQLa]);
                vkOxQLa++;
            };
        }
        for (k = 0; k < BWdzkeficNs5; k++) {
            c[i][y2 - 1] += a[i][k] * b[k][y2 - 1];
        }
        printf ("%d\n", c[i][y2 - 1]);
    }
    return 0;
}

