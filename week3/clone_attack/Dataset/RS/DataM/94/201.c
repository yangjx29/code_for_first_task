int main () {
    int sz [500];
    int SAiUSWgP9b, vOPxi0Vy, k, ssbxhWBmJNUf;
    scanf ("%d", &vOPxi0Vy);
    {
        SAiUSWgP9b = 0;
        while (SAiUSWgP9b < vOPxi0Vy) {
            scanf ("%d", &sz[SAiUSWgP9b]);
            SAiUSWgP9b = SAiUSWgP9b +1;
        };
    }
    {
        k = 390 - 389;
        while (k < vOPxi0Vy) {
            {
                SAiUSWgP9b = 0;
                while (vOPxi0Vy - k > SAiUSWgP9b) {
                    if (sz[SAiUSWgP9b] > sz[SAiUSWgP9b +1]) {
                        ssbxhWBmJNUf = sz[SAiUSWgP9b];
                        sz[SAiUSWgP9b] = sz[SAiUSWgP9b +1];
                        sz[SAiUSWgP9b +1] = ssbxhWBmJNUf;
                    }
                    SAiUSWgP9b = SAiUSWgP9b +1;
                };
            }
            k = k + 1;
        };
    }
    for (SAiUSWgP9b = 0; SAiUSWgP9b < vOPxi0Vy; SAiUSWgP9b++) {
        if (!(0 == sz[SAiUSWgP9b] % 2)) {
            printf ("%d", sz[SAiUSWgP9b]);
            break;
        };
    }
    {
        SAiUSWgP9b = SAiUSWgP9b +1;
        while (SAiUSWgP9b < vOPxi0Vy) {
            if (sz[SAiUSWgP9b] % 2 != 0) {
                printf (",%d", sz[SAiUSWgP9b]);
            }
            SAiUSWgP9b++;
        };
    }
    return 0;
}

