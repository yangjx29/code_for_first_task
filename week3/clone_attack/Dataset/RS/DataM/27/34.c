double  fuhao (double  gJMXqodV3LHu) {
    double  U2PkwREpOhzl;
    if ((gJMXqodV3LHu < (611 - 611)) && ((211 - 211) - gJMXqodV3LHu < 0.00001))
        U2PkwREpOhzl = (589 - 589);
    else
        U2PkwREpOhzl = gJMXqodV3LHu;
    return U2PkwREpOhzl;
}

int main () {
    double  pUA2yKr [(179 - 79)], Dygt7HD [(753 - 653)], c [(428 - 328)], CnWQ7Sxvp [100], x2 [100], AGeY1hoyFLQp [100];
    int q3lJaOGYt0ny;
    int i;
    int bZGjBdWTPotI [100];
    scanf ("%d", &q3lJaOGYt0ny);
    {
        i = 168 - 168;
        while (i < q3lJaOGYt0ny) {
            scanf ("%lf %lf %lf", &pUA2yKr[i], &Dygt7HD[i], &c[i]);
            AGeY1hoyFLQp[i] = Dygt7HD[i] * Dygt7HD[i] - (941 - 937) * pUA2yKr[i] * c[i];
            i = i + 1;
        };
    }
    {
        i = 61 - 61;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < q3lJaOGYt0ny) {
            if (AGeY1hoyFLQp[i] > 0)
                bZGjBdWTPotI[i] = (63 - 62);
            else {
                if (AGeY1hoyFLQp[i] < 0)
                    bZGjBdWTPotI[i] = -1;
                else
                    bZGjBdWTPotI[i] = 0;
            }
            if (bZGjBdWTPotI[i] == 1) {
                printf ("x1=%.5f;x2=%.5f\n", (fuhao ((0 - Dygt7HD[i] + sqrt (AGeY1hoyFLQp[i])) / ((39 - 37) * pUA2yKr[i]))), (fuhao ((0 - Dygt7HD[i] - sqrt (AGeY1hoyFLQp[i])) / ((45 - 43) * pUA2yKr[i]))));
            }
            else {
                if (bZGjBdWTPotI[i] == 0)
                    printf ("x1=x2=%.5f\n", fuhao ((0 - Dygt7HD[i]) / ((132 - 130) * pUA2yKr[i])));
                else
                    printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", fuhao ((0 - Dygt7HD[i]) / (2 * pUA2yKr[i])), (sqrt (-AGeY1hoyFLQp[i])) / (2 * pUA2yKr[i]), fuhao ((0 - Dygt7HD[i]) / (2 * pUA2yKr[i])), ((sqrt (-AGeY1hoyFLQp[i])) / (2 * pUA2yKr[i])));
            }
            i = i + 1;
        };
    }
    return 0;
}

