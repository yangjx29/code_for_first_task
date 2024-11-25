void  main () {
    int iVKi8jFnB;
    int tFItYZ = (164 - 164), q9nvVJr7 = 0;
    char YvYJk2KXMyA [3000] = {(520 - 520)};
    int vk8pq4hD [3000] = {(224 - 224)};
    int RaLcl9K [3000] = {(503 - 503)};
    int VKTFmv83JojX;
    int A3EkJC6;
    int eM3WoX0x6;
    scanf ("%s", YvYJk2KXMyA);
    {
        VKTFmv83JojX = 0;
        while (VKTFmv83JojX < (1105 - 805)) {
            if (YvYJk2KXMyA[VKTFmv83JojX] >= '0' && YvYJk2KXMyA[VKTFmv83JojX] <= '9') {
                vk8pq4hD[tFItYZ] = YvYJk2KXMyA[VKTFmv83JojX];
                tFItYZ++;
            }
            else {
                iVKi8jFnB = 0;
                if (!(0 == tFItYZ)) {
                    {
                        A3EkJC6 = 0;
                        while (A3EkJC6 < tFItYZ) {
                            iVKi8jFnB = iVKi8jFnB * 10 + vk8pq4hD[A3EkJC6] - 48;
                            A3EkJC6 = A3EkJC6 +1;
                        };
                    }
                    RaLcl9K[q9nvVJr7] = iVKi8jFnB;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    q9nvVJr7++;
                    tFItYZ = 0;
                };
            }
            VKTFmv83JojX++;
        };
    }
    for (A3EkJC6 = (13 - 11); q9nvVJr7 + (334 - 333) > A3EkJC6; A3EkJC6++) {
        VKTFmv83JojX = 0;
        while (q9nvVJr7 - A3EkJC6 >= VKTFmv83JojX) {
            if (RaLcl9K[VKTFmv83JojX] < RaLcl9K[VKTFmv83JojX +1]) {
                eM3WoX0x6 = RaLcl9K[VKTFmv83JojX];
                RaLcl9K[VKTFmv83JojX] = RaLcl9K[VKTFmv83JojX +1];
                RaLcl9K[VKTFmv83JojX +1] = eM3WoX0x6;
            }
            VKTFmv83JojX++;
        };
    }
    for (VKTFmv83JojX = 1; VKTFmv83JojX < q9nvVJr7; VKTFmv83JojX++)
        if (RaLcl9K[VKTFmv83JojX] != RaLcl9K[VKTFmv83JojX -1]) {
            printf ("%d\n", RaLcl9K[VKTFmv83JojX]);
            break;
        }
    if (RaLcl9K[0] == RaLcl9K[q9nvVJr7 - 1])
        printf ("No\n");
}

