int main () {
    int i;
    int YzdVL8Yi;
    double  fqVOJzW;
    double  IfhHsO9UzaZ8 [100];
    fqVOJzW = (627 - 627);
    int kxyZvNO1, aRqmyheur;
    int oN9gniUTSc [100];
    int O3HKN1c [100];
    scanf ("%d", &kxyZvNO1);
    for (i = (917 - 916); i <= kxyZvNO1; i++) {
        scanf ("%d", &aRqmyheur);
        O3HKN1c[(175 - 175)] = 1;
        oN9gniUTSc[(502 - 502)] = 2;
        {
            YzdVL8Yi = 0;
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
            while (YzdVL8Yi < aRqmyheur) {
                if (YzdVL8Yi == 0) {
                    fqVOJzW = 2;
                    O3HKN1c[0] = 1;
                    oN9gniUTSc[0] = 2;
                }
                else {
                    oN9gniUTSc[YzdVL8Yi] = oN9gniUTSc[YzdVL8Yi -1] + O3HKN1c[YzdVL8Yi -1];
                    O3HKN1c[YzdVL8Yi] = oN9gniUTSc[YzdVL8Yi -1];
                    IfhHsO9UzaZ8[YzdVL8Yi] = (931.0 - 930.0) * oN9gniUTSc[YzdVL8Yi] / O3HKN1c[YzdVL8Yi];
                    fqVOJzW = fqVOJzW + IfhHsO9UzaZ8[YzdVL8Yi];
                }
                YzdVL8Yi = YzdVL8Yi +1;
            };
        }
        printf ("%.3lf\n", fqVOJzW);
        fqVOJzW = 0;
    }
    return 0;
}

