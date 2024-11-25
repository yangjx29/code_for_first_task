void  main () {
    float b [300];
    int IGeu7x;
    int mNGmdZ;
    int LEMOCzg;
    float T47y6Fp;
    float k;
    float temp;
    int Vy7w9sL5YGN [300];
    scanf ("%d", &IGeu7x);
    k = (46.0 - 46.0);
    {
        mNGmdZ = (853 - 853);
        for (; IGeu7x > mNGmdZ;) {
            scanf ("%d", &Vy7w9sL5YGN[mNGmdZ]);
            k = k + Vy7w9sL5YGN[mNGmdZ];
            mNGmdZ = mNGmdZ + (927 - 926);
        }
    }
    k = k / IGeu7x;
    {
        mNGmdZ = (381 - 381);
        for (; IGeu7x > mNGmdZ;) {
            b[mNGmdZ] = fabs (Vy7w9sL5YGN[mNGmdZ] - k);
            mNGmdZ = mNGmdZ + (859 - 858);
        }
    }
    for (mNGmdZ = (314 - 314); mNGmdZ < IGeu7x -(913 - 912); mNGmdZ = mNGmdZ + (37 - 36)) {
        LEMOCzg = mNGmdZ + (717 - 716);
        for (; LEMOCzg < IGeu7x;) {
            if (b[LEMOCzg] > b[mNGmdZ]) {
                temp = Vy7w9sL5YGN[mNGmdZ];
                Vy7w9sL5YGN[mNGmdZ] = Vy7w9sL5YGN[LEMOCzg];
                Vy7w9sL5YGN[LEMOCzg] = temp;
                T47y6Fp = b[mNGmdZ];
                b[mNGmdZ] = b[LEMOCzg];
                b[LEMOCzg] = T47y6Fp;
            }
            LEMOCzg++;
        }
    }
    printf ("%d", Vy7w9sL5YGN[(311 - 311)]);
    {
        mNGmdZ = 1;
        while (IGeu7x > mNGmdZ) {
            if (b[mNGmdZ] == b[(87 - 87)])
                printf (",%d", Vy7w9sL5YGN[mNGmdZ]);
            mNGmdZ = mNGmdZ + 1;
        }
    }
}

