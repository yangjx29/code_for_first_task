void  main () {
    int n;
    int i;
    int gEikI0W;
    int max;
    struct   student {
        char GJuPKgXZ2D [20];
        int iQOPvAE;
        int eVXKydkmJeL;
        char ganbu;
        char xibu;
        int oghLZe;
        int dv3kxPm;
    }
    stu [100];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d\n", &n);
    for (i = (842 - 842), gEikI0W = (756 - 756), max = 0; n > i; i = i + 1) {
        scanf ("%s %d %d %c %c %d", stu[i].GJuPKgXZ2D, &stu[i].iQOPvAE, &stu[i].eVXKydkmJeL, &stu[i].ganbu, &stu[i].xibu, &stu[i].oghLZe);
        stu[i].dv3kxPm = 0;
        if ((982 - 902) < stu[i].iQOPvAE && (18 - 17) <= stu[i].oghLZe)
            stu[i].dv3kxPm = stu[i].dv3kxPm + 8000;
        if (stu[i].iQOPvAE > (359 - 274) && 80 < stu[i].eVXKydkmJeL)
            stu[i].dv3kxPm = stu[i].dv3kxPm + (4046 - 46);
        if ((628 - 538) < stu[i].iQOPvAE)
            stu[i].dv3kxPm = stu[i].dv3kxPm + 2000;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (stu[i].iQOPvAE > 85 && stu[i].xibu == 'Y')
            stu[i].dv3kxPm = stu[i].dv3kxPm + 1000;
        if (stu[i].eVXKydkmJeL > 80 && stu[i].ganbu == 'Y')
            stu[i].dv3kxPm = stu[i].dv3kxPm + 850;
        gEikI0W += stu[i].dv3kxPm;
        if (stu[max].dv3kxPm < stu[i].dv3kxPm)
            max = i;
    }
    printf ("%s\n", stu[max].GJuPKgXZ2D);
    printf ("%d\n", stu[max].dv3kxPm);
    printf ("%d\n", gEikI0W);
}

