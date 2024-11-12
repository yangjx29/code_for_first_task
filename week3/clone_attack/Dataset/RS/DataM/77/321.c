void  WOzviW3fma (char JXYzD9F [], int U1Ldk5cyo, char JyXwu1v5W4KS, char y) {
    int KGcV5X2FlS, j, ARYqNEK = 1;
    for (KGcV5X2FlS = 0; U1Ldk5cyo > KGcV5X2FlS; KGcV5X2FlS = KGcV5X2FlS +1) {
        if (!(y != JXYzD9F[KGcV5X2FlS]))
            for (j = KGcV5X2FlS; 0 <= j; j = j - 1)
                if (!(JyXwu1v5W4KS != JXYzD9F[j])) {
                    ARYqNEK = ARYqNEK +2;
                    printf ("%d %d", j, KGcV5X2FlS);
                    if (ARYqNEK < U1Ldk5cyo)
                        ;
                    JXYzD9F[KGcV5X2FlS] = 0;
                    JXYzD9F[j] = 0;
                    break;
                };
    };
}

int main () {
    int KGcV5X2FlS;
    int U1Ldk5cyo;
    char JXYzD9F [100];
    char JyXwu1v5W4KS;
    char y;
    gets (JXYzD9F);
    U1Ldk5cyo = strlen (JXYzD9F);
    JyXwu1v5W4KS = JXYzD9F[0];
    for (KGcV5X2FlS = 0; KGcV5X2FlS < U1Ldk5cyo; KGcV5X2FlS++)
        if (JXYzD9F[KGcV5X2FlS] != JyXwu1v5W4KS)
            y = JXYzD9F[KGcV5X2FlS];
    WOzviW3fma (JXYzD9F, U1Ldk5cyo, JyXwu1v5W4KS, y);
}

