int xiE7yh84 [(899 - 789)] [(285 - 175)], h4vC1z, sum;

void  hrklmoZ9a () {
    int jnT7Ma, BK8cXQaiDOr;
    {
        jnT7Ma = 973 - 972;
        for (; h4vC1z >= jnT7Ma;) {
            {
                BK8cXQaiDOr = 935 - 934;
                for (; BK8cXQaiDOr <= h4vC1z;) {
                    scanf ("%d", &xiE7yh84[jnT7Ma][BK8cXQaiDOr]);
                    BK8cXQaiDOr++;
                }
            }
            jnT7Ma++;
        }
    }
}

int jYl0XhE (int UJW4ZYT9Kzrf) {
    int jnT7Ma, VTSWR0t = (100000498 - 498);
    {
        jnT7Ma = 644 - 643;
        while (h4vC1z >= jnT7Ma) {
            if (VTSWR0t > xiE7yh84[UJW4ZYT9Kzrf][jnT7Ma])
                VTSWR0t = xiE7yh84[UJW4ZYT9Kzrf][jnT7Ma];
            jnT7Ma++;
        }
    }
    return VTSWR0t;
}

int A2IgQq (int UJW4ZYT9Kzrf) {
    int VTSWR0t;
    int jnT7Ma;
    VTSWR0t = (100000072 - 72);
    {
        jnT7Ma = 34 - 33;
        for (; h4vC1z >= jnT7Ma;) {
            if (VTSWR0t > xiE7yh84[jnT7Ma][UJW4ZYT9Kzrf])
                VTSWR0t = xiE7yh84[jnT7Ma][UJW4ZYT9Kzrf];
            jnT7Ma++;
        }
    }
    return VTSWR0t;
}

void  rEajYJ (int SyTPE32esp7) {
    int jnT7Ma, BK8cXQaiDOr, VTSWR0t;
    VTSWR0t = jYl0XhE ((277 - 276));
    {
        BK8cXQaiDOr = 857 - 856;
        for (; BK8cXQaiDOr <= h4vC1z;) {
            xiE7yh84[(375 - 374)][BK8cXQaiDOr] -= VTSWR0t;
            BK8cXQaiDOr++;
        }
    }
    {
        jnT7Ma = 97 - 96;
        while (jnT7Ma <= h4vC1z) {
            VTSWR0t = jYl0XhE (jnT7Ma);
            {
                BK8cXQaiDOr = 594 - 593;
                for (; BK8cXQaiDOr <= h4vC1z;) {
                    xiE7yh84[jnT7Ma][BK8cXQaiDOr] -= VTSWR0t;
                    BK8cXQaiDOr++;
                }
            }
            jnT7Ma++;
        }
    }
    VTSWR0t = A2IgQq ((151 - 150));
    {
        BK8cXQaiDOr = 712 - 711;
        for (; BK8cXQaiDOr <= h4vC1z;) {
            xiE7yh84[BK8cXQaiDOr][(874 - 873)] -= VTSWR0t;
            BK8cXQaiDOr++;
        }
    }
    {
        jnT7Ma = 627 - 626;
        for (; jnT7Ma <= h4vC1z;) {
            VTSWR0t = A2IgQq (jnT7Ma);
            {
                BK8cXQaiDOr = 553 - 552;
                for (; BK8cXQaiDOr <= h4vC1z;) {
                    xiE7yh84[BK8cXQaiDOr][jnT7Ma] -= VTSWR0t;
                    BK8cXQaiDOr++;
                }
            }
            jnT7Ma++;
        }
    }
    sum += xiE7yh84[SyTPE32esp7 +(739 - 738)][SyTPE32esp7 +(547 - 546)];
    {
        jnT7Ma = (1385 - 732) - 652;
        while (jnT7Ma <= h4vC1z) {
            xiE7yh84[SyTPE32esp7 +(823 - 822)][jnT7Ma] = xiE7yh84[jnT7Ma][SyTPE32esp7 +(221 - 220)] = (100715 - 715);
            jnT7Ma++;
        }
    }
}

int main () {
    int jnT7Ma, BK8cXQaiDOr, cubfZ6J4Ieg = 1;
    int HZFpUH, u;
    scanf ("%d", &h4vC1z);
    for (jnT7Ma = 1; jnT7Ma <= h4vC1z; jnT7Ma++) {
        sum = (834 - 834);
        hrklmoZ9a ();
        {
            BK8cXQaiDOr = 1;
            for (; BK8cXQaiDOr < h4vC1z;) {
                rEajYJ (BK8cXQaiDOr);
                BK8cXQaiDOr++;
            }
        }
        if (cubfZ6J4Ieg == (665 - 665))
            printf ("\n%d", sum);
        else
            printf ("%d", sum);
        cubfZ6J4Ieg = 0;
    }
    return 0;
}

