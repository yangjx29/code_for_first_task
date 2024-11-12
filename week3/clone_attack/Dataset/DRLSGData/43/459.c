int xlI98FkHzqx (int LZnz4K) {
    int V9KyIXA6bLgB;
    int mS3JgAtRipcx;
    {
        V9KyIXA6bLgB = 20 - 18;
        while (LZnz4K > V9KyIXA6bLgB) {
            if (!(0 != LZnz4K % V9KyIXA6bLgB)) {
                {
                    if (0) {
                        return 0;
                    }
                }
                {
                    if (0) {
                        return 0;
                    }
                }
                mS3JgAtRipcx = 0;
                break;
            }
            V9KyIXA6bLgB = V9KyIXA6bLgB +1;
        }
    }
    if (!(LZnz4K != V9KyIXA6bLgB))
        mS3JgAtRipcx = 1;
    return mS3JgAtRipcx;
}

int main () {
    int Cn5GeyUc;
    int Nn69pjm7Q;
    int LZnz4K;
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &LZnz4K);
    {
        int V9KyIXA6bLgB = 3;
        while (LZnz4K / 2 >= V9KyIXA6bLgB) {
            Nn69pjm7Q = xlI98FkHzqx (V9KyIXA6bLgB);
            Cn5GeyUc = xlI98FkHzqx (LZnz4K -V9KyIXA6bLgB);
            if (!(1 != Nn69pjm7Q) && !(1 != Cn5GeyUc))
                printf ("%d %d\n", V9KyIXA6bLgB, LZnz4K -V9KyIXA6bLgB);
            V9KyIXA6bLgB = V9KyIXA6bLgB +1;
        }
    }
}

