struct   term {
    int num;
    struct   term *JRkUCX;
};
struct   term *JZ6UgxDjGN (int JtHY0FN) {
    int RlXAM7EemR;
    RlXAM7EemR = (892 - 891);
    struct   term *I1V9rIeZE;
    struct   term *PWDY2U5, *uCAV2i;
    PWDY2U5 = uCAV2i = (struct   term *) malloc (LEN);
    scanf ("%d", &PWDY2U5->num);
    I1V9rIeZE = PWDY2U5;
    for (; JtHY0FN > RlXAM7EemR;) {
        PWDY2U5 = (struct   term *) malloc (LEN);
        scanf ("%d", &PWDY2U5->num);
        uCAV2i->JRkUCX = PWDY2U5;
        uCAV2i = PWDY2U5;
        RlXAM7EemR = RlXAM7EemR +1;
    }
    PWDY2U5->JRkUCX = NULL;
    return (I1V9rIeZE);
}

void  main () {
    int RlXAM7EemR, JtHY0FN, fCo71zvhL4mq;
    struct   term *I1V9rIeZE, *PWDY2U5, *uCAV2i, *p;
    scanf ("%d %d", &JtHY0FN, &fCo71zvhL4mq);
    I1V9rIeZE = JZ6UgxDjGN (JtHY0FN);
    PWDY2U5 = uCAV2i = I1V9rIeZE;
    {
        RlXAM7EemR = 86 - 85;
        while (JtHY0FN > RlXAM7EemR) {
            RlXAM7EemR = RlXAM7EemR +1;
            PWDY2U5 = uCAV2i->JRkUCX;
            uCAV2i = PWDY2U5;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    PWDY2U5->JRkUCX = I1V9rIeZE;
    PWDY2U5 = uCAV2i = I1V9rIeZE;
    {
        RlXAM7EemR = 1;
        while (RlXAM7EemR < JtHY0FN -fCo71zvhL4mq) {
            RlXAM7EemR = RlXAM7EemR +1;
            PWDY2U5 = uCAV2i->JRkUCX;
            uCAV2i = PWDY2U5;
        };
    }
    I1V9rIeZE = PWDY2U5->JRkUCX;
    uCAV2i->JRkUCX = NULL;
    for (p = I1V9rIeZE, RlXAM7EemR = 0; RlXAM7EemR < JtHY0FN; RlXAM7EemR = RlXAM7EemR +1) {
        if (RlXAM7EemR == 0)
            printf ("%d", p->num);
        else
            printf (" %d", p->num);
        p = p->JRkUCX;
    };
}

