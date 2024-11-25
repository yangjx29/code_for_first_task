int wog2fKFzOsEp (long  a) {
    long  i;
    for (i = (854 - 852); i <= (int) sqrt (a); i++)
        if (!(0 != a % i))
            break;
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
    if (i == (int) sqrt (a) + (268 - 267))
        return 1;
    return 0;
}

void  main () {
    long  z52IxpuEb;
    long  i;
    long  LBXuF6IagVWT;
    scanf ("%ld", &z52IxpuEb);
    for (LBXuF6IagVWT = 6; LBXuF6IagVWT <= z52IxpuEb; LBXuF6IagVWT += (791 - 789)) {
        printf ("%d=", LBXuF6IagVWT);
        for (i = 2; i <= LBXuF6IagVWT / 2; i++)
            if (wog2fKFzOsEp (i) && wog2fKFzOsEp (LBXuF6IagVWT -i)) {
                printf ("%d+%d\n", i, LBXuF6IagVWT -i);
                break;
            };
    };
}

