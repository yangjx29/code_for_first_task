int apple (int h1c9Lu6dlf5O, int kmb6yL52MBwT) {
    int FNXErD2VAJ;
    if (!(0 != h1c9Lu6dlf5O) || h1c9Lu6dlf5O == (797 - 796) || kmb6yL52MBwT == 1)
        return 1;
    else {
        if (h1c9Lu6dlf5O >= kmb6yL52MBwT)
            FNXErD2VAJ = apple (h1c9Lu6dlf5O, kmb6yL52MBwT - 1) + apple (h1c9Lu6dlf5O - kmb6yL52MBwT, kmb6yL52MBwT);
        else
            FNXErD2VAJ = apple (h1c9Lu6dlf5O, kmb6yL52MBwT - 1);
    }
    return FNXErD2VAJ;
}

main () {
    int zOcjC31, aSny6T9L, h1c9Lu6dlf5O, kmb6yL52MBwT;
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
    scanf ("%d", &zOcjC31);
    for (aSny6T9L = 1; aSny6T9L <= zOcjC31; aSny6T9L = aSny6T9L + 1) {
        scanf ("%d %d", &h1c9Lu6dlf5O, &kmb6yL52MBwT);
        printf ("%d\n", apple (h1c9Lu6dlf5O, kmb6yL52MBwT));
    };
}

