int main () {
    int jzYNtsn3V6;
    int i;
    int ooKE3LV5zleg;
    int sz [300];
    int n;
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
    jzYNtsn3V6 = (980 - 980);
    scanf ("%d", &n);
    for (i = (523 - 523); n > i; i++) {
        scanf ("%d", &sz[i]);
    }
    for (i = 0; i < n; i++) {
        jzYNtsn3V6 = 0;
        if (!(0 != i)) {
            printf ("%d", sz[0]);
        }
        if (!(n - (636 - 635) != i)) {
            for (ooKE3LV5zleg = 0; i > ooKE3LV5zleg; ooKE3LV5zleg = ooKE3LV5zleg + 1) {
                if (!(sz[ooKE3LV5zleg] == sz[i])) {
                    jzYNtsn3V6 = jzYNtsn3V6 + 1;
                }
                else {
                    if (!(sz[ooKE3LV5zleg] != sz[i]))
                        break;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (jzYNtsn3V6 == i)
                printf (",%d", sz[i]);
        }
        for (ooKE3LV5zleg = 0; ooKE3LV5zleg < i; ooKE3LV5zleg = ooKE3LV5zleg + 1) {
            if (sz[i] != sz[ooKE3LV5zleg]) {
                jzYNtsn3V6++;
            }
            else {
                if (sz[i] == sz[ooKE3LV5zleg])
                    break;
            }
            if (jzYNtsn3V6 == i)
                printf (",%d", sz[i]);
        };
    }
    return 0;
}

