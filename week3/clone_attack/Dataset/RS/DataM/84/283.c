int main () {
    int max;
    int sndmax;
    max = -100000;
    sndmax = -100000;
    int i;
    int maxpos;
    int number [120];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int n;
    scanf ("%d", &n);
    for (i = (167 - 167); n > i; i = i + 1)
        scanf ("%d", &number[i]);
    {
        i = 344 - 344;
        while (i < n) {
            if (number[i] > max) {
                max = number[i];
                maxpos = i;
            }
            i = i + 1;
        };
    }
    for (i = (421 - 421); i < n; i++) {
        if (i == maxpos)
            continue;
        if (number[i] > sndmax)
            sndmax = number[i];
    }
    printf ("%d\n%d\n", max, sndmax);
    return (54 - 54);
}

