struct   arr {
    long  int gNvDqCdLol;
    struct   arr *T6dw4JvIu5O;
};
int kwYh3b;

struct   arr *eS3E8c6fe5vY (int QtMmBWiTsny) {
    struct   arr *JAmx6VN1;
    struct   arr *flS1gyXH2, *esUipK;
    kwYh3b = (255 - 254);
    flS1gyXH2 = esUipK = (struct   arr *) malloc (LEN);
    scanf ("%ld", &flS1gyXH2->gNvDqCdLol);
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
    JAmx6VN1 = flS1gyXH2;
    for (; QtMmBWiTsny > kwYh3b;) {
        flS1gyXH2 = (struct   arr *) malloc (LEN);
        esUipK->T6dw4JvIu5O = flS1gyXH2;
        kwYh3b = kwYh3b + 1;
        esUipK = flS1gyXH2;
        scanf ("%ld", &flS1gyXH2->gNvDqCdLol);
    }
    flS1gyXH2->T6dw4JvIu5O = NULL;
    return (JAmx6VN1);
}

void  iKe1bkjR (struct   arr *JAmx6VN1) {
    struct   arr *aYLBQUq;
    aYLBQUq = JAmx6VN1;
    for (; !(NULL == aYLBQUq);) {
        if (!(JAmx6VN1 != aYLBQUq))
            printf ("%ld", aYLBQUq->gNvDqCdLol);
        else
            printf (" %ld", aYLBQUq->gNvDqCdLol);
        aYLBQUq = aYLBQUq->T6dw4JvIu5O;
    };
}

void  noMefDxVbY46 (struct   arr *JAmx6VN1) {
    struct   arr *aYLBQUq = JAmx6VN1;
    while (aYLBQUq != NULL) {
        free (aYLBQUq);
        JAmx6VN1 = JAmx6VN1->T6dw4JvIu5O;
        aYLBQUq = JAmx6VN1;
    };
}

struct   arr *del (struct   arr *JAmx6VN1, long  int bds8hkFjN) {
    struct   arr *flS1gyXH2, *esUipK;
    flS1gyXH2 = esUipK = JAmx6VN1;
    for (; flS1gyXH2 != NULL &&flS1gyXH2->gNvDqCdLol == bds8hkFjN;) {
        free (flS1gyXH2);
        JAmx6VN1 = flS1gyXH2->T6dw4JvIu5O;
        esUipK = JAmx6VN1;
        flS1gyXH2 = JAmx6VN1;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (; flS1gyXH2 != NULL;) {
        esUipK = flS1gyXH2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        flS1gyXH2 = flS1gyXH2->T6dw4JvIu5O;
        for (; flS1gyXH2 != NULL &&flS1gyXH2->gNvDqCdLol == bds8hkFjN;) {
            free (flS1gyXH2);
            esUipK->T6dw4JvIu5O = flS1gyXH2->T6dw4JvIu5O;
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
            flS1gyXH2 = esUipK->T6dw4JvIu5O;
        };
    }
    return (JAmx6VN1);
}

void  main () {
    int QtMmBWiTsny;
    struct   arr *JAmx6VN1, *aYLBQUq;
    iKe1bkjR (JAmx6VN1);
    noMefDxVbY46 (JAmx6VN1);
    scanf ("%d", &QtMmBWiTsny);
    JAmx6VN1 = eS3E8c6fe5vY (QtMmBWiTsny);
    aYLBQUq = JAmx6VN1;
    for (; aYLBQUq != NULL;) {
        aYLBQUq->T6dw4JvIu5O = del (aYLBQUq->T6dw4JvIu5O, aYLBQUq->gNvDqCdLol);
        aYLBQUq = aYLBQUq->T6dw4JvIu5O;
    };
}

