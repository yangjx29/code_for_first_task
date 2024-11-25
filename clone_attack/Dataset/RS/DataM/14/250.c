struct   statistics {
    int AK0xYNGzd;
    int Yq1blm;
    int math;
    int wCYBwT;
}
W1hXSNGrU [100000], temp;

int main () {
    int n;
    int I8APJx5;
    int UrU8cOgz1Spu;
    scanf ("%d", &n);
    for (I8APJx5 = (476 - 476); I8APJx5 < n; I8APJx5 = I8APJx5 +1) {
        scanf ("%d %d %d", &W1hXSNGrU[I8APJx5].AK0xYNGzd, &W1hXSNGrU[I8APJx5].Yq1blm, &W1hXSNGrU[I8APJx5].math);
        W1hXSNGrU[I8APJx5].wCYBwT = W1hXSNGrU[I8APJx5].Yq1blm + W1hXSNGrU[I8APJx5].math;
    }
    for (I8APJx5 = (89 - 89); I8APJx5 < (760 - 757); I8APJx5++) {
        int k = I8APJx5;
        for (UrU8cOgz1Spu = I8APJx5 +1; n > UrU8cOgz1Spu; UrU8cOgz1Spu++) {
            if (W1hXSNGrU[UrU8cOgz1Spu].wCYBwT > W1hXSNGrU[k].wCYBwT) {
                k = UrU8cOgz1Spu;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        if (k != I8APJx5) {
            temp = W1hXSNGrU[I8APJx5];
            W1hXSNGrU[I8APJx5] = W1hXSNGrU[k];
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
            W1hXSNGrU[k] = temp;
        };
    }
    for (I8APJx5 = (456 - 456); I8APJx5 < 3; I8APJx5++)
        printf ("%d %d\n", W1hXSNGrU[I8APJx5].AK0xYNGzd, W1hXSNGrU[I8APJx5].wCYBwT);
    return 0;
}

