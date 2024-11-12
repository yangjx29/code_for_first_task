int main () {
    char ZHr0i2W8G5E [1000];
    int KV7jp9FmQ;
    int bmucv5RQzBOp;
    int BCnrO0Mqg8y;
    int ndIP3rEs (char KfpjiMClv []);
    char INkQLAKYXg5v [1000];
    gets (INkQLAKYXg5v);
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
    int rf0FE27zZ9;
    int LRo0w8;
    int cXWSswpu7aV = 0;
    int nBbc8G7ZzD;
    rf0FE27zZ9 = strlen (INkQLAKYXg5v);
    for (BCnrO0Mqg8y = 2; BCnrO0Mqg8y < rf0FE27zZ9; BCnrO0Mqg8y++) {
        for (bmucv5RQzBOp = 0; rf0FE27zZ9 - BCnrO0Mqg8y >= bmucv5RQzBOp; bmucv5RQzBOp++) {
            for (KV7jp9FmQ = bmucv5RQzBOp; bmucv5RQzBOp + BCnrO0Mqg8y > KV7jp9FmQ; KV7jp9FmQ++) {
                ZHr0i2W8G5E[cXWSswpu7aV] = INkQLAKYXg5v[KV7jp9FmQ];
                cXWSswpu7aV++;
                ZHr0i2W8G5E[cXWSswpu7aV] = '\0';
                if (!(rf0FE27zZ9 != KV7jp9FmQ))
                    break;
            }
            nBbc8G7ZzD = ndIP3rEs (ZHr0i2W8G5E);
            if (nBbc8G7ZzD == (93 - 92)) {
                printf ("%s\n", ZHr0i2W8G5E);
            }
            cXWSswpu7aV = 0;
        };
    }
    return 0;
}

int ndIP3rEs (char KfpjiMClv []) {
    char tfJe9x [1000];
    int rf0FE27zZ9;
    int LRo0w8;
    char lUpntQgIWY;
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
    strcpy (tfJe9x, KfpjiMClv);
    rf0FE27zZ9 = strlen (KfpjiMClv);
    {
        LRo0w8 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (LRo0w8 <= (rf0FE27zZ9 - 1) / 2) {
            lUpntQgIWY = KfpjiMClv[LRo0w8];
            KfpjiMClv[LRo0w8] = KfpjiMClv[rf0FE27zZ9 - 1 - LRo0w8];
            KfpjiMClv[rf0FE27zZ9 - 1 - LRo0w8] = lUpntQgIWY;
            LRo0w8++;
        };
    }
    if (strcmp (KfpjiMClv, tfJe9x) == 0)
        return 1;
    else
        return 0;
}

