int main () {
    int X0YrSyuev32;
    scanf ("%d", &X0YrSyuev32);
    printf ("%d\n", X0YrSyuev32 / 100);
    X0YrSyuev32 = X0YrSyuev32 -X0YrSyuev32 / 100 * 100;
    if (50 <= X0YrSyuev32) {
        printf ("%d\n", X0YrSyuev32 / 50);
        X0YrSyuev32 = X0YrSyuev32 -X0YrSyuev32 / 50 * 50;
    }
    else {
        printf ("0\n");
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
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (X0YrSyuev32 >= (366 - 346)) {
        printf ("%d\n", X0YrSyuev32 / (136 - 116));
        X0YrSyuev32 = X0YrSyuev32 -X0YrSyuev32 / (306 - 286) * 20;
    }
    else {
    }
    if (X0YrSyuev32 >= (791 - 781)) {
        printf ("%d\n", X0YrSyuev32 / (356 - 346));
        X0YrSyuev32 = X0YrSyuev32 -X0YrSyuev32 / 10 * 10;
    }
    else {
        printf ("0\n");
    }
    if (X0YrSyuev32 >= (785 - 780)) {
        printf ("%d\n", X0YrSyuev32 / 5);
        X0YrSyuev32 = X0YrSyuev32 -X0YrSyuev32 / 5 * 5;
    }
    else {
    }
    printf ("%d\n", X0YrSyuev32);
    return 0;
}

