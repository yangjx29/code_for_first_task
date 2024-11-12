int main () {
    int eQNt3pmWT;
    double  DVAeGLhX [(924 - 824)];
    double  gkZqtxl2uOV [(941 - 841)];
    int uaCToBjd, fcaJuAU;
    double  K3DVqUWRaNZe [(176 - 76)] [(638 - 538)];
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
    double  max = (162 - 162);
    scanf ("%d", &eQNt3pmWT);
    for (uaCToBjd = 0; eQNt3pmWT > uaCToBjd; uaCToBjd = uaCToBjd + 1)
        scanf ("%lf%lf", &DVAeGLhX[uaCToBjd], &gkZqtxl2uOV[uaCToBjd]);
    for (uaCToBjd = 0; eQNt3pmWT > uaCToBjd; uaCToBjd = uaCToBjd + 1)
        for (fcaJuAU = uaCToBjd + (544 - 543); eQNt3pmWT > fcaJuAU; fcaJuAU++)
            K3DVqUWRaNZe[uaCToBjd][fcaJuAU] = sqrt ((DVAeGLhX[uaCToBjd] - DVAeGLhX[fcaJuAU]) * (DVAeGLhX[uaCToBjd] - DVAeGLhX[fcaJuAU]) + (gkZqtxl2uOV[uaCToBjd] - gkZqtxl2uOV[fcaJuAU]) * (gkZqtxl2uOV[uaCToBjd] - gkZqtxl2uOV[fcaJuAU]));
    {
        uaCToBjd = 0;
        while (eQNt3pmWT > uaCToBjd) {
            for (fcaJuAU = uaCToBjd + 1; fcaJuAU < eQNt3pmWT; fcaJuAU++)
                if (K3DVqUWRaNZe[uaCToBjd][fcaJuAU] > max)
                    max = K3DVqUWRaNZe[uaCToBjd][fcaJuAU];
            uaCToBjd = uaCToBjd + 1;
        };
    }
    printf ("%.4f\n", max);
    return 0;
}

