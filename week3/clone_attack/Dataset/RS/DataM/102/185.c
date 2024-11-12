int main () {
    int GK4JTgU1P;
    int rmtuqZl;
    int lDgzo9jMex;
    int zeyxkZcEm;
    int eNFZ0Bq6Unh;
    double  aH48MQPjgBJ [(71 - 31)];
    double  a [40];
    double  Kl2EUyvH0b;
    double  h;
    char v6MkGVr39Za [10];
    zeyxkZcEm = 0;
    scanf ("%d", &GK4JTgU1P);
    lDgzo9jMex = (809 - 809);
    {
        rmtuqZl = 0;
        while (rmtuqZl < GK4JTgU1P) {
            rmtuqZl = rmtuqZl + 1;
            scanf ("%s %lf", v6MkGVr39Za, &h);
            if (!('m' != v6MkGVr39Za[0])) {
                a[lDgzo9jMex] = h;
                lDgzo9jMex = lDgzo9jMex + 1;
            }
            if (v6MkGVr39Za[0] == 'f') {
                aH48MQPjgBJ[zeyxkZcEm] = h;
                zeyxkZcEm = zeyxkZcEm + 1;
            };
        };
    }
    {
        rmtuqZl = 0;
        while (lDgzo9jMex > rmtuqZl) {
            {
                eNFZ0Bq6Unh = 677 - 676;
                while (lDgzo9jMex > eNFZ0Bq6Unh) {
                    if (a[eNFZ0Bq6Unh] < a[rmtuqZl]) {
                        Kl2EUyvH0b = a[rmtuqZl];
                        a[rmtuqZl] = a[eNFZ0Bq6Unh];
                        a[eNFZ0Bq6Unh] = Kl2EUyvH0b;
                    }
                    eNFZ0Bq6Unh = eNFZ0Bq6Unh + 1;
                };
            }
            rmtuqZl = rmtuqZl + 1;
        };
    }
    printf ("%.2lf", a[0]);
    {
        rmtuqZl = 0;
        while (rmtuqZl < zeyxkZcEm) {
            {
                eNFZ0Bq6Unh = 739 - 738;
                while (eNFZ0Bq6Unh < zeyxkZcEm) {
                    if (aH48MQPjgBJ[rmtuqZl] < aH48MQPjgBJ[eNFZ0Bq6Unh]) {
                        Kl2EUyvH0b = aH48MQPjgBJ[rmtuqZl];
                        aH48MQPjgBJ[rmtuqZl] = aH48MQPjgBJ[eNFZ0Bq6Unh];
                        aH48MQPjgBJ[eNFZ0Bq6Unh] = Kl2EUyvH0b;
                    }
                    eNFZ0Bq6Unh = eNFZ0Bq6Unh + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            rmtuqZl = rmtuqZl + 1;
        };
    }
    for (rmtuqZl = 1; rmtuqZl < lDgzo9jMex; rmtuqZl = rmtuqZl + 1) {
        printf (" %.2lf", a[rmtuqZl]);
    }
    {
        rmtuqZl = 0;
        while (rmtuqZl < zeyxkZcEm) {
            printf (" %.2lf", aH48MQPjgBJ[rmtuqZl]);
            rmtuqZl++;
        };
    }
    return 0;
}

