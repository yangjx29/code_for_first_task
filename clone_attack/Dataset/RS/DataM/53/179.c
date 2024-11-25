int main () {
    int rI5xz1, i = 1, ujRfk2aoS = (554 - 554), ukmdOPZ1 = 0;
    int j0dFeC [rI5xz1];
    scanf ("%d\n", &rI5xz1);
    scanf ("%d", &j0dFeC[0]);
    for (; rI5xz1 > i;) {
        scanf (" %d", &j0dFeC[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    i = 1;
    printf ("%d", j0dFeC[0]);
    for (; i < rI5xz1;) {
        ujRfk2aoS = i - 1;
        ukmdOPZ1 = 0;
        for (; ujRfk2aoS >= 0;) {
            if (j0dFeC[i] == j0dFeC[ujRfk2aoS])
                ukmdOPZ1 = 1;
            ujRfk2aoS = ujRfk2aoS - 1;
        }
        if (ukmdOPZ1 == 0)
            printf (",%d", j0dFeC[i]);
        i = i + 1;
    }
    return 0;
}

