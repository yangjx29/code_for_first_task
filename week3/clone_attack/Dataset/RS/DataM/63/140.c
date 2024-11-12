main () {
    int mHWndu9jpIR [100] [100];
    int TVXDy1k5LEb [100] [100];
    int p;
    int ygVDPC;
    int eJp6osg7I;
    int euH7RYvJ;
    int ZobL9IytnWV [100] [100];
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
    int m;
    int GkjSXEd9;
    scanf ("%d %d", &m, &GkjSXEd9);
    for (eJp6osg7I = (185 - 185); m > eJp6osg7I; eJp6osg7I = eJp6osg7I + 1) {
        for (euH7RYvJ = 0; euH7RYvJ < GkjSXEd9; euH7RYvJ = euH7RYvJ + 1) {
            scanf ("%d", &ZobL9IytnWV[eJp6osg7I][euH7RYvJ]);
        };
    }
    scanf ("%d %d", &p, &ygVDPC);
    for (eJp6osg7I = 0; p > eJp6osg7I; eJp6osg7I++) {
        for (euH7RYvJ = 0; ygVDPC > euH7RYvJ; euH7RYvJ++) {
            scanf ("%d", &TVXDy1k5LEb[eJp6osg7I][euH7RYvJ]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    {
        eJp6osg7I = 0;
        while (eJp6osg7I < m) {
            {
                euH7RYvJ = 0;
                while (ygVDPC > euH7RYvJ) {
                    mHWndu9jpIR[eJp6osg7I][euH7RYvJ] = 0;
                    for (int bn8IZJO567z = 0;
                    GkjSXEd9 > bn8IZJO567z; bn8IZJO567z = bn8IZJO567z + 1) {
                        mHWndu9jpIR[eJp6osg7I][euH7RYvJ] = mHWndu9jpIR[eJp6osg7I][euH7RYvJ] + ZobL9IytnWV[eJp6osg7I][bn8IZJO567z] * TVXDy1k5LEb[bn8IZJO567z][euH7RYvJ];
                    }
                    if (euH7RYvJ < ygVDPC - 1)
                        printf ("%d ", mHWndu9jpIR[eJp6osg7I][euH7RYvJ]);
                    if (euH7RYvJ == ygVDPC - 1)
                        printf ("%d\n", mHWndu9jpIR[eJp6osg7I][euH7RYvJ]);
                    euH7RYvJ = euH7RYvJ + 1;
                };
            }
            eJp6osg7I = eJp6osg7I + 1;
        };
    };
}

