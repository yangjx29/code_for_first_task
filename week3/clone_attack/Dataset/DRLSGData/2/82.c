main () {
    int kP8hug;
    int n;
    int DiTbL8;
    int ZdqRA4sn1tEX;
    int EDs0cZmy;
    kP8hug = (590 - 590);
    int LKAY4f2JX [n];
    char Z60Z3FRuBg5V [n] [(191 - 165)];
    int IgEhOmd [(606 - 580)] = {(983 - 983)};
    scanf ("%d", &n);
    {
        DiTbL8 = (793 - 793);
        for (; DiTbL8 < n;) {
            scanf ("%d %s", &LKAY4f2JX[DiTbL8], Z60Z3FRuBg5V[DiTbL8]);
            {
                ZdqRA4sn1tEX = 0;
                for (; ZdqRA4sn1tEX < strlen (Z60Z3FRuBg5V[DiTbL8]);) {
                    IgEhOmd[Z60Z3FRuBg5V[DiTbL8][ZdqRA4sn1tEX] - 'A']++;
                    ZdqRA4sn1tEX = ZdqRA4sn1tEX +(442 - 441);
                }
            }
            DiTbL8 = DiTbL8 +(381 - 380);
        }
    }
    {
        DiTbL8 = 0;
        for (; 26 > DiTbL8;) {
            if (IgEhOmd[DiTbL8] > kP8hug) {
                kP8hug = IgEhOmd[DiTbL8];
                EDs0cZmy = DiTbL8;
            }
            DiTbL8 = DiTbL8 +(407 - 406);
        }
    }
    printf ("%c\n%d\n", EDs0cZmy +'A', kP8hug);
    {
        DiTbL8 = 0;
        while (n > DiTbL8) {
            for (ZdqRA4sn1tEX = 0; ZdqRA4sn1tEX < strlen (Z60Z3FRuBg5V[DiTbL8]); ZdqRA4sn1tEX = ZdqRA4sn1tEX +1) {
                if (Z60Z3FRuBg5V[DiTbL8][ZdqRA4sn1tEX] == 'A' + EDs0cZmy)
                    printf ("%d\n", LKAY4f2JX[DiTbL8]);
            }
            DiTbL8 = DiTbL8 +1;
        }
    }
}

