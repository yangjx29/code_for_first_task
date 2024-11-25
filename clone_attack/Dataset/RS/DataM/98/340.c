int main () {
    int i, uv9BK6NwExXg, UIBFc2p, MCdMkWVq0m, vKa0r98yTc = 0;
    char GnFXUivzpKt [NMAX] [AMAX];
    scanf ("%d", &UIBFc2p);
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
    for (i = 0; UIBFc2p > i; i = i + 1) {
        scanf ("%s", GnFXUivzpKt[i]);
    }
    i = 0;
    for (; UIBFc2p > i;) {
        MCdMkWVq0m = strlen (GnFXUivzpKt[i]);
        for (; MCdMkWVq0m <= 80 && i < UIBFc2p; i = i + 1) {
            MCdMkWVq0m = MCdMkWVq0m +strlen (GnFXUivzpKt[i + 1]) + 1;
        }
        printf ("%s", GnFXUivzpKt[vKa0r98yTc]);
        for (uv9BK6NwExXg = vKa0r98yTc + 1; uv9BK6NwExXg < i; uv9BK6NwExXg = uv9BK6NwExXg + 1)
            printf (" %s", GnFXUivzpKt[uv9BK6NwExXg]);
        vKa0r98yTc = i;
        printf ("\n");
    };
}

