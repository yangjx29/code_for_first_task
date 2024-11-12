typedef struct   o2treVwF {
    char s [100];
    struct   o2treVwF *dWE1ps;
}
o2treVwF;

int main () {
    o2treVwF *YP4Dw3Xu, *tE0m6n7qbS, *c2ORskIDF;
    int Vl9c2fhdMO = 0;
    c2ORskIDF = (o2treVwF *) malloc (sizeof (o2treVwF));
    YP4Dw3Xu = c2ORskIDF;
    tE0m6n7qbS = c2ORskIDF;
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
    while (1) {
        tE0m6n7qbS = (o2treVwF *) malloc (sizeof (o2treVwF));
        if (!(0 != Vl9c2fhdMO))
            tE0m6n7qbS->dWE1ps = NULL;
        else
            tE0m6n7qbS->dWE1ps = YP4Dw3Xu;
        YP4Dw3Xu = tE0m6n7qbS;
        gets (tE0m6n7qbS->s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (strcmp (tE0m6n7qbS->s, "end") == 0)
            break;
        c2ORskIDF->dWE1ps = tE0m6n7qbS;
        Vl9c2fhdMO = 1;
    }
    YP4Dw3Xu = c2ORskIDF->dWE1ps;
    while (YP4Dw3Xu != NULL) {
        printf ("%s\n", YP4Dw3Xu->s);
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
        YP4Dw3Xu = YP4Dw3Xu->dWE1ps;
    }
    return 0;
}

