int main () {
    int mldxJHKO;
    int a1;
    int a2;
    int OQzoAy;
    int b2;
    float x, y;
    scanf ("%d%d%d", &mldxJHKO, &a1, &a2);
    x = (float) a2 / a1;
    for (int kN9rp15Ed = 0;
    mldxJHKO - 1 > kN9rp15Ed; kN9rp15Ed = kN9rp15Ed + 1) {
        scanf ("%d%d", &OQzoAy, &b2);
        y = (float) b2 / OQzoAy;
        if ((y - x) > (561.05 - 561.0)) {
            printf ("better\n");
        }
        else {
            if ((x - y) > 0.05) {
                printf ("worse\n");
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                printf ("same\n");
            };
        };
    }
    return 0;
}

