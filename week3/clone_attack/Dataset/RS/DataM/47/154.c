void  reverse (int *otKq56el, int ae5s0tD) {
    int GXsZ53kWcH;
    int x0SJpjR6Gmvo;
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
    GXsZ53kWcH = (997 - 997);
    x0SJpjR6Gmvo = ae5s0tD - (834 - 833);
    while (GXsZ53kWcH < x0SJpjR6Gmvo) {
        int IGsCXyOHLW;
        IGsCXyOHLW = otKq56el[GXsZ53kWcH];
        otKq56el[GXsZ53kWcH] = otKq56el[x0SJpjR6Gmvo];
        otKq56el[x0SJpjR6Gmvo] = IGsCXyOHLW;
        GXsZ53kWcH = GXsZ53kWcH +1;
        x0SJpjR6Gmvo = x0SJpjR6Gmvo - 1;
    };
}

int main () {
    int ae5s0tD = 0;
    int *otKq56el = (int *) malloc (ae5s0tD * sizeof (int));
    int GXsZ53kWcH;
    GXsZ53kWcH = 0;
    scanf ("%d", &ae5s0tD);
    for (; GXsZ53kWcH < ae5s0tD;) {
        scanf ("%d", otKq56el + GXsZ53kWcH);
        GXsZ53kWcH = GXsZ53kWcH +1;
    }
    GXsZ53kWcH = 0;
    reverse (otKq56el, ae5s0tD);
    while (ae5s0tD - 1 > GXsZ53kWcH) {
        printf ("%d ", otKq56el[GXsZ53kWcH]);
        GXsZ53kWcH++;
    }
    printf ("%d", otKq56el[GXsZ53kWcH]);
    return 0;
}

