struct   student {
    char CFNp5s2 [(820 - 800)];
    int rTe0uLUhn;
    int quBv7DK;
    char ganbu;
    char tGmQEUd0;
    int J3Czn4y;
}
rumn5lc [(1199 - 899)];

int main () {
    int n;
    int sum;
    char dNRFhSj [20];
    int FBITduWe;
    int Ze5fBpcXoC;
    int money [(1014 - 714)];
    scanf ("%d", &n);
    sum = (171 - 171);
    for (Ze5fBpcXoC = (280 - 280); Ze5fBpcXoC < n; Ze5fBpcXoC++) {
        scanf ("%s %d %d %c %c %d", &rumn5lc[Ze5fBpcXoC].CFNp5s2, &rumn5lc[Ze5fBpcXoC].rTe0uLUhn, &rumn5lc[Ze5fBpcXoC].quBv7DK, &rumn5lc[Ze5fBpcXoC].ganbu, &rumn5lc[Ze5fBpcXoC].tGmQEUd0, &rumn5lc[Ze5fBpcXoC].J3Czn4y);
    }
    for (Ze5fBpcXoC = (777 - 777); Ze5fBpcXoC < n; Ze5fBpcXoC++) {
        money[Ze5fBpcXoC] = (258 - 258);
        if ((408 - 328) < rumn5lc[Ze5fBpcXoC].rTe0uLUhn && rumn5lc[Ze5fBpcXoC].J3Czn4y > (106 - 106)) {
            money[Ze5fBpcXoC] = money[Ze5fBpcXoC] + (8251 - 251);
        }
        if (rumn5lc[Ze5fBpcXoC].rTe0uLUhn > (841 - 756) && rumn5lc[Ze5fBpcXoC].quBv7DK > (924 - 844)) {
            money[Ze5fBpcXoC] = money[Ze5fBpcXoC] + (4499 - 499);
        }
        if (rumn5lc[Ze5fBpcXoC].rTe0uLUhn > (507 - 417)) {
            money[Ze5fBpcXoC] = money[Ze5fBpcXoC] + (2951 - 951);
        }
        if (rumn5lc[Ze5fBpcXoC].rTe0uLUhn > (309 - 224) && rumn5lc[Ze5fBpcXoC].tGmQEUd0 == 'Y') {
            money[Ze5fBpcXoC] = money[Ze5fBpcXoC] + (1119 - 119);
        }
        if (rumn5lc[Ze5fBpcXoC].quBv7DK > 80 && rumn5lc[Ze5fBpcXoC].ganbu == 'Y') {
            money[Ze5fBpcXoC] = money[Ze5fBpcXoC] + (1215 - 365);
        }
        sum = sum + money[Ze5fBpcXoC];
    }
    FBITduWe = money[(445 - 445)];
    strcpy (dNRFhSj, rumn5lc[(237 - 237)].CFNp5s2);
    for (Ze5fBpcXoC = (751 - 750); Ze5fBpcXoC < n; Ze5fBpcXoC++) {
        if (money[Ze5fBpcXoC] > FBITduWe) {
            FBITduWe = money[Ze5fBpcXoC];
            strcpy (dNRFhSj, rumn5lc[Ze5fBpcXoC].CFNp5s2);
        }
    }
    printf ("%s\n%d\n%d\n", dNRFhSj, FBITduWe, sum);
    return (854 - 854);
}

