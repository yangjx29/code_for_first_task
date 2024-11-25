int main () {
    int j;
    int YsMNhnI;
    int l0mJZyFkA6S;
    int T7MtKzH;
    int NMr7ktLUNjB;
    int b5zdv9t1Qal;
    struct   B3dYcGs {
        char KmaTyqjvOPc [20];
        int uWR3yk;
        int FLc1oPjDryKE;
        char R6jrUo;
        char jTo8GzS;
        int yEAYz10b8t;
    }
    B3dYcGs [20000];
    j = 0;
    scanf ("%d", &NMr7ktLUNjB);
    b5zdv9t1Qal = 0;
    for (T7MtKzH = 0; T7MtKzH < NMr7ktLUNjB; T7MtKzH++) {
        l0mJZyFkA6S = 0;
        scanf ("%s %d %d %c %c %d", B3dYcGs[T7MtKzH].KmaTyqjvOPc, &B3dYcGs[T7MtKzH].uWR3yk, &B3dYcGs[T7MtKzH].FLc1oPjDryKE, &B3dYcGs[T7MtKzH].R6jrUo, &B3dYcGs[T7MtKzH].jTo8GzS, &B3dYcGs[T7MtKzH].yEAYz10b8t);
        if (80 < B3dYcGs[T7MtKzH].uWR3yk && B3dYcGs[T7MtKzH].yEAYz10b8t > 0)
            l0mJZyFkA6S = l0mJZyFkA6S + 8000;
        if (B3dYcGs[T7MtKzH].uWR3yk > 85 && B3dYcGs[T7MtKzH].FLc1oPjDryKE > 80)
            l0mJZyFkA6S = l0mJZyFkA6S + 4000;
        if (90 < B3dYcGs[T7MtKzH].uWR3yk)
            l0mJZyFkA6S = l0mJZyFkA6S + 2000;
        if (B3dYcGs[T7MtKzH].uWR3yk > 85 && B3dYcGs[T7MtKzH].jTo8GzS == 'Y')
            l0mJZyFkA6S = l0mJZyFkA6S + 1000;
        if (B3dYcGs[T7MtKzH].FLc1oPjDryKE > 80 && B3dYcGs[T7MtKzH].R6jrUo == 'Y')
            l0mJZyFkA6S = l0mJZyFkA6S + 850;
        b5zdv9t1Qal = b5zdv9t1Qal + l0mJZyFkA6S;
        if (l0mJZyFkA6S > j) {
            j = l0mJZyFkA6S;
            YsMNhnI = T7MtKzH;
        }
    }
    printf ("%s\n", B3dYcGs[YsMNhnI].KmaTyqjvOPc);
    printf ("%d\n", j);
    printf ("%d", b5zdv9t1Qal);
    return 0;
}

