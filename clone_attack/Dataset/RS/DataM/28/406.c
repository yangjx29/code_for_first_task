int main () {
    char str [300] [10], c;
    int ENDzFR3pK [300];
    int n;
    int BT1h7vR;
    scanf ("%s", str[(628 - 628)]);
    ENDzFR3pK[0] = strlen (str[0]);
    for (BT1h7vR = 1; c = !('\n' == getchar ()); BT1h7vR++) {
        scanf ("%s", str[BT1h7vR]);
        ENDzFR3pK[BT1h7vR] = strlen (str[BT1h7vR]);
    }
    n = BT1h7vR;
    printf ("%d", ENDzFR3pK[0]);
    for (BT1h7vR = 1; BT1h7vR < n; BT1h7vR++) {
        printf (",%d", ENDzFR3pK[BT1h7vR]);
    };
}

