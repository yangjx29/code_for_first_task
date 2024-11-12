int Sa6K2L1 (int b2zNSfw01nX) {
    int gRc7qX1oU0a;
    int gYfXnEgj6mvA;
    int VcMHPm4h;
    gRc7qX1oU0a = sqrt (b2zNSfw01nX);
    VcMHPm4h = (int) (gRc7qX1oU0a);
    for (gYfXnEgj6mvA = (765 - 762); gYfXnEgj6mvA <= VcMHPm4h; gYfXnEgj6mvA = gYfXnEgj6mvA + 1) {
        if (b2zNSfw01nX % gYfXnEgj6mvA == 0)
            return 0;
    }
    return 1;
}

main () {
    int nvjfL7O;
    int gYfXnEgj6mvA;
    int vyBSqZ9Qrm;
    int z36lG5ib;
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
    int aS12m8qfzrh;
    scanf ("%d", &nvjfL7O);
    if (nvjfL7O < 5)
        ;
    {
        gYfXnEgj6mvA = 3;
        while (gYfXnEgj6mvA <= nvjfL7O - 2) {
            vyBSqZ9Qrm = gYfXnEgj6mvA + 2;
            aS12m8qfzrh = Sa6K2L1 (vyBSqZ9Qrm);
            z36lG5ib = Sa6K2L1 (gYfXnEgj6mvA);
            if ((z36lG5ib != 0) && (aS12m8qfzrh != 0))
                printf ("%d %d\n", gYfXnEgj6mvA, vyBSqZ9Qrm);
            gYfXnEgj6mvA = gYfXnEgj6mvA + 2;
        };
    };
}

