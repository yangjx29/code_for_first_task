int main () {
    int a, GX6BMZ = (818 - 818), n50 = 0, n20 = 0, n10 = 0, dTwQ62he = 0, sXRN7ruT = 0;
    scanf ("%d", &a);
    while (0 < a / 100) {
        a = a - 100;
        GX6BMZ = GX6BMZ +1;
    }
    while (0 < a / 50) {
        n50 = n50 + 1;
        a = a - 50;
    }
    for (; a / 20 > 0;) {
        n20 = n20 + 1;
        a = a - 20;
    }
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
    for (; a / 10 > 0;) {
        n10 = n10 + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        a = a - 10;
    }
    for (; a / 5 > 0;) {
        dTwQ62he++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        a = a - 5;
    }
    sXRN7ruT = a;
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", GX6BMZ, n50, n20, n10, dTwQ62he, sXRN7ruT);
    return 0;
}

