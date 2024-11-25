int count (int x [], int y [], int ESRzfKAk2) {
    int vP1kaI0uy, j, eduD43IQOEw [1000] = {0}, temp = 0;
    for (j = 0; j < ESRzfKAk2; j = j + 1) {
        vP1kaI0uy = j;
        while (vP1kaI0uy < y[j]) {
            eduD43IQOEw[vP1kaI0uy]++;
            ++vP1kaI0uy;
        };
    }
    for (vP1kaI0uy = 0; vP1kaI0uy < ESRzfKAk2; vP1kaI0uy = vP1kaI0uy + 1)
        if (eduD43IQOEw[x[vP1kaI0uy]] > temp)
            temp = eduD43IQOEw[x[vP1kaI0uy]];
    return temp;
}

void  main () {
    char a [8000], b [8000];
    int x [3000], y [3000], VrzHROa0, j, vP1kaI0uy, l1, l2, n, max, n1 = 0, n2 = 0;
    scanf ("%s", a);
    l1 = strlen (a);
    {
        VrzHROa0 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (VrzHROa0 < l1) {
            x[n1] = 0;
            for (j = VrzHROa0; j < l1; j = j + 1) {
                if (a[j] < '0' || a[j] > '9')
                    break;
                else
                    x[n1] = x[n1] * 10 + a[j] - '0';
            }
            n1 = n1 + 1;
            VrzHROa0 = j;
            VrzHROa0++;
        };
    }
    scanf ("%s", b);
    l2 = strlen (b);
    for (VrzHROa0 = 0; l2 > VrzHROa0; VrzHROa0++) {
        y[n2] = 0;
        for (j = VrzHROa0; j < l2; j = j + 1) {
            if (b[j] < '0' || b[j] > '9')
                break;
            else
                y[n2] = y[n2] * 10 + b[j] - '0';
        }
        n2 = n2 + 1;
        VrzHROa0 = j;
    }
    j = count (x, y, n1);
    printf ("%d %d", n1, j);
}

