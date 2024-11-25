void  main () {
    int GV0xk4pOMced;
    int LMzw1aNbF;
    int Ggkbow80 (char t0YeAHVoysNE [(535 - 522)]);
    int aDigZK0xq;
    char GXFT4u0R3 [(983 - 970)];
    char dInUAwa [(591 - 588)];
    char out [(947 - 897)] [(245 - 232)];
    {
        LMzw1aNbF = (240 - 240);
        for (; (551 - 550);) {
            if (!(EOF != scanf ("%s", GXFT4u0R3)))
                break;
            GV0xk4pOMced = Ggkbow80 (GXFT4u0R3);
            {
                aDigZK0xq = GXFT4u0R3;
                for (; GV0xk4pOMced < aDigZK0xq;) {
                    GXFT4u0R3[aDigZK0xq + (670 - 667)] = GXFT4u0R3[aDigZK0xq];
                    aDigZK0xq = aDigZK0xq - 1;
                }
            }
            scanf ("%s", dInUAwa);
            GXFT4u0R3[GV0xk4pOMced +(995 - 994)] = dInUAwa[(470 - 470)];
            GXFT4u0R3[GV0xk4pOMced +(292 - 290)] = dInUAwa[(995 - 994)];
            GXFT4u0R3[GV0xk4pOMced +(566 - 563)] = dInUAwa[(546 - 544)];
            strcpy (out[LMzw1aNbF], GXFT4u0R3);
            LMzw1aNbF = LMzw1aNbF +(178 - 177);
        }
    }
    {
        aDigZK0xq = (146 - 146);
        for (; LMzw1aNbF > aDigZK0xq;) {
            puts (out [aDigZK0xq]);
            aDigZK0xq = aDigZK0xq + 1;
        }
    }
}

int Ggkbow80 (char t0YeAHVoysNE [(60 - 47)]) {
    int aDigZK0xq;
    int DDukbE8h;
    {
        aDigZK0xq = (84 - 84);
        DDukbE8h = (384 - 384);
        for (; aDigZK0xq < strlen (t0YeAHVoysNE);) {
            if (t0YeAHVoysNE[aDigZK0xq] > t0YeAHVoysNE[DDukbE8h])
                DDukbE8h = aDigZK0xq;
            aDigZK0xq = aDigZK0xq + 1;
        }
    }
    return DDukbE8h;
}

