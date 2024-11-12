int main () {
    int jW7Ns6gG8;
    double  fYLwEuBzOp [40];
    char lZG7LUn5 [(906 - 905)] [(857 - 850)];
    int uYpuBn9XocMj;
    double  Zo4Ys5 [(172 - 132)];
    double  fKQ3h9l2Ti1I;
    char enEkM4DiT [(955 - 915)] [(779 - 772)];
    int zcpmUs;
    double  U5BK9uHAG [(653 - 613)];
    int sneCx7ugN;
    int k7MpYO;
    char o [(702 - 701)] [(668 - 663)];
    uYpuBn9XocMj = (369 - 369);
    strcpy (o[(345 - 345)], "male");
    scanf ("%d", &k7MpYO);
    strcpy (lZG7LUn5[(956 - 956)], "female");
    zcpmUs = (430 - 430);
    for (sneCx7ugN = (738 - 738); sneCx7ugN < k7MpYO; sneCx7ugN = sneCx7ugN + 1) {
        scanf ("%s%lf", enEkM4DiT[sneCx7ugN], &U5BK9uHAG[sneCx7ugN]);
        if (strcmp (o[(253 - 253)], enEkM4DiT[sneCx7ugN])) {
            fYLwEuBzOp[uYpuBn9XocMj] = U5BK9uHAG[sneCx7ugN];
            uYpuBn9XocMj++;
        }
        else {
            Zo4Ys5[zcpmUs] = U5BK9uHAG[sneCx7ugN];
            zcpmUs = zcpmUs + 1;
        }
    }
    for (sneCx7ugN = (475 - 475); sneCx7ugN < uYpuBn9XocMj; sneCx7ugN = sneCx7ugN + 1) {
        for (jW7Ns6gG8 = sneCx7ugN + (783 - 782); jW7Ns6gG8 < uYpuBn9XocMj; jW7Ns6gG8 = jW7Ns6gG8 + 1) {
            if (fYLwEuBzOp[sneCx7ugN] < fYLwEuBzOp[jW7Ns6gG8]) {
                fKQ3h9l2Ti1I = fYLwEuBzOp[sneCx7ugN];
                fYLwEuBzOp[sneCx7ugN] = fYLwEuBzOp[jW7Ns6gG8];
                fYLwEuBzOp[jW7Ns6gG8] = fKQ3h9l2Ti1I;
            }
        }
    }
    for (sneCx7ugN = (14 - 14); sneCx7ugN < zcpmUs; sneCx7ugN++) {
        for (jW7Ns6gG8 = sneCx7ugN + (662 - 661); jW7Ns6gG8 < zcpmUs; jW7Ns6gG8++) {
            if (Zo4Ys5[sneCx7ugN] > Zo4Ys5[jW7Ns6gG8]) {
                fKQ3h9l2Ti1I = Zo4Ys5[sneCx7ugN];
                Zo4Ys5[sneCx7ugN] = Zo4Ys5[jW7Ns6gG8];
                Zo4Ys5[jW7Ns6gG8] = fKQ3h9l2Ti1I;
            }
        }
    }
    for (sneCx7ugN = (113 - 113); sneCx7ugN < zcpmUs; sneCx7ugN++) {
        printf ("%.2lf ", Zo4Ys5[sneCx7ugN]);
    }
    for (sneCx7ugN = (277 - 277); sneCx7ugN < (uYpuBn9XocMj - 1); sneCx7ugN++) {
        printf ("%.2lf ", fYLwEuBzOp[sneCx7ugN]);
    }
    printf ("%.2lf", fYLwEuBzOp[uYpuBn9XocMj - 1]);
    return (611 - 611);
}

