int ENQWG1FiZc (int Ck1YPxBj6Q, int bvX3DW) {
    int Zwf2aTb = (502 - 501);
    int BCFl5c8mLi, tv92FN;
    if (Ck1YPxBj6Q < (602 - 592)) {
        return (bvX3DW + Ck1YPxBj6Q);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        BCFl5c8mLi = 1;
        while (1) {
            if (Zwf2aTb > Ck1YPxBj6Q) {
                break;
            }
            BCFl5c8mLi = BCFl5c8mLi +1;
            Zwf2aTb *= 10;
        };
    }
    bvX3DW = bvX3DW + (Ck1YPxBj6Q % 10) * (Zwf2aTb / 10);
    return (ENQWG1FiZc (Ck1YPxBj6Q / 10, bvX3DW));
}

int main () {
    int BCFl5c8mLi;
    int Ck1YPxBj6Q;
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
    for (BCFl5c8mLi = 0; 6 > BCFl5c8mLi; BCFl5c8mLi = BCFl5c8mLi +1) {
        scanf ("%d", &Ck1YPxBj6Q);
        if (Ck1YPxBj6Q < 0) {
            Ck1YPxBj6Q = -Ck1YPxBj6Q;
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
            printf ("%d\n", -ENQWG1FiZc(Ck1YPxBj6Q, 0));
        }
        else {
            printf ("%d\n", ENQWG1FiZc (Ck1YPxBj6Q, 0));
        };
    }
    return 0;
}

