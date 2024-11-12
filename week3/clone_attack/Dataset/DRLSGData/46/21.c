int main () {
    int mJRmYktE;
    int FWT0Fk61tYRu;
    int j;
    int Jx5duYIgSzR;
    int aYe1pUNc4q9;
    int sBA1c4KHr7w [101] [101];
    int CGv2IZ;
    scanf ("%d%d", &CGv2IZ, &aYe1pUNc4q9);
    {
        Jx5duYIgSzR = 1;
        while (CGv2IZ >= Jx5duYIgSzR) {
            {
                j = 1;
                while (aYe1pUNc4q9 >= j) {
                    scanf ("%d", &sBA1c4KHr7w[Jx5duYIgSzR][j]);
                    j = j + 1;
                }
            }
            Jx5duYIgSzR = Jx5duYIgSzR +1;
        }
    }
    if (aYe1pUNc4q9 < CGv2IZ) {
        FWT0Fk61tYRu = aYe1pUNc4q9;
    }
    else {
        FWT0Fk61tYRu = CGv2IZ;
    }
    Jx5duYIgSzR = 1;
    if (!(0 != FWT0Fk61tYRu % 2)) {
        mJRmYktE = 1;
        while (FWT0Fk61tYRu / 2 >= mJRmYktE) {
            {
                j = mJRmYktE;
                while (aYe1pUNc4q9 - mJRmYktE + 1 >= j) {
                    printf ("%d\n", sBA1c4KHr7w[Jx5duYIgSzR][j]);
                    j = j + 1;
                }
            }
            {
                Jx5duYIgSzR = 1 + mJRmYktE;
                while (Jx5duYIgSzR <= CGv2IZ +1 - mJRmYktE) {
                    printf ("%d\n", sBA1c4KHr7w[Jx5duYIgSzR][j - 1]);
                    Jx5duYIgSzR = Jx5duYIgSzR +1;
                }
            }
            Jx5duYIgSzR = Jx5duYIgSzR -1;
            {
                j = aYe1pUNc4q9 - mJRmYktE;
                while (mJRmYktE <= j) {
                    printf ("%d\n", sBA1c4KHr7w[Jx5duYIgSzR][j]);
                    j--;
                }
            }
            j = j + 1;
            {
                Jx5duYIgSzR = CGv2IZ -mJRmYktE;
                while (Jx5duYIgSzR >= mJRmYktE + 1) {
                    printf ("%d\n", sBA1c4KHr7w[Jx5duYIgSzR][j]);
                    Jx5duYIgSzR = Jx5duYIgSzR -1;
                }
            }
            Jx5duYIgSzR = Jx5duYIgSzR +1;
            mJRmYktE = mJRmYktE + 1;
        }
    }
    else {
        Jx5duYIgSzR = 1;
        {
            mJRmYktE = 1;
            while (mJRmYktE <= (FWT0Fk61tYRu -1) / 2) {
                {
                    j = mJRmYktE;
                    while (j <= aYe1pUNc4q9 - mJRmYktE + 1) {
                        printf ("%d\n", sBA1c4KHr7w[Jx5duYIgSzR][j]);
                        j++;
                    }
                }
                {
                    Jx5duYIgSzR = 1 + mJRmYktE;
                    while (Jx5duYIgSzR <= CGv2IZ +1 - mJRmYktE) {
                        printf ("%d\n", sBA1c4KHr7w[Jx5duYIgSzR][j - 1]);
                        Jx5duYIgSzR++;
                    }
                }
                Jx5duYIgSzR = Jx5duYIgSzR -1;
                {
                    j = aYe1pUNc4q9 - mJRmYktE;
                    while (j >= mJRmYktE) {
                        printf ("%d\n", sBA1c4KHr7w[Jx5duYIgSzR][j]);
                        j--;
                    }
                }
                j = j + 1;
                {
                    Jx5duYIgSzR = CGv2IZ -mJRmYktE;
                    while (Jx5duYIgSzR >= mJRmYktE + 1) {
                        printf ("%d\n", sBA1c4KHr7w[Jx5duYIgSzR][j]);
                        Jx5duYIgSzR--;
                    }
                }
                mJRmYktE++;
                Jx5duYIgSzR = Jx5duYIgSzR +1;
            }
        }
        if (CGv2IZ < aYe1pUNc4q9) {
            j = FWT0Fk61tYRu +1;
            while (j <= (aYe1pUNc4q9 - (FWT0Fk61tYRu -1) / 2)) {
                printf ("%d\n", sBA1c4KHr7w[(FWT0Fk61tYRu +1) / 2][j]);
                j++;
            }
        }
        else {
            Jx5duYIgSzR = FWT0Fk61tYRu +1;
            while (Jx5duYIgSzR <= (CGv2IZ -(FWT0Fk61tYRu -1) / 2)) {
                printf ("%d\n", sBA1c4KHr7w[Jx5duYIgSzR][(FWT0Fk61tYRu +1) / 2]);
                Jx5duYIgSzR++;
            }
        }
    }
    return 0;
}

