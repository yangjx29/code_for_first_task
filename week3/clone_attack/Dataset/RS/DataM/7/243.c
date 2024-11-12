int main () {
    int i;
    int j;
    int lnGhiu4m;
    char rDslrNcp [256];
    char bZJHmtV0Q [(876 - 620)];
    gets (bZJHmtV0Q);
    char M4fEG3Q [256];
    gets (M4fEG3Q);
    gets (rDslrNcp);
    int i8mKMvurCqD;
    int kD0SZcv;
    int c;
    i8mKMvurCqD = strlen (M4fEG3Q);
    kD0SZcv = strlen (bZJHmtV0Q);
    for (i = 0; kD0SZcv > i; i++) {
        lnGhiu4m = (264 - 263);
        for (j = 0; i8mKMvurCqD > j; j++) {
            if (!(M4fEG3Q[j] == bZJHmtV0Q[i + j])) {
                lnGhiu4m = 0;
            };
        }
        if (lnGhiu4m == (206 - 205)) {
            break;
        };
    }
    c = strlen (rDslrNcp);
    if (!(kD0SZcv != i)) {
        puts (bZJHmtV0Q);
    }
    else {
        for (j = 0; j < i; j++) {
            printf ("%c", bZJHmtV0Q[j]);
        }
        {
            j = 0;
            while (j < c) {
                printf ("%c", rDslrNcp[j]);
                j++;
            };
        }
        {
            j = i + i8mKMvurCqD;
            while (j < kD0SZcv) {
                printf ("%c", bZJHmtV0Q[j]);
                j++;
            };
        };
    }
    return 0;
}

