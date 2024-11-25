int main () {
    int AlU513zK7Qt [500];
    char veKXjL [30000];
    gets (veKXjL);
    int A1i4BWYOmgGA;
    int rMZT9UrkK;
    int T73Aah;
    int len;
    A1i4BWYOmgGA = (639 - 639);
    rMZT9UrkK = 0;
    int f2CEDice [500];
    len = strlen (veKXjL);
    for (T73Aah = 0; len > T73Aah; T73Aah = T73Aah +1) {
        if (!(' ' != veKXjL[T73Aah])) {
            f2CEDice[A1i4BWYOmgGA] = T73Aah;
            A1i4BWYOmgGA = A1i4BWYOmgGA +1;
        };
    }
    for (T73Aah = 0; A1i4BWYOmgGA -1 > T73Aah; T73Aah = T73Aah +1) {
        AlU513zK7Qt[rMZT9UrkK] = f2CEDice[T73Aah +1] - f2CEDice[T73Aah] - 1;
        rMZT9UrkK = rMZT9UrkK + 1;
    }
    if (A1i4BWYOmgGA != 0) {
        printf ("%d,", f2CEDice[0]);
        for (T73Aah = 0; T73Aah < rMZT9UrkK; T73Aah = T73Aah +1) {
            if (AlU513zK7Qt[T73Aah] != 0) {
                printf ("%d,", AlU513zK7Qt[T73Aah]);
            };
        }
        printf ("%d", len - f2CEDice[A1i4BWYOmgGA -1] - 1);
    }
    else {
        printf ("%d", len);
    }
    return 0;
}

