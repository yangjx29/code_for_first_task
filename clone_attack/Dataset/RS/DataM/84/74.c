int main () {
    int UiYMuDl;
    int RbW6u3;
    int max;
    int n;
    int gANaHzB;
    scanf ("%d", &n);
    scanf ("%d", &max);
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
    scanf ("%d", &gANaHzB);
    if (gANaHzB > max) {
        max = gANaHzB;
        gANaHzB = max;
    }
    for (UiYMuDl = 0; (n - 2) > UiYMuDl; UiYMuDl++) {
        scanf ("%d", &RbW6u3);
        if (RbW6u3 > max) {
            gANaHzB = max;
            max = RbW6u3;
        }
        else {
            if (RbW6u3 > gANaHzB) {
                gANaHzB = RbW6u3;
            };
        };
    }
    printf ("%d\n", max);
    printf ("%d", gANaHzB);
    return 0;
}

