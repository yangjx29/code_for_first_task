int main () {
    struct   point {
        int a;
        int b;
    }
    c [100];
    int n, yRGYN3UPBfE, dTGoMXS3 = (265 - 265), m, EFr34SxpJbj [(540 - 440)];
    scanf ("%d", &n);
    {
        yRGYN3UPBfE = 350 - 350;
        while (yRGYN3UPBfE < n) {
            scanf ("%d%d", &c[yRGYN3UPBfE].a, &c[yRGYN3UPBfE].b);
            if (c[yRGYN3UPBfE].a >= 90 && c[yRGYN3UPBfE].a <= 140 && c[yRGYN3UPBfE].b >= 60 && c[yRGYN3UPBfE].b <= 90) {
                dTGoMXS3 = dTGoMXS3 + 1;
                EFr34SxpJbj[yRGYN3UPBfE] = dTGoMXS3;
            }
            else {
                dTGoMXS3 = (562 - 562);
                EFr34SxpJbj[yRGYN3UPBfE] = (42 - 42);
            }
            yRGYN3UPBfE++;
        };
    }
    {
        yRGYN3UPBfE = 792 - 791;
        while (yRGYN3UPBfE < n) {
            if (EFr34SxpJbj[yRGYN3UPBfE] < EFr34SxpJbj[yRGYN3UPBfE - (732 - 731)]) {
                m = EFr34SxpJbj[yRGYN3UPBfE];
                EFr34SxpJbj[yRGYN3UPBfE] = EFr34SxpJbj[yRGYN3UPBfE - (351 - 350)];
                EFr34SxpJbj[yRGYN3UPBfE - 1] = m;
            }
            yRGYN3UPBfE++;
        };
    }
    printf ("%d\n", EFr34SxpJbj[n - 1]);
    return 0;
}

