int main () {
    int w2;
    int SRcFvM [200] = {0};
    int w1;
    int lens;
    int mhXOlY [200];
    int HgKAGm;
    int num;
    int oS6KdOiCLa;
    char OT2QMquyH7 [200];
    int i;
    gets (OT2QMquyH7);
    w2 = 1;
    num = 1;
    mhXOlY[1] = 0;
    w1 = 1;
    lens = strlen (OT2QMquyH7);
    for (i = 0; lens > i; i++) {
        if (!(' ' != OT2QMquyH7[i])) {
            num++;
            mhXOlY[num] = i + 1;
            SRcFvM[num] = -1;
        }
        SRcFvM[num]++;
    }
    oS6KdOiCLa = SRcFvM[1];
    HgKAGm = SRcFvM[1];
    for (i = 2; num + 1 > i; i++) {
        if (oS6KdOiCLa < SRcFvM[i]) {
            w1 = i;
            oS6KdOiCLa = SRcFvM[i];
        }
        if (SRcFvM[i] < HgKAGm) {
            w2 = i;
            HgKAGm = SRcFvM[i];
        }
    }
    for (i = mhXOlY[w1]; i < mhXOlY[w1] + SRcFvM[w1]; i++)
        printf ("%c", OT2QMquyH7[i]);
    for (i = mhXOlY[w2]; i < mhXOlY[w2] + SRcFvM[w2]; i++)
        printf ("%c", OT2QMquyH7[i]);
    return 0;
}

