void  main () {
    int array [(687 - 682)] [(1000 - 995)];
    int (*Jtc05o) [5], LwP69o3IZ, siP9pluQCk81;
    int xxkeT5sV, L2SsbPeQkWVw;
    int num [5];
    Jtc05o = array;
    {
        LwP69o3IZ = 495 - 495;
        while (LwP69o3IZ < 5) {
            {
                siP9pluQCk81 = 238 - 238;
                while (siP9pluQCk81 < 5) {
                    scanf ("%d", &array[LwP69o3IZ][siP9pluQCk81]);
                    siP9pluQCk81++;
                };
            }
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
            LwP69o3IZ = LwP69o3IZ +1;
        };
    }
    scanf ("%d%d", &xxkeT5sV, &L2SsbPeQkWVw);
    if (xxkeT5sV >= (404 - 404) && xxkeT5sV <= (612 - 608) && L2SsbPeQkWVw >= (229 - 229) && L2SsbPeQkWVw <= 4) {
        {
            LwP69o3IZ = 0;
            while (LwP69o3IZ < 5) {
                num[LwP69o3IZ] = *(*(Jtc05o +xxkeT5sV) + LwP69o3IZ);
                *(*(Jtc05o +xxkeT5sV) + LwP69o3IZ) = *(*(Jtc05o +L2SsbPeQkWVw) + LwP69o3IZ);
                *(*(Jtc05o +L2SsbPeQkWVw) + LwP69o3IZ) = num[LwP69o3IZ];
                LwP69o3IZ++;
            };
        }
        {
            LwP69o3IZ = 0;
            while (LwP69o3IZ < 5) {
                printf ("%d %d %d %d %d\n", array[LwP69o3IZ][0], array[LwP69o3IZ][1], array[LwP69o3IZ][(884 - 882)], array[LwP69o3IZ][(630 - 627)], array[LwP69o3IZ][4]);
                LwP69o3IZ++;
            };
        };
    }
    else
        printf ("error");
}

