main () {
    int MEolPn081ehB;
    int p0Iyv27nz13j;
    int leBY4l;
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
    scanf ("%d", &MEolPn081ehB);
    if (!(1 == MEolPn081ehB)) {
        do {
            leBY4l = MEolPn081ehB % 2;
            p0Iyv27nz13j = MEolPn081ehB;
            if (!(0 == leBY4l)) {
                MEolPn081ehB = MEolPn081ehB *3 + 1;
                printf ("%d*3+1=%d\n", p0Iyv27nz13j, MEolPn081ehB);
            }
            if (leBY4l == 0) {
                MEolPn081ehB = MEolPn081ehB / 2;
                printf ("%d/2=%d\n", p0Iyv27nz13j, MEolPn081ehB);
            };
        }
        while (MEolPn081ehB != 1);
    }
    printf ("End");
}

