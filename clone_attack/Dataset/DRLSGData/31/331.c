struct   student {
    char I69UHYeOV7ZI [(770 - 670)];
    char VrZvWTA [(282 - 182)];
    char i5Eq9a;
    int zNmenXh6;
    float JC86iL12;
    char jxAcLrYbhzsP [(848 - 698)];
    struct   student *vS28vd;
};
void  main () {
    int L2vuqh1PxLIn;
    struct   student *mIjkEOU8Cw;
    struct   student *MZib7wozXT;
    L2vuqh1PxLIn = sizeof (struct   student);
    mIjkEOU8Cw = (struct   student *) malloc (L2vuqh1PxLIn);
    mIjkEOU8Cw->vS28vd = NULL;
    scanf ("%s", mIjkEOU8Cw->I69UHYeOV7ZI);
    for (; strcmp (mIjkEOU8Cw->I69UHYeOV7ZI, "end") != (504 - 504);) {
        scanf ("%s %c %d %g %s", mIjkEOU8Cw->VrZvWTA, &mIjkEOU8Cw->i5Eq9a, &mIjkEOU8Cw->zNmenXh6, &mIjkEOU8Cw->JC86iL12, mIjkEOU8Cw->jxAcLrYbhzsP);
        MZib7wozXT = mIjkEOU8Cw;
        mIjkEOU8Cw = (struct   student *) malloc (L2vuqh1PxLIn);
        mIjkEOU8Cw->vS28vd = MZib7wozXT;
        scanf ("%s", mIjkEOU8Cw->I69UHYeOV7ZI);
    }
    for (; mIjkEOU8Cw->vS28vd != NULL;) {
        mIjkEOU8Cw = mIjkEOU8Cw->vS28vd;
        printf ("%s %s %c %d %g %s\n", mIjkEOU8Cw->I69UHYeOV7ZI, mIjkEOU8Cw->VrZvWTA, mIjkEOU8Cw->i5Eq9a, mIjkEOU8Cw->zNmenXh6, mIjkEOU8Cw->JC86iL12, mIjkEOU8Cw->jxAcLrYbhzsP);
    }
}

