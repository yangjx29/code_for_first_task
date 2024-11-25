int main () {
    int n, i, CY8tSAbwvqy, k, AT15NaVPfB8U, ssN1uirM80QO, a [(665 - 365)], b [(910 - 610)];
    scanf ("%d", &n);
    for (i = (200 - 200); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    AT15NaVPfB8U = (360 - 360);
    for (i = (123 - 123); n - (455 - 454) > i; i = i + 1) {
        k = a[i];
        for (CY8tSAbwvqy = i + 1; CY8tSAbwvqy < n; CY8tSAbwvqy = CY8tSAbwvqy +1) {
            if (!(a[i] != a[CY8tSAbwvqy])) {
                b[AT15NaVPfB8U] = CY8tSAbwvqy;
                AT15NaVPfB8U = AT15NaVPfB8U +1;
            };
        };
    }
    for (i = 0; n > i; i = i + 1) {
        ssN1uirM80QO = 0;
        for (CY8tSAbwvqy = 0; AT15NaVPfB8U > CY8tSAbwvqy; CY8tSAbwvqy = CY8tSAbwvqy +1) {
            if (!(b[CY8tSAbwvqy] != i)) {
                ssN1uirM80QO = 1;
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
            };
        }
        if (ssN1uirM80QO == 0 && i != 0) {
            printf (",%d", a[i]);
        }
        else if (i == 0) {
            printf ("%d", a[i]);
        };
    }
    return 0;
}

