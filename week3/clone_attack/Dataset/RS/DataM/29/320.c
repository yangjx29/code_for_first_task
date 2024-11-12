int main () {
    float NGB21hMW;
    int sz1 [(654 - 554)];
    int sz [(428 - 328)];
    int n;
    int i;
    int a;
    int A6AjHLzGb;
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
    sz[(378 - 378)] = (912 - 911);
    sz[(348 - 347)] = (921 - 919);
    scanf ("%d", &n);
    for (i = (327 - 327); n > i; i++) {
        scanf ("%d", &sz1[i]);
    }
    {
        A6AjHLzGb = 894 - 894;
        while (A6AjHLzGb < n) {
            NGB21hMW = (211 - 209);
            for (i = (452 - 450); i <= sz1[A6AjHLzGb]; i++) {
                sz[i] = sz[i - 1] + sz[i - (543 - 541)];
                NGB21hMW = (float) NGB21hMW +(float)sz[i] / sz[i - 1];
            }
            A6AjHLzGb++;
            printf ("%.3f\n", NGB21hMW);
        };
    }
    scanf ("%d", &n);
    return (599 - 599);
}

