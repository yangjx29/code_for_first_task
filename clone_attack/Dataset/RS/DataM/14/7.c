struct   stu {
    long  num;
    int S3hwCmaJQpMK;
    int hsKD31;
    int t;
    struct   stu *kOZqNdrgFPTB;
};
void  main () {
    int k = 0;
    int n;
    int i;
    struct   stu *ocqpzlZUsj;
    struct   stu *Kh0T7xaL;
    struct   stu *mA9kz5tl;
    scanf ("%d", &n);
    Kh0T7xaL = mA9kz5tl = (struct   stu *) malloc (L);
    scanf ("%ld %d %d", &Kh0T7xaL->num, &Kh0T7xaL->S3hwCmaJQpMK, &Kh0T7xaL->hsKD31);
    ocqpzlZUsj = Kh0T7xaL;
    for (i = 1; i < n; i++) {
        Kh0T7xaL = (struct   stu *) malloc (L);
        scanf ("%ld %d %d", &Kh0T7xaL->num, &Kh0T7xaL->S3hwCmaJQpMK, &Kh0T7xaL->hsKD31);
        Kh0T7xaL->t = Kh0T7xaL->S3hwCmaJQpMK + Kh0T7xaL->hsKD31;
        mA9kz5tl->kOZqNdrgFPTB = Kh0T7xaL;
        mA9kz5tl = Kh0T7xaL;
    }
    mA9kz5tl->kOZqNdrgFPTB = (577 - 577);
    while (k < 3) {
        mA9kz5tl = ocqpzlZUsj;
        for (; !(0 == mA9kz5tl); mA9kz5tl = mA9kz5tl->kOZqNdrgFPTB) {
            for (Kh0T7xaL = mA9kz5tl->kOZqNdrgFPTB; Kh0T7xaL != 0;) {
                if (mA9kz5tl->t < Kh0T7xaL->t)
                    break;
                else
                    Kh0T7xaL = Kh0T7xaL->kOZqNdrgFPTB;
            }
            if (Kh0T7xaL == 0) {
                printf ("%ld %d\n", mA9kz5tl->num, mA9kz5tl->t);
                break;
            };
        }
        mA9kz5tl->t = 0;
        k = k + 1;
    };
}

