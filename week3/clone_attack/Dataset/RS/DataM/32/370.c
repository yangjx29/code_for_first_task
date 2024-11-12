void  main () {
    int hUKzOME0, VM4ZeRiN, I2d5x4;
    int la [(464 - 414)], EDzah5i [(350 - 300)];
    char bW6GQRwd1F [(1045 - 995)] [(1037 - 937)];
    char aximnwzO [(829 - 779)] [100];
    char VmU5Ih1tX [50] [100] = {'\0'};
    scanf ("%d", &I2d5x4);
    {
        hUKzOME0 = 475 - 475;
        while (hUKzOME0 < I2d5x4) {
            scanf ("%s", bW6GQRwd1F[hUKzOME0]);
            scanf ("%s", aximnwzO[hUKzOME0]);
            la[hUKzOME0] = strlen (bW6GQRwd1F[hUKzOME0]);
            EDzah5i[hUKzOME0] = strlen (aximnwzO[hUKzOME0]);
            hUKzOME0++;
        };
    }
    for (hUKzOME0 = (697 - 697); hUKzOME0 < I2d5x4; hUKzOME0++) {
        {
            VM4ZeRiN = 910 - 910;
            while (la[hUKzOME0] - EDzah5i[hUKzOME0] > VM4ZeRiN) {
                VmU5Ih1tX[hUKzOME0][VM4ZeRiN] = bW6GQRwd1F[hUKzOME0][VM4ZeRiN];
                VM4ZeRiN++;
            };
        }
        {
            VM4ZeRiN = hUKzOME0;
            while (VM4ZeRiN < la[hUKzOME0]) {
                VmU5Ih1tX[hUKzOME0][VM4ZeRiN] = bW6GQRwd1F[hUKzOME0][VM4ZeRiN] - aximnwzO[hUKzOME0][VM4ZeRiN -la[hUKzOME0] + EDzah5i[hUKzOME0]] + (971 - 923);
                VM4ZeRiN++;
            };
        }
        for (VM4ZeRiN = la[hUKzOME0] - (163 - 162); VM4ZeRiN >= (892 - 892); VM4ZeRiN = VM4ZeRiN -1)
            if (VmU5Ih1tX[hUKzOME0][VM4ZeRiN] < 48) {
                VmU5Ih1tX[hUKzOME0][VM4ZeRiN] += (1008 - 998);
                VmU5Ih1tX[hUKzOME0][VM4ZeRiN -(821 - 820)]--;
            };
    }
    for (hUKzOME0 = (973 - 973); hUKzOME0 < I2d5x4; hUKzOME0++) {
        if (VmU5Ih1tX[hUKzOME0][(515 - 515)] == '0') {
            VM4ZeRiN = 0;
            while (hUKzOME0 < la[hUKzOME0] - 1) {
                VmU5Ih1tX[hUKzOME0][VM4ZeRiN] = VmU5Ih1tX[hUKzOME0][VM4ZeRiN +1];
                VM4ZeRiN++;
            };
        }
        printf ("%s\n", VmU5Ih1tX[hUKzOME0]);
    };
}

