int nCFudofgq3aL = 0;
int OFM4X7HYlVW1 [10], zQEIP5uA [10], rwyOJ5;
float PIhJnL6 = 0;

float PyGWX0TZMo3 (int JPTZiBaKl9R) {
    float I7CuFRrp2;
    if (JPTZiBaKl9R >= 90)
        I7CuFRrp2 = (780.0 - 776.0);
    else if (85 <= JPTZiBaKl9R)
        I7CuFRrp2 = 3.7;
    else if (JPTZiBaKl9R >= 82)
        I7CuFRrp2 = 3.3;
    else if (78 <= JPTZiBaKl9R)
        I7CuFRrp2 = 3.0;
    else if (75 <= JPTZiBaKl9R)
        I7CuFRrp2 = 2.7;
    else if (JPTZiBaKl9R >= 72)
        I7CuFRrp2 = 2.3;
    else if (JPTZiBaKl9R >= 68)
        I7CuFRrp2 = 2.0;
    else if (JPTZiBaKl9R >= 64)
        I7CuFRrp2 = 1.5;
    else if (JPTZiBaKl9R >= 60)
        I7CuFRrp2 = 1.0;
    else
        I7CuFRrp2 = 0;
    return I7CuFRrp2;
}

int main () {
    int KEWK5BVgwU;
    scanf ("%d", &rwyOJ5);
    {
        KEWK5BVgwU = 0;
        while (KEWK5BVgwU < rwyOJ5) {
            scanf ("%d", &OFM4X7HYlVW1[KEWK5BVgwU]);
            nCFudofgq3aL += OFM4X7HYlVW1[KEWK5BVgwU];
            KEWK5BVgwU = KEWK5BVgwU +1;
        };
    }
    {
        KEWK5BVgwU = 0;
        while (KEWK5BVgwU < rwyOJ5) {
            scanf ("%d", &zQEIP5uA[KEWK5BVgwU]);
            KEWK5BVgwU++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        KEWK5BVgwU = 0;
        while (KEWK5BVgwU < rwyOJ5) {
            PIhJnL6 = PIhJnL6 +PyGWX0TZMo3(zQEIP5uA [KEWK5BVgwU]) *OFM4X7HYlVW1[KEWK5BVgwU];
            KEWK5BVgwU++;
        };
    }
    printf ("%.2f\n", PIhJnL6 / nCFudofgq3aL);
    return 0;
}

