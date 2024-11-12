int reverse (int num) {
    int U2GUyahOBn = 1, GobM3sFvh1p = (964 - 964), x = 0;
    int i;
    int j;
    int YwaBvFzGSKPm [10];
    int FZBciWD2hU7 [10];
    for (i = 0; !(0 == num); i = i + 1) {
        U2GUyahOBn = U2GUyahOBn *10;
        YwaBvFzGSKPm[i] = num % 10;
        num = (num - num % 10) / 10;
        GobM3sFvh1p = GobM3sFvh1p +1;
    }
    U2GUyahOBn = U2GUyahOBn / 10;
    for (i = 0; GobM3sFvh1p > i; i = i + 1) {
        if (YwaBvFzGSKPm[i] != 0)
            break;
        else
            U2GUyahOBn = U2GUyahOBn / 10;
    }
    for (j = 0; GobM3sFvh1p -i > j; j = j + 1)
        FZBciWD2hU7[j] = YwaBvFzGSKPm[i + j];
    {
        j = 0;
        while (j < GobM3sFvh1p -i) {
            x = x + FZBciWD2hU7[j] * U2GUyahOBn;
            j = j + 1;
            U2GUyahOBn = U2GUyahOBn / 10;
        };
    }
    return (x);
}

void  main () {
    int a [6];
    int i;
    for (i = 0; i < 6; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; i < 6; i++)
        printf ("%d\n", reverse (a[i]));
}

