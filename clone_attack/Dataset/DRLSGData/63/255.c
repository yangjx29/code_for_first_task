int main () {
    int F26z9UGPq;
    int ujE2Hbf;
    int vIgy8vKik2l;
    int BRvfZN;
    int KolXOtP;
    int yPItkuQEnqUw;
    int aJ9rsNHjyTzM [100] [100];
    int UxB1ZhmLQJSV [100] [100];
    int y3hX76Sj [100] [100] = {0};
    int SlbQaXk6Vz;
    scanf ("%d %d", &F26z9UGPq, &ujE2Hbf);
    {
        BRvfZN = 0;
        while (F26z9UGPq > BRvfZN) {
            for (KolXOtP = 0; KolXOtP < ujE2Hbf; KolXOtP = KolXOtP +1) {
                scanf ("%d", &aJ9rsNHjyTzM[BRvfZN][KolXOtP]);
            }
            BRvfZN = BRvfZN +1;
        }
    }
    scanf ("%d %d", &SlbQaXk6Vz, &vIgy8vKik2l);
    for (BRvfZN = 0; BRvfZN < SlbQaXk6Vz; BRvfZN = BRvfZN +1) {
        KolXOtP = 0;
        while (vIgy8vKik2l > KolXOtP) {
            scanf ("%d", &UxB1ZhmLQJSV[BRvfZN][KolXOtP]);
            KolXOtP = KolXOtP +1;
        }
    }
    for (BRvfZN = 0; F26z9UGPq > BRvfZN; BRvfZN = BRvfZN +1) {
        KolXOtP = 0;
        while (KolXOtP < vIgy8vKik2l) {
            for (yPItkuQEnqUw = 0; ujE2Hbf > yPItkuQEnqUw; yPItkuQEnqUw = yPItkuQEnqUw + 1) {
                y3hX76Sj[BRvfZN][KolXOtP] += aJ9rsNHjyTzM[BRvfZN][yPItkuQEnqUw] * UxB1ZhmLQJSV[yPItkuQEnqUw][KolXOtP];
            }
            KolXOtP = KolXOtP +1;
        }
    }
    for (BRvfZN = 0; F26z9UGPq > BRvfZN; BRvfZN++) {
        KolXOtP = 0;
        while (KolXOtP < vIgy8vKik2l) {
            if (!(1 != vIgy8vKik2l))
                printf ("%d\n", y3hX76Sj[BRvfZN][KolXOtP]);
            else {
                if (KolXOtP == 0)
                    printf ("%d", y3hX76Sj[BRvfZN][KolXOtP]);
                else {
                    if (KolXOtP == vIgy8vKik2l - 1)
                        printf (" %d\n", y3hX76Sj[BRvfZN][KolXOtP]);
                    else
                        printf (" %d", y3hX76Sj[BRvfZN][KolXOtP]);
                }
            }
            KolXOtP = KolXOtP +1;
        }
    }
    return 0;
}

