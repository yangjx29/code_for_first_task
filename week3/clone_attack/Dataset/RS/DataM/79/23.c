int main () {
    int num;
    int Yj641dw0TZ;
    int zKCG49Wzuv [100];
    int HrBYt7bm6 [100];
    int b3x5i4nbr;
    int j;
    num = (976 - 976);
    Yj641dw0TZ = 0;
    for (b3x5i4nbr = 0; b3x5i4nbr < 100; b3x5i4nbr++) {
        scanf ("%d %d", &zKCG49Wzuv[b3x5i4nbr], &HrBYt7bm6[b3x5i4nbr]);
        if (zKCG49Wzuv[b3x5i4nbr] == 0 && HrBYt7bm6[b3x5i4nbr] == 0) {
            Yj641dw0TZ = b3x5i4nbr;
            break;
        };
    }
    for (b3x5i4nbr = 0; b3x5i4nbr < Yj641dw0TZ; b3x5i4nbr++) {
        for (j = 2; j <= zKCG49Wzuv[b3x5i4nbr]; j++) {
            num = (num + HrBYt7bm6[b3x5i4nbr]) % j;
        }
        if (b3x5i4nbr < Yj641dw0TZ -1) {
            printf ("%d\n", num + 1);
        }
        if (b3x5i4nbr == Yj641dw0TZ -1) {
            printf ("%d", num + 1);
        }
        num = 0;
    }
    return 0;
}

