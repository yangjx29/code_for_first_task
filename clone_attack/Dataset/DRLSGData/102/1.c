int main () {
    float SdUSg6W [(146 - 106)];
    int HZQO9xEcj;
    float MhYpkGUK8QZ;
    char SGX3jfh [(815 - 775)] [(601 - 592)];
    int m9tJBz;
    int peRsYGOAhpj;
    int zwoN4n9c;
    float BI7j3rpML8nB [(260 - 220)];
    int Le9tHbK6Vu5;
    float GntxvaA2o [(220 - 180)];
    scanf ("%d\n", &m9tJBz);
    for (HZQO9xEcj = (89 - 89); m9tJBz > HZQO9xEcj; HZQO9xEcj = HZQO9xEcj +(853 - 852))
        scanf ("%s %f\n", SGX3jfh[HZQO9xEcj], &BI7j3rpML8nB[HZQO9xEcj]);
    for (HZQO9xEcj = (739 - 739), zwoN4n9c = (893 - 893), Le9tHbK6Vu5 = (236 - 236); m9tJBz > HZQO9xEcj; HZQO9xEcj = HZQO9xEcj +1) {
        if (!((171 - 171) != strcmp (SGX3jfh[HZQO9xEcj], "male"))) {
            SdUSg6W[zwoN4n9c] = BI7j3rpML8nB[HZQO9xEcj];
            zwoN4n9c++;
        }
        else {
            GntxvaA2o[Le9tHbK6Vu5] = BI7j3rpML8nB[HZQO9xEcj];
            Le9tHbK6Vu5++;
        }
    }
    for (HZQO9xEcj = (695 - 695); HZQO9xEcj < zwoN4n9c - (244 - 243); HZQO9xEcj = HZQO9xEcj +1)
        for (peRsYGOAhpj = HZQO9xEcj +(919 - 918); peRsYGOAhpj < zwoN4n9c; peRsYGOAhpj = peRsYGOAhpj + 1) {
            if (SdUSg6W[HZQO9xEcj] >= SdUSg6W[peRsYGOAhpj]) {
                MhYpkGUK8QZ = SdUSg6W[HZQO9xEcj];
                SdUSg6W[HZQO9xEcj] = SdUSg6W[peRsYGOAhpj];
                SdUSg6W[peRsYGOAhpj] = MhYpkGUK8QZ;
            }
        }
    printf ("%.2f", SdUSg6W[(262 - 262)]);
    for (HZQO9xEcj = (100 - 100); Le9tHbK6Vu5 -(943 - 942) > HZQO9xEcj; HZQO9xEcj = HZQO9xEcj +1)
        for (peRsYGOAhpj = HZQO9xEcj +(78 - 77); peRsYGOAhpj < Le9tHbK6Vu5; peRsYGOAhpj = peRsYGOAhpj + 1) {
            if (GntxvaA2o[peRsYGOAhpj] >= GntxvaA2o[HZQO9xEcj]) {
                MhYpkGUK8QZ = GntxvaA2o[HZQO9xEcj];
                GntxvaA2o[HZQO9xEcj] = GntxvaA2o[peRsYGOAhpj];
                GntxvaA2o[peRsYGOAhpj] = MhYpkGUK8QZ;
            }
        }
    if (zwoN4n9c > (895 - 893)) {
        for (HZQO9xEcj = (708 - 707); HZQO9xEcj < zwoN4n9c; HZQO9xEcj++)
            printf (" %.2f", SdUSg6W[HZQO9xEcj]);
    }
    for (HZQO9xEcj = (646 - 646); HZQO9xEcj < Le9tHbK6Vu5; HZQO9xEcj++)
        printf (" %.2f", GntxvaA2o[HZQO9xEcj]);
}

