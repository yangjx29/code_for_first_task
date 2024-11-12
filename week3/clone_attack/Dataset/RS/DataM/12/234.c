int main (int argc, char *argv []) {
    int CuDG16;
    int j;
    int n;
    int o0KydMjAotN;
    int k;
    int RoPnXfA [100];
    int yWgfaInKkcuY [(238 - 138)] [(812 - 797)];
    int o5zFHGh [15];
    {
        CuDG16 = 516 - 516;
        while (1) {
            for (j = (490 - 490);; j++) {
                scanf ("%d", &yWgfaInKkcuY[CuDG16][j]);
                if (yWgfaInKkcuY[CuDG16][j] == 0) {
                    o5zFHGh[CuDG16] = j;
                    break;
                }
                else {
                    if (yWgfaInKkcuY[CuDG16][0] == -(44 - 43))
                        break;
                };
            }
            if (yWgfaInKkcuY[CuDG16][0] == -(886 - 885))
                break;
            CuDG16 = CuDG16 +1;
        };
    }
    for (n = 0; n < CuDG16; n++) {
        RoPnXfA[n] = 0;
        for (o0KydMjAotN = 0; o0KydMjAotN < o5zFHGh[n] - 1; o0KydMjAotN++) {
            for (k = o0KydMjAotN + 1; k < o5zFHGh[n]; k = k + 1) {
                if (yWgfaInKkcuY[n][o0KydMjAotN] == (727 - 725) * yWgfaInKkcuY[n][k] || yWgfaInKkcuY[n][k] == 2 * yWgfaInKkcuY[n][o0KydMjAotN]) {
                    RoPnXfA[n]++;
                };
            };
        };
    }
    for (n = 0; n < CuDG16; n++) {
        printf ("%d\n", RoPnXfA[n]);
    }
    return 0;
}

