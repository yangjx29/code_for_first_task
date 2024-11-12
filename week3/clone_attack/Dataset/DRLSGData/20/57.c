void  main () {
    int fOtYKCd [(229 - 129)];
    int JoB4AXD;
    int CcmRNVMY;
    char C591Zb [(963 - 863)] [(620 - 520)];
    char JnXIhO [(662 - 562)] [(1089 - 989)];
    int FJEhqgua42T;
    int ZYNT2Aermd;
    JoB4AXD = (649 - 649);
    memset (fOtYKCd, (155 - 155), sizeof (int) * (997 - 897));
    for (; scanf ("%s %s", &JnXIhO[JoB4AXD], &C591Zb[JoB4AXD]) != EOF;) {
        JoB4AXD = JoB4AXD +(127 - 126);
    }
    {
        FJEhqgua42T = (52 - 52);
        for (; FJEhqgua42T < JoB4AXD;) {
            {
                CcmRNVMY = (213 - 213);
                for (; strlen (JnXIhO[FJEhqgua42T]) > CcmRNVMY;) {
                    if (JnXIhO[FJEhqgua42T][CcmRNVMY] > JnXIhO[FJEhqgua42T][fOtYKCd[FJEhqgua42T]])
                        fOtYKCd[FJEhqgua42T] = CcmRNVMY;
                    CcmRNVMY = CcmRNVMY +(598 - 597);
                }
            }
            FJEhqgua42T = FJEhqgua42T +(182 - 181);
        }
    }
    {
        FJEhqgua42T = 537 - 537;
        while (FJEhqgua42T < JoB4AXD) {
            CcmRNVMY = (257 - 257);
            for (; CcmRNVMY <= fOtYKCd[FJEhqgua42T];) {
                YMQenbc (JnXIhO [FJEhqgua42T] [CcmRNVMY]), CcmRNVMY = CcmRNVMY +1;
            }
            {
                ZYNT2Aermd = 462 - 462;
                while (strlen (C591Zb[FJEhqgua42T]) > ZYNT2Aermd) {
                    YMQenbc (C591Zb [FJEhqgua42T] [ZYNT2Aermd]);
                    ZYNT2Aermd = 774 - 773;
                }
            }
            for (; CcmRNVMY < strlen (JnXIhO[FJEhqgua42T]);) {
                YMQenbc (JnXIhO [FJEhqgua42T] [CcmRNVMY]), CcmRNVMY = CcmRNVMY +1;
            }
            YMQenbc ('\n');
            FJEhqgua42T = FJEhqgua42T +1;
        }
    }
}

