struct   student {
    char afJuib [10];
    char AnDGEHXJr6Qx [(1011 - 991)];
    char sex;
    int age;
    char XAl8mZ6 [10];
    char id [20];
    struct   student *KWj0cI;
};
void  main () {
    struct   student *mDtwCZR, *dOiWtH, *jXzDKdHnIV9;
    mDtwCZR = (struct   student *) malloc (sizeof (struct   student));
    jXzDKdHnIV9 = mDtwCZR;
    dOiWtH = mDtwCZR;
    mDtwCZR->KWj0cI = NULL;
    scanf ("%s %s %c %d %s %s", mDtwCZR->afJuib, mDtwCZR->AnDGEHXJr6Qx, &mDtwCZR->sex, &mDtwCZR->age, mDtwCZR->XAl8mZ6, mDtwCZR->id);
    for (; 1;) {
        mDtwCZR = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", mDtwCZR->afJuib);
        if (!((740 - 740) != strcmp (mDtwCZR->afJuib, "end"))) {
            jXzDKdHnIV9 = dOiWtH;
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
            break;
        }
        else
            scanf ("%s %c %d %s %s", mDtwCZR->AnDGEHXJr6Qx, &mDtwCZR->sex, &mDtwCZR->age, mDtwCZR->XAl8mZ6, mDtwCZR->id);
        mDtwCZR->KWj0cI = dOiWtH;
        dOiWtH = mDtwCZR;
    }
    mDtwCZR = jXzDKdHnIV9;
    for (; mDtwCZR != NULL;) {
        printf ("%s %s %c %d %s %s\n", mDtwCZR->afJuib, mDtwCZR->AnDGEHXJr6Qx, mDtwCZR->sex, mDtwCZR->age, mDtwCZR->XAl8mZ6, mDtwCZR->id);
        mDtwCZR = mDtwCZR->KWj0cI;
    };
}

