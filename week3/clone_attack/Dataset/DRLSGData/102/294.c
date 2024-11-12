int main () {
    double  soXUgIK [(54 - 14)];
    int kTzA64rQB;
    int i;
    double  sz [(333 - 293)];
    double  RbhIqfpX [(734 - 694)];
    int roY7B3G;
    int nzu3vNX;
    int j;
    char iDn05w8 [(1023 - 983)] [(70 - 60)];
    scanf ("%d", &nzu3vNX);
    kTzA64rQB = (852 - 852);
    roY7B3G = (455 - 455);
    for (i = (285 - 285); nzu3vNX > i; i++) {
        scanf ("%s%lf", &iDn05w8[i], &sz[i]);
        if (!((879 - 879) != strcmp (iDn05w8[i], "male"))) {
            soXUgIK[roY7B3G] = sz[i];
            roY7B3G++;
        }
        else {
            RbhIqfpX[kTzA64rQB] = sz[i];
            kTzA64rQB++;
        }
    }
    for (i = (771 - 770); i < roY7B3G; i++) {
        for (j = (59 - 59); j < roY7B3G - i; j++) {
            if (soXUgIK[j] > soXUgIK[j + (555 - 554)]) {
                double  gV74ewBfqGoz;
                gV74ewBfqGoz = soXUgIK[j];
                soXUgIK[j] = soXUgIK[j + (909 - 908)];
                soXUgIK[j + (846 - 845)] = gV74ewBfqGoz;
            }
        }
    }
    {
        i = (582 - 582);
        for (; i < roY7B3G;) {
            printf ("%.2lf ", soXUgIK[i]);
            i++;
        }
    }
    for (i = (280 - 279); kTzA64rQB > i; i++) {
        for (j = (900 - 900); j < kTzA64rQB - i; j++) {
            if (RbhIqfpX[j + (391 - 390)] > RbhIqfpX[j]) {
                double  cqdFtO7ixC;
                cqdFtO7ixC = RbhIqfpX[j];
                RbhIqfpX[j] = RbhIqfpX[j + (435 - 434)];
                RbhIqfpX[j + (380 - 379)] = cqdFtO7ixC;
            }
        }
    }
    {
        i = (531 - 531);
        for (; i < kTzA64rQB;) {
            if (i == kTzA64rQB - 1) {
                printf ("%.2lf", RbhIqfpX[i]);
            }
            else {
                printf ("%.2lf ", RbhIqfpX[i]);
            }
            i++;
        }
    }
    return (966 - 966);
}

