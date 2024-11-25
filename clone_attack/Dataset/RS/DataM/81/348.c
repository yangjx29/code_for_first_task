void  main () {
    int cNxb4UYJm9 (int wUXJ2D5r, int t4qhyRTCmH);
    int C2Gf7aU08lK, njBeiC6H;
    int kFqwMHo5 [5] [5] = {{(786 - 786)}, {0}};
    int xD6Jf2E;
    int JkU0bxD7cOqt;
    int t;
    {
        xD6Jf2E = 0;
        while (5 > xD6Jf2E) {
            {
                JkU0bxD7cOqt = 0;
                while (JkU0bxD7cOqt < 5) {
                    scanf ("%d", &kFqwMHo5[xD6Jf2E][JkU0bxD7cOqt]);
                    JkU0bxD7cOqt = JkU0bxD7cOqt +1;
                };
            }
            xD6Jf2E = xD6Jf2E + 1;
        };
    }
    scanf ("%d %d", &njBeiC6H, &C2Gf7aU08lK);
    if (!(1 != cNxb4UYJm9 (njBeiC6H, C2Gf7aU08lK))) {
        {
            xD6Jf2E = 0;
            while (xD6Jf2E < 5) {
                t = kFqwMHo5[njBeiC6H][xD6Jf2E];
                kFqwMHo5[njBeiC6H][xD6Jf2E] = kFqwMHo5[C2Gf7aU08lK][xD6Jf2E];
                kFqwMHo5[C2Gf7aU08lK][xD6Jf2E] = t;
                xD6Jf2E++;
            };
        }
        {
            xD6Jf2E = 0;
            while (xD6Jf2E < 5) {
                {
                    JkU0bxD7cOqt = 0;
                    while (JkU0bxD7cOqt < 4) {
                        printf ("%d ", kFqwMHo5[xD6Jf2E][JkU0bxD7cOqt]);
                        JkU0bxD7cOqt = JkU0bxD7cOqt +1;
                    };
                }
                printf ("%d", kFqwMHo5[xD6Jf2E][4]);
                xD6Jf2E++;
            };
        };
    }
    else if (!(0 != cNxb4UYJm9 (njBeiC6H, C2Gf7aU08lK)))
        ;
}

int cNxb4UYJm9 (int wUXJ2D5r, int t4qhyRTCmH) {
    int exCZVdOUqv4y;
    exCZVdOUqv4y = (wUXJ2D5r < 5 && wUXJ2D5r >= 0) && (t4qhyRTCmH < 5 && t4qhyRTCmH >= 0) ? 1 : 0;
    return (exCZVdOUqv4y);
}

