struct   student {
    char Kxu03RTlF [30];
    int yJIK2YbB;
    int pin;
    char MvOkURs9;
    char xi;
    int hd6xSg9zM2;
};
struct   student moa6BUz [100];

void  main () {
    int AlbfB4wQ, j, CZvTx4, gtTFdX32z, IrqUSKycvjlA, a [100], sum = 0, t, add = 0;
    scanf ("%d", &IrqUSKycvjlA);
    for (AlbfB4wQ = 1; AlbfB4wQ <= IrqUSKycvjlA; AlbfB4wQ = AlbfB4wQ +1) {
        scanf ("%s %d %d %c %c %d", moa6BUz[AlbfB4wQ].Kxu03RTlF, &moa6BUz[AlbfB4wQ].yJIK2YbB, &moa6BUz[AlbfB4wQ].pin, &moa6BUz[AlbfB4wQ].MvOkURs9, &moa6BUz[AlbfB4wQ].xi, &moa6BUz[AlbfB4wQ].hd6xSg9zM2);
        a[AlbfB4wQ] = 0;
    }
    for (AlbfB4wQ = 1; IrqUSKycvjlA >= AlbfB4wQ; AlbfB4wQ = AlbfB4wQ +1) {
        if (80 < moa6BUz[AlbfB4wQ].yJIK2YbB && 1 <= moa6BUz[AlbfB4wQ].hd6xSg9zM2)
            a[AlbfB4wQ] = a[AlbfB4wQ] + 8000;
        if (85 < moa6BUz[AlbfB4wQ].yJIK2YbB && moa6BUz[AlbfB4wQ].pin > 80)
            a[AlbfB4wQ] = a[AlbfB4wQ] + 4000;
        if (moa6BUz[AlbfB4wQ].yJIK2YbB > 90)
            a[AlbfB4wQ] = a[AlbfB4wQ] + 2000;
        if (85 < moa6BUz[AlbfB4wQ].yJIK2YbB && !('Y' != moa6BUz[AlbfB4wQ].xi))
            a[AlbfB4wQ] = a[AlbfB4wQ] + 1000;
        if (80 < moa6BUz[AlbfB4wQ].pin && moa6BUz[AlbfB4wQ].MvOkURs9 == 'Y')
            a[AlbfB4wQ] = a[AlbfB4wQ] + 850;
    }
    for (AlbfB4wQ = 1; AlbfB4wQ <= IrqUSKycvjlA; AlbfB4wQ = AlbfB4wQ +1) {
        if (sum < a[AlbfB4wQ])
            sum = a[AlbfB4wQ];
    }
    for (AlbfB4wQ = 1; AlbfB4wQ <= IrqUSKycvjlA; AlbfB4wQ = AlbfB4wQ +1) {
        if (a[AlbfB4wQ] == sum) {
            t = AlbfB4wQ;
            break;
        }
    }
    for (AlbfB4wQ = 1; AlbfB4wQ <= IrqUSKycvjlA; AlbfB4wQ = AlbfB4wQ +1) {
        add = add + a[AlbfB4wQ];
    }
    printf ("%s\n%d\n%d", moa6BUz[t].Kxu03RTlF, sum, add);
}

