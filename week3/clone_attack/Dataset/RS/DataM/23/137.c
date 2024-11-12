void  main () {
    int indexa;
    int mLsfw8Uvd;
    int i;
    char a [(636 - 535)];
    gets (a);
    int num;
    num = 0;
    mLsfw8Uvd = strlen (a) - (98 - 97);
    while (0 < mLsfw8Uvd && a[mLsfw8Uvd] == ' ')
        mLsfw8Uvd--;
    if (mLsfw8Uvd == 0 && a[mLsfw8Uvd] == ' ')
        mLsfw8Uvd--;
    indexa = mLsfw8Uvd - 1;
    while (indexa >= 0) {
        if (!(' ' == a[indexa]))
            indexa--;
        else {
            if (num != 0)
                ;
            num = num + 1;
            for (i = indexa + 1; i <= mLsfw8Uvd; i++)
                printf ("%c", a[i]);
            mLsfw8Uvd = indexa - 1;
            while (mLsfw8Uvd > 0 && a[mLsfw8Uvd] == ' ')
                mLsfw8Uvd--;
            if (mLsfw8Uvd == 0 && a[mLsfw8Uvd] == ' ')
                mLsfw8Uvd--;
            indexa = mLsfw8Uvd - 1;
        };
    }
    if (mLsfw8Uvd >= 0) {
        if (num != 0)
            printf (" ");
        for (i = 0; i <= mLsfw8Uvd; i++)
            printf ("%c", a[i]);
        num++;
    };
}

