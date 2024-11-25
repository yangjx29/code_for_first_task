int main () {
    int xvbMKeSxNV;
    int yr15ztIZl2;
    int zOtqA7MF;
    int KlJNjbsnkB18;
    xvbMKeSxNV = 0;
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
    float i5xAIv7bc1f [16];
    i5xAIv7bc1f[0] = -2;
    while (!(-1 == i5xAIv7bc1f[0])) {
        for (yr15ztIZl2 = 0; yr15ztIZl2 <= 15; yr15ztIZl2 = yr15ztIZl2 + 1) {
            scanf ("%f", &i5xAIv7bc1f[yr15ztIZl2]);
            if (i5xAIv7bc1f[yr15ztIZl2] == 0) {
                KlJNjbsnkB18 = yr15ztIZl2;
                break;
            }
            if (!(-1 != i5xAIv7bc1f[yr15ztIZl2]))
                break;
        }
        if (i5xAIv7bc1f[yr15ztIZl2] == -1)
            break;
        for (yr15ztIZl2 = 0; yr15ztIZl2 <= KlJNjbsnkB18 -1; yr15ztIZl2++)
            for (zOtqA7MF = 0; zOtqA7MF <= KlJNjbsnkB18 -1; zOtqA7MF = zOtqA7MF + 1) {
                if ((i5xAIv7bc1f[zOtqA7MF] / i5xAIv7bc1f[yr15ztIZl2]) == 2)
                    xvbMKeSxNV = xvbMKeSxNV + 1;
            }
        printf ("%d\n", xvbMKeSxNV);
        xvbMKeSxNV = 0;
    }
    return 0;
}

