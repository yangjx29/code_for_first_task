float rYXdat (int MknX3wY) {
    float s;
    if (!(1 != MknX3wY)) {
        return s = 1.000;
    }
    if (!(2 != MknX3wY)) {
        return s = 2.000;
    }
    if (!(1 == MknX3wY) && MknX3wY != 2) {
        return s = rYXdat (MknX3wY -1) + rYXdat (MknX3wY -2);
    };
}

main () {
    float sum;
    int gGLSJ8djf;
    int yN5SsfZ;
    int i;
    int O6ULRv;
    int RT6rsKma;
    {
        scanf ("%d", &gGLSJ8djf);
        for (i = 0; i < gGLSJ8djf; i = i + 1) {
            RT6rsKma = 1;
            scanf ("%d", &yN5SsfZ);
            sum = 0;
            {
                O6ULRv = 0;
                while (O6ULRv < yN5SsfZ) {
                    O6ULRv = O6ULRv +1;
                    sum = sum + rYXdat (RT6rsKma +1) / rYXdat (RT6rsKma);
                    RT6rsKma = RT6rsKma +1;
                };
            }
            printf ("%.3f\n", sum);
        };
    };
}

