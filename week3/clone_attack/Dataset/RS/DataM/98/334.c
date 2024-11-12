int main () {
    struct   {
        char wcZlQDAe7vF [(672 - 631)];
        int lw;
    }
    a [(10181 - 181)];
    int lpr = 0;
    int n, QRoNqLdJO, i, AwcFVlv293B, ImwXUE = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s", a[i].wcZlQDAe7vF);
            a[i].lw = strlen (a[i].wcZlQDAe7vF);
            i = i + 1;
        };
    }
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
    printf ("%s", a[0].wcZlQDAe7vF);
    lpr = a[0].lw;
    for (i = 1; i < n; i++) {
        lpr += a[i].lw;
        if (lpr < 80) {
            printf (" %s", a[i].wcZlQDAe7vF);
            lpr = lpr + 1;
        }
        else {
            printf ("%s", a[i].wcZlQDAe7vF);
            lpr = a[i].lw;
        };
    }
    return 0;
}

