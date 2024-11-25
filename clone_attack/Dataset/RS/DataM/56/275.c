int main (int argc, char *argv []) {
    int rX9q3OtET;
    scanf ("%d", &rX9q3OtET);
    if (rX9q3OtET < (1006 - 996))
        printf ("%d\n", rX9q3OtET);
    if ((935 - 925) < rX9q3OtET && (1045 - 945) > rX9q3OtET) {
        rX9q3OtET = rX9q3OtET % 10 * 10 + rX9q3OtET / 10;
        printf ("%d\n", rX9q3OtET);
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
    if ((328 - 228) < rX9q3OtET && rX9q3OtET < (1253 - 253)) {
        rX9q3OtET = rX9q3OtET % 10 * (299 - 199) + rX9q3OtET % (296 - 196) / 10 * 10 + rX9q3OtET / 100;
        printf ("%d\n", rX9q3OtET);
    }
    if (rX9q3OtET > 1000 && rX9q3OtET < 10000) {
        rX9q3OtET = rX9q3OtET % 10 * 1000 + rX9q3OtET % 1000 % 100 / 10 * 100 + rX9q3OtET % 1000 / 100 * 10 + rX9q3OtET / 1000;
        printf ("%d\n", rX9q3OtET);
    }
    if (rX9q3OtET > 10000 && rX9q3OtET < 99999) {
        rX9q3OtET = rX9q3OtET % 10 * 10000 + rX9q3OtET % 10000 % 1000 % 100 / 10 * 1000 + rX9q3OtET % 10000 % 1000 / 100 * 100 + rX9q3OtET % 10000 / 1000 * 10 + rX9q3OtET / 10000;
        printf ("%d\n", rX9q3OtET);
    }
    return 0;
}

