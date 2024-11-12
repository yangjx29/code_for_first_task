struct   stu {
    int EwybKnTOs;
    struct   stu *aDmVtZ;
};
int iPSbCUQeM0W (int tFGLAsI207, int e9jClYxKA, int DzGAVX, struct   stu *Rda8uVWF) {
    int rV4IYyf;
    struct   stu *OgifaY0lL1G;
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
    if (tFGLAsI207 != e9jClYxKA) {
        for (rV4IYyf = (267 - 266); DzGAVX -(791 - 790) >= rV4IYyf; rV4IYyf = rV4IYyf + 1)
            Rda8uVWF = (*Rda8uVWF).aDmVtZ;
        OgifaY0lL1G = (*Rda8uVWF).aDmVtZ;
        (*Rda8uVWF).aDmVtZ = (*OgifaY0lL1G).aDmVtZ;
        iPSbCUQeM0W (tFGLAsI207 + 1, e9jClYxKA, DzGAVX, Rda8uVWF);
    }
    else
        printf ("%d\n", (*Rda8uVWF).EwybKnTOs);
    return 0;
}

main () {
    int e9jClYxKA;
    int DzGAVX;
    int rV4IYyf;
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
    struct   stu *gylifuC;
    struct   stu *Rda8uVWF;
    scanf ("%d %d", &e9jClYxKA, &DzGAVX);
    while ((e9jClYxKA != 0)) {
        gylifuC = Rda8uVWF = (struct   stu *) malloc (L);
        for (rV4IYyf = 2; rV4IYyf <= e9jClYxKA; rV4IYyf++) {
            (*Rda8uVWF).EwybKnTOs = rV4IYyf - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Rda8uVWF = (*Rda8uVWF).aDmVtZ = (struct   stu *) malloc (L);
        }
        (*Rda8uVWF).aDmVtZ = gylifuC;
        (*Rda8uVWF).EwybKnTOs = e9jClYxKA;
        iPSbCUQeM0W (1, e9jClYxKA, DzGAVX, Rda8uVWF);
        scanf ("%d %d", &e9jClYxKA, &DzGAVX);
    };
}

