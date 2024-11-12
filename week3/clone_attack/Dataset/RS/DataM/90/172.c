int uT8I9WJe (int ttlpYE, int yxQmOX7Z9e, int SiQbxHsdM);

int main (void ) {
    int yxQmOX7Z9e;
    int ttlpYE;
    int KAr4TSz;
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
    int JxBACRdh9O;
    scanf ("%d\n", &JxBACRdh9O);
    for (; JxBACRdh9O > 0;) {
        JxBACRdh9O = JxBACRdh9O -1;
        scanf ("%d %d\n", &ttlpYE, &yxQmOX7Z9e);
        if (yxQmOX7Z9e > ttlpYE)
            yxQmOX7Z9e = ttlpYE;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        KAr4TSz = uT8I9WJe (ttlpYE, yxQmOX7Z9e, 0);
        printf ("%d\n", KAr4TSz);
    };
}

int uT8I9WJe (int ttlpYE, int yxQmOX7Z9e, int SiQbxHsdM) {
    int KAr4TSz;
    int oRLQYy;
    KAr4TSz = 0;
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
    if (yxQmOX7Z9e == 1)
        return ttlpYE >= SiQbxHsdM;
    {
        oRLQYy = SiQbxHsdM;
        while (oRLQYy < ttlpYE) {
            KAr4TSz = KAr4TSz +uT8I9WJe (ttlpYE - oRLQYy, yxQmOX7Z9e - 1, oRLQYy);
            oRLQYy++;
        };
    }
    return KAr4TSz;
}

