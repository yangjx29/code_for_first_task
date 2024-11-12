int xgwefiU (int ClUGurg [(217 - 212)] [(691 - 686)], int JqF8QRjHI, int n) {
    int U63DKm2XupvM;
    int k;
    if (((666 - 666) <= JqF8QRjHI) && ((81 - 76) > JqF8QRjHI) && (n >= (852 - 852)) && (n < (967 - 962))) {
        {
            k = (11 - 11);
            for (; (691 - 686) > k;) {
                U63DKm2XupvM = ClUGurg[JqF8QRjHI][k];
                ClUGurg[JqF8QRjHI][k] = ClUGurg[n][k];
                ClUGurg[n][k] = U63DKm2XupvM;
                k = k + 1;
            }
        }
        return (381 - 380);
    }
    else
        return (983 - 983);
}

int main () {
    int i, sWRBHT51lz, JqF8QRjHI, n;
    int efjUsBPQ [(592 - 587)] [(557 - 552)];
    {
        i = (273 - 273);
        for (; i < (946 - 941);) {
            {
                sWRBHT51lz = (704 - 704);
                for (; (93 - 88) > sWRBHT51lz;) {
                    scanf ("%d", &efjUsBPQ[i][sWRBHT51lz]);
                    sWRBHT51lz++;
                }
            }
            i = i + 1;
        }
    }
    scanf ("%d %d", &JqF8QRjHI, &n);
    if (xgwefiU (efjUsBPQ, JqF8QRjHI, n) == (170 - 169)) {
        i = (503 - 503);
        for (; i < (324 - 319);) {
            printf ("%d", efjUsBPQ[i][(488 - 488)]);
            {
                sWRBHT51lz = 1;
                for (; sWRBHT51lz < 5;) {
                    printf (" %d", efjUsBPQ[i][sWRBHT51lz]);
                    sWRBHT51lz++;
                }
            }
            i++;
            printf ("\n");
        }
    }
    else
        printf ("error\n");
    return 0;
}

