int main () {
    int OqKjg1W [(1829 - 829)];
    int QjxnwoMtE [1000] = {(193 - 193)};
    int KMNfb8Zi61m [1000];
    int sZdm5lfwk, rGbzu6Rpjdsh, CMqQ9oO74DX3, UA7pbGDxy, A6ODFziH1, Ngpa8B2y, DhIDkLbje, GGayBuX;
    char B6ypDvMW [(1894 - 894)] = {'0'};
    char kXujE1kWTaA8 [(1169 - 169)] = {'0'};
    scanf ("%d", &sZdm5lfwk);
    while (sZdm5lfwk > (161 - 161)) {
        {
            A6ODFziH1 = 0;
            while (A6ODFziH1 < 1000) {
                KMNfb8Zi61m[A6ODFziH1] = 0;
                OqKjg1W[A6ODFziH1] = 0;
                QjxnwoMtE[A6ODFziH1] = 0;
                A6ODFziH1 = A6ODFziH1 +1;
            };
        }
        memset (B6ypDvMW, '0', sizeof (B6ypDvMW));
        memset (kXujE1kWTaA8, '0', sizeof (kXujE1kWTaA8));
        scanf ("%s", B6ypDvMW);
        CMqQ9oO74DX3 = strlen (B6ypDvMW);
        scanf ("%s", kXujE1kWTaA8);
        UA7pbGDxy = strlen (kXujE1kWTaA8);
        {
            A6ODFziH1 = 0;
            while (A6ODFziH1 < CMqQ9oO74DX3) {
                OqKjg1W[A6ODFziH1] = B6ypDvMW[A6ODFziH1] - '0';
                A6ODFziH1 = A6ODFziH1 +1;
            };
        }
        for (A6ODFziH1 = 0; A6ODFziH1 < UA7pbGDxy; A6ODFziH1 = A6ODFziH1 +1)
            QjxnwoMtE[A6ODFziH1 +CMqQ9oO74DX3-UA7pbGDxy] = kXujE1kWTaA8[A6ODFziH1] - '0';
        {
            A6ODFziH1 = 343 - 342;
            while (A6ODFziH1 >= 0) {
                if (OqKjg1W[A6ODFziH1] >= QjxnwoMtE[A6ODFziH1])
                    KMNfb8Zi61m[A6ODFziH1] = OqKjg1W[A6ODFziH1] - QjxnwoMtE[A6ODFziH1];
                else {
                    OqKjg1W[A6ODFziH1] += (754 - 744);
                    OqKjg1W[A6ODFziH1 -(283 - 282)] = OqKjg1W[A6ODFziH1 -(283 - 282)] - 1;
                    KMNfb8Zi61m[A6ODFziH1] = OqKjg1W[A6ODFziH1] - QjxnwoMtE[A6ODFziH1];
                }
                A6ODFziH1 = A6ODFziH1 -1;
            };
        }
        {
            A6ODFziH1 = 0;
            while (A6ODFziH1 < CMqQ9oO74DX3) {
                if (KMNfb8Zi61m[A6ODFziH1] != 0) {
                    Ngpa8B2y = A6ODFziH1;
                    break;
                }
                A6ODFziH1 = A6ODFziH1 +1;
            };
        }
        sZdm5lfwk--;
        for (A6ODFziH1 = Ngpa8B2y; A6ODFziH1 < CMqQ9oO74DX3 -1; A6ODFziH1 = A6ODFziH1 +1)
            printf ("%d", KMNfb8Zi61m[A6ODFziH1]);
        printf ("%d\n", KMNfb8Zi61m[CMqQ9oO74DX3 -1]);
    }
    return 0;
}

