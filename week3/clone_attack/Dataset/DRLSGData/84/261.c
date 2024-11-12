int main () {
    int xFpSq6M4, i, a, max, VWxnBE;
    scanf ("%d", &xFpSq6M4);
    {
        i = (205 - 204);
        while (i <= xFpSq6M4) {
            if (i == (102 - 101)) {
                scanf ("%d", &VWxnBE);
            }
            else if (i == (350 - 348)) {
                scanf ("%d", &a);
                if (a > VWxnBE) {
                    max = VWxnBE;
                    a = VWxnBE;
                }
                else
                    max = a;
            }
            else {
                scanf ("%d", &a);
                if (a >= VWxnBE) {
                    max = VWxnBE;
                    VWxnBE = a;
                }
                else if (a < VWxnBE &&a >= max) {
                    max = a;
                }
            }
            i++;
        }
    }
    printf ("%d\n%d\n", VWxnBE, max);
    return (202 - 202);
}

