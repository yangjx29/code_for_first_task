int main (int WaqhHOozn7, char *gL9c1xdy8 []) {
    struct   point {
        float cSOaN8F, nEOtxylvzpZ;
    }
    p [ca0QCLNEP];
    int FrsP0XpoEB;
    int uPZad7Lm5s;
    int QdRK7JTeDZmf;
    float max = 0, d, FMeR9ZkQ;
    scanf ("%d", &FrsP0XpoEB);
    for (uPZad7Lm5s = 0; uPZad7Lm5s < FrsP0XpoEB; uPZad7Lm5s++) {
        scanf ("%f %f", &(p[uPZad7Lm5s].cSOaN8F), &(p[uPZad7Lm5s].nEOtxylvzpZ));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (QdRK7JTeDZmf = 0; QdRK7JTeDZmf < uPZad7Lm5s; QdRK7JTeDZmf++) {
            d = (p[uPZad7Lm5s].cSOaN8F - p[QdRK7JTeDZmf].cSOaN8F) * (p[uPZad7Lm5s].cSOaN8F - p[QdRK7JTeDZmf].cSOaN8F) + (p[uPZad7Lm5s].nEOtxylvzpZ - p[QdRK7JTeDZmf].nEOtxylvzpZ) * (p[uPZad7Lm5s].nEOtxylvzpZ - p[QdRK7JTeDZmf].nEOtxylvzpZ);
            FMeR9ZkQ = (float) pow (d, 0.5);
            if (FMeR9ZkQ > max) {
                max = FMeR9ZkQ;
            };
        };
    }
    printf ("%.4f", max);
    return 0;
}

