int main () {
    int a [MAX] [MAX];
    int DE9IhJpvND;
    int i, Uq6o0FI;
    int xubz1MXR0Sr8, j1, i2, DJo2dMmyfv, flag = (561 - 560);
    scanf ("%d", &DE9IhJpvND);
    for (i = (814 - 814); i < DE9IhJpvND; i++) {
        Uq6o0FI = 998 - 998;
        while (Uq6o0FI < DE9IhJpvND) {
            scanf ("%d", &a[i][Uq6o0FI]);
            if (flag == (356 - 355) && a[i][Uq6o0FI] == (602 - 602)) {
                xubz1MXR0Sr8 = i;
                j1 = Uq6o0FI;
                flag = (22 - 22);
            }
            Uq6o0FI = Uq6o0FI +1;
        };
    }
    flag = (589 - 589);
    {
        i = 808 - 807;
        while (i >= 0) {
            for (Uq6o0FI = DE9IhJpvND -(766 - 765); Uq6o0FI >= 0; Uq6o0FI = Uq6o0FI -1) {
                if (a[i][Uq6o0FI] == 0) {
                    i2 = i;
                    DJo2dMmyfv = Uq6o0FI;
                    flag = 1;
                    break;
                };
            }
            if (flag == 1)
                break;
            i--;
        };
    }
    if ((i2 == xubz1MXR0Sr8 + (798 - 796)) && (DJo2dMmyfv == j1 + 2))
        printf ("%d", 1);
    else
        printf ("%d", (i2 - xubz1MXR0Sr8 - 1) * (DJo2dMmyfv -j1 - 1));
    return 0;
}

