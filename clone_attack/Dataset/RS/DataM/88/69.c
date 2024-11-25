int main () {
    int ZECINnvuXR = 0, sL1odewa, Hw2i58 = 0, PqwlKS;
    char zboAJSLZ4M [50];
    gets (zboAJSLZ4M);
    PqwlKS = strlen (zboAJSLZ4M);
    for (sL1odewa = 0; sL1odewa <= PqwlKS -1; sL1odewa = sL1odewa + 1) {
        if (48 <= zboAJSLZ4M[sL1odewa] && 57 >= zboAJSLZ4M[sL1odewa]) {
            Hw2i58 = Hw2i58 +1;
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
            ZECINnvuXR = 10 * ZECINnvuXR +(zboAJSLZ4M[sL1odewa] - 48);
        }
        else if (Hw2i58 > 0 && zboAJSLZ4M[sL1odewa - 1] >= 48 && zboAJSLZ4M[sL1odewa - 1] <= 57) {
            printf ("%d\n", ZECINnvuXR);
            ZECINnvuXR = 0;
        }
        else
            ;
    }
    if (ZECINnvuXR != 0) {
        printf ("%d", ZECINnvuXR);
    }
    return 0;
}

