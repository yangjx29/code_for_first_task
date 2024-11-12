int main () {
    int sum;
    int k, jlOepHU, n;
    int rGLmANv, kjNWyI, BXnjuQo;
    int R4Q0K7kHf;
    scanf ("%d", &k);
    for (BXnjuQo = 0; BXnjuQo < k; BXnjuQo = BXnjuQo +1) {
        scanf ("%d%d", &jlOepHU, &n);
        sum = 0;
        for (rGLmANv = 0; jlOepHU > rGLmANv; rGLmANv++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (kjNWyI = 0; n > kjNWyI; kjNWyI = kjNWyI + 1) {
                scanf ("%d", &R4Q0K7kHf);
                if (!(0 != rGLmANv) || !(jlOepHU - 1 != rGLmANv))
                    sum = sum + R4Q0K7kHf;
                else {
                    if (kjNWyI == 0 || kjNWyI == n - 1)
                        sum += R4Q0K7kHf;
                };
            };
        }
        printf ("%d\n", sum);
    }
    return 0;
}

