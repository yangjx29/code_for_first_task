int main (int argc, char *V8prwbLGcV []) {
    int Slavjk0p, b, c, n;
    int nbigWnIX [(700 - 680)];
    int wt [20];
    scanf ("%d", &n);
    for (Slavjk0p = 0; n > Slavjk0p; Slavjk0p = Slavjk0p +1) {
        scanf ("%d", &wt[Slavjk0p]);
    }
    nbigWnIX[1] = 1;
    nbigWnIX[2] = 1;
    for (Slavjk0p = 0; n >= Slavjk0p; Slavjk0p++) {
        b = wt[Slavjk0p];
        if (!(1 != b)) {
            printf ("%d\n", nbigWnIX[1]);
        }
        else {
            if (b == 2) {
                printf ("%d\n", nbigWnIX[2]);
            }
            else {
                if (b >= 3) {
                    for (c = 3; c <= b; c = c + 1) {
                        nbigWnIX[c] = nbigWnIX[c - 2] + nbigWnIX[c - 1];
                    }
                    printf ("%d\n", nbigWnIX[b]);
                };
            };
        };
    }
    return 0;
}

