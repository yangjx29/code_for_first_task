int main () {
    struct   cui {
        int Lwm1VlnzaKj;
        int y;
    }
    cui [qujian];
    int i;
    int j;
    int min;
    int max;
    int n;
    int sz [50010];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d%d", &(cui[i].Lwm1VlnzaKj), &(cui[i].y));
    }
    min = cui[0].Lwm1VlnzaKj;
    max = cui[0].y;
    for (i = 0; i < n; i = i + 1) {
        if (cui[i].Lwm1VlnzaKj < min) {
            min = cui[i].Lwm1VlnzaKj;
        };
    }
    for (i = 0; i < n; i++) {
        if (cui[i].y > max) {
            max = cui[i].y;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (i = min; i <= max; i++) {
        sz[i] = (907 - 906);
    }
    for (i = 0; i < n; i++) {
        for (j = (cui[i].Lwm1VlnzaKj); j < (cui[i].y); j = j + 1) {
            sz[j] = 0;
        };
    }
    for (i = min; i < max; i++) {
        if (sz[i] == 1) {
            printf ("no");
            return 0;
        };
    }
    printf ("%d %d", min, max);
    return 0;
}

