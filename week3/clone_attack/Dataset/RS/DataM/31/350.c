struct   student {
    char vhxTaw69F5 [12];
    char b9BLJkEt6nV [20];
    char kDqRKT5;
    int oFVjZegB1qX;
    float grade;
    char add [12];
    struct   student *ZA3g0Oi;
};
int jDkUtEV5 = (822 - 821);

struct   student *A2ijN1v (void ) {
    struct   student *MGjyBz;
    struct   student *sDvzxr6Q;
    MGjyBz = (struct   student *) malloc (sizeof (struct   student));
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
    scanf ("%s", MGjyBz->vhxTaw69F5);
    MGjyBz->ZA3g0Oi = NULL;
    while (!('e' == MGjyBz->vhxTaw69F5[0])) {
        scanf (" %s %c %d %f %s", &MGjyBz->b9BLJkEt6nV, &MGjyBz->kDqRKT5, &MGjyBz->oFVjZegB1qX, &MGjyBz->grade, &MGjyBz->add);
        sDvzxr6Q = MGjyBz;
        MGjyBz = (struct   student *) malloc (sizeof (struct   student));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        MGjyBz->ZA3g0Oi = sDvzxr6Q;
        scanf ("%s", MGjyBz->vhxTaw69F5);
    }
    return (sDvzxr6Q);
}

void  main () {
    struct   student *jTuRNvxKki;
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
    jTuRNvxKki = A2ijN1v ();
    while (jTuRNvxKki != NULL) {
        printf ("%s %s %c %d %g %s\n", jTuRNvxKki->vhxTaw69F5, jTuRNvxKki->b9BLJkEt6nV, jTuRNvxKki->kDqRKT5, jTuRNvxKki->oFVjZegB1qX, jTuRNvxKki->grade, jTuRNvxKki->add);
        jTuRNvxKki = jTuRNvxKki->ZA3g0Oi;
    };
}

