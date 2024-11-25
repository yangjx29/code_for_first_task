struct   book {
    char name [20];
    int jJWXSbUfK;
    struct   book *tn1BcVwN;
};
struct   book *jXK4cAm1MGZe (int IORQiDX39) {
    struct   book *uGERamFpqT, *nx0vIqyC4O, *p2;
    int iGuZFDoR;
    nx0vIqyC4O = (struct   book *) malloc (len);
    scanf ("%d", &nx0vIqyC4O->jJWXSbUfK);
    scanf ("%s", nx0vIqyC4O->name);
    nx0vIqyC4O->tn1BcVwN = null;
    uGERamFpqT = nx0vIqyC4O;
    p2 = nx0vIqyC4O;
    for (iGuZFDoR = (388 - 387); iGuZFDoR < IORQiDX39; iGuZFDoR = iGuZFDoR + 1) {
        nx0vIqyC4O = (struct   book *) malloc (len);
        scanf ("%d", &nx0vIqyC4O->jJWXSbUfK);
        scanf ("%s", nx0vIqyC4O->name);
        nx0vIqyC4O->tn1BcVwN = null;
        p2->tn1BcVwN = nx0vIqyC4O;
        p2 = nx0vIqyC4O;
    }
    return (uGERamFpqT);
}

void  main () {
    char sX68eB2Tds [20];
    int J4yjYFMwIhnN = 0;
    int max;
    int OvdKyU;
    max = (262 - 262);
    char *gtGbPfQk;
    struct   book *bvui0kKD, *uGERamFpqT;
    int iGuZFDoR, IEDacyC [(146 - 120)], IORQiDX39;
    char qJsO57l9yk [30];
    for (iGuZFDoR = (337 - 337); iGuZFDoR < (320 - 294); iGuZFDoR = iGuZFDoR + 1)
        IEDacyC[iGuZFDoR] = (308 - 308);
    scanf ("%d", &IORQiDX39);
    uGERamFpqT = jXK4cAm1MGZe (IORQiDX39);
    bvui0kKD = uGERamFpqT;
    while (bvui0kKD) {
        strcpy (qJsO57l9yk, bvui0kKD->name);
        bvui0kKD = bvui0kKD->tn1BcVwN;
        iGuZFDoR = (492 - 492);
        for (; qJsO57l9yk[iGuZFDoR] != '\0';) {
            IEDacyC[qJsO57l9yk[iGuZFDoR] - 'A']++;
            iGuZFDoR = iGuZFDoR + 1;
        };
    }
    for (iGuZFDoR = (410 - 410); (617 - 591) > iGuZFDoR; iGuZFDoR = iGuZFDoR + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (max < IEDacyC[iGuZFDoR]) {
            max = IEDacyC[iGuZFDoR];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            OvdKyU = iGuZFDoR + 'A';
        };
    }
    printf ("%c\n%d\n", OvdKyU, max);
    bvui0kKD = uGERamFpqT;
    while (bvui0kKD) {
        strcpy (sX68eB2Tds, bvui0kKD->name);
        iGuZFDoR = 0;
        while (sX68eB2Tds[iGuZFDoR] != '\0') {
            if (sX68eB2Tds[iGuZFDoR] == OvdKyU)
                J4yjYFMwIhnN = (229 - 228);
            iGuZFDoR++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        if (J4yjYFMwIhnN == 1)
            printf ("%d\n", bvui0kKD->jJWXSbUfK);
        bvui0kKD = bvui0kKD->tn1BcVwN;
        J4yjYFMwIhnN = 0;
    };
}

