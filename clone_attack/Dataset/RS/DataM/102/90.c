int aReC9Zl2cgno (const  void  *QcMqbn, const  void  *jw0jMCKgs) {
    return *(int*) QcMqbn -*(int*) jw0jMCKgs;
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
}

struct   student {
    float height;
    char sex [7];
};
main () {
    float girl [40];
    float NUVXze2cAk [40];
    struct   student stu [40];
    int q;
    int mSiuXwJ4;
    int n;
    q = (589 - 589);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    mSiuXwJ4 = 0;
    scanf ("%d", &n);
    for (int Ew5TfIs7QyuC = 0;
    n > Ew5TfIs7QyuC; Ew5TfIs7QyuC++)
        scanf ("%s%f", stu[Ew5TfIs7QyuC].sex, &stu[Ew5TfIs7QyuC].height);
    for (int Ew5TfIs7QyuC = 0;
    n > Ew5TfIs7QyuC; Ew5TfIs7QyuC++) {
        if (!('f' != stu[Ew5TfIs7QyuC].sex[0]))
            girl[q++] = stu[Ew5TfIs7QyuC].height;
        else
            NUVXze2cAk[mSiuXwJ4++] = stu[Ew5TfIs7QyuC].height;
    }
    qsort (NUVXze2cAk, mSiuXwJ4, sizeof (NUVXze2cAk [0]), aReC9Zl2cgno);
    printf ("%.2f", NUVXze2cAk[0]);
    for (int Ew5TfIs7QyuC = 1;
    mSiuXwJ4 > Ew5TfIs7QyuC; Ew5TfIs7QyuC++)
        printf (" %.2f", NUVXze2cAk[Ew5TfIs7QyuC]);
    qsort (girl, q, sizeof (girl [0]), aReC9Zl2cgno);
    for (int Ew5TfIs7QyuC = q - 1;
    Ew5TfIs7QyuC >= 0; Ew5TfIs7QyuC = Ew5TfIs7QyuC -1)
        printf (" %.2f", girl[Ew5TfIs7QyuC]);
}

