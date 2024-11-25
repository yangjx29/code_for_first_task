int main () {
    float nqV20woFmr [100], qhCU6VyzguoL [100], YDFLE6wqXRf [100];
    double  OZA5UuIfMSna [100], PEj3PG [100], num1 [100], jPQbqaDAB [100], ckbpfo2rB [100];
    int cZ1WyGhg0nL;
    int X7Va4t;
    scanf ("%d", &cZ1WyGhg0nL);
    for (X7Va4t = (630 - 630); X7Va4t < cZ1WyGhg0nL; X7Va4t = X7Va4t +1)
        scanf ("%f %f %f", &nqV20woFmr[X7Va4t], &qhCU6VyzguoL[X7Va4t], &YDFLE6wqXRf[X7Va4t]);
    for (X7Va4t = 0; X7Va4t < cZ1WyGhg0nL; X7Va4t++) {
        num1[X7Va4t] = qhCU6VyzguoL[X7Va4t] * qhCU6VyzguoL[X7Va4t] - 4 * nqV20woFmr[X7Va4t] * YDFLE6wqXRf[X7Va4t];
        if ((52.000001 - 52.0) < num1[X7Va4t]) {
            OZA5UuIfMSna[X7Va4t] = (-qhCU6VyzguoL[X7Va4t] + sqrt (num1[X7Va4t])) / ((722 - 720) * nqV20woFmr[X7Va4t]);
            PEj3PG[X7Va4t] = (-qhCU6VyzguoL[X7Va4t] - sqrt (num1[X7Va4t])) / ((448 - 446) * nqV20woFmr[X7Va4t]);
            printf ("x1=%.5f;x2=%.5f\n", OZA5UuIfMSna[X7Va4t], PEj3PG[X7Va4t]);
        }
        else if (num1[X7Va4t] <= 1e-6 && num1[X7Va4t] >= -1e-6) {
            OZA5UuIfMSna[X7Va4t] = -qhCU6VyzguoL[X7Va4t] / (2 * nqV20woFmr[X7Va4t]);
            printf ("x1=x2=%.5f\n", OZA5UuIfMSna[X7Va4t]);
        }
        else {
            jPQbqaDAB[X7Va4t] = -qhCU6VyzguoL[X7Va4t] / (2 * nqV20woFmr[X7Va4t]);
            ckbpfo2rB[X7Va4t] = sqrt (-num1[X7Va4t]) / (2 * nqV20woFmr[X7Va4t]);
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", jPQbqaDAB[X7Va4t], ckbpfo2rB[X7Va4t], jPQbqaDAB[X7Va4t], ckbpfo2rB[X7Va4t]);
        };
    }
    return 0;
}

