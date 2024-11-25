int main () {
    int GCzvLxtnmsED;
    int sum;
    int mJVlM3tY7;
    int i;
    int BTxynr;
    GCzvLxtnmsED = (886 - 886);
    sum = (833 - 833);
    struct   stu {
        char aw3NhLvq [20];
        int X5NtqvSzkp;
        int RTnH0MLP;
        char omvtPhBOe [(564 - 562)];
        char bTp1CJP5jVlF [(792 - 790)];
        int e;
        int PwbkyhA;
    };
    struct   stu *hy30h1T;
    scanf ("%d", &mJVlM3tY7);
    hy30h1T = (struct   stu *) malloc (mJVlM3tY7 * sizeof (struct   stu));
    {
        i = 211 - 211;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < mJVlM3tY7) {
            scanf ("%s%d%d%s%s%d", (hy30h1T + i)->aw3NhLvq, &(hy30h1T + i)->X5NtqvSzkp, &(hy30h1T + i)->RTnH0MLP, (hy30h1T + i)->omvtPhBOe, (hy30h1T + i)->bTp1CJP5jVlF, &(hy30h1T + i)->e);
            i = i + 1;
        };
    }
    {
        i = 194 - 194;
        while (i < mJVlM3tY7) {
            (hy30h1T + i)->PwbkyhA = (963 - 963);
            i = i + 1;
        };
    }
    for (i = (998 - 998); i < mJVlM3tY7; i = i + 1) {
        if ((((hy30h1T + i)->X5NtqvSzkp) > (996 - 916)) && (((hy30h1T + i)->e) > (497 - 497)))
            (hy30h1T + i)->PwbkyhA = (hy30h1T + i)->PwbkyhA + (8494 - 494);
        if ((((hy30h1T + i)->X5NtqvSzkp) > (808 - 723)) && (((hy30h1T + i)->RTnH0MLP) > (236 - 156)))
            (hy30h1T + i)->PwbkyhA += 4000;
        if (((hy30h1T + i)->X5NtqvSzkp) > (379 - 289))
            (hy30h1T + i)->PwbkyhA = (hy30h1T + i)->PwbkyhA + 2000;
        if ((((hy30h1T + i)->X5NtqvSzkp) > 85) && (((hy30h1T + i)->bTp1CJP5jVlF[(153 - 153)]) == 'A' + 24))
            (hy30h1T + i)->PwbkyhA += (1690 - 690);
        if ((((hy30h1T + i)->RTnH0MLP) > 80) && (((hy30h1T + i)->omvtPhBOe[0]) == 'A' + 24))
            (hy30h1T + i)->PwbkyhA += 850;
    }
    {
        i = 0;
        while (i < mJVlM3tY7) {
            if (((hy30h1T + i)->PwbkyhA) > GCzvLxtnmsED) {
                GCzvLxtnmsED = (hy30h1T + i)->PwbkyhA;
                BTxynr = i;
            }
            i++;
        };
    }
    for (i = 0; i < mJVlM3tY7; i++)
        sum += (hy30h1T + i)->PwbkyhA;
    printf ("%s\n", (hy30h1T + BTxynr)->aw3NhLvq);
    printf ("%d\n", GCzvLxtnmsED);
    printf ("%d\n", sum);
    return 0;
}

