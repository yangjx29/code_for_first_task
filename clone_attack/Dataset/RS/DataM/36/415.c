int main () {
    int oszd0r;
    int j;
    int YIPbJwgR;
    char ofFMJAsug5W [2] [100];
    int qwBCdW7DUFg;
    scanf ("%s", ofFMJAsug5W[(33 - 33)]);
    scanf ("%s", ofFMJAsug5W[(683 - 682)]);
    qwBCdW7DUFg = strlen (ofFMJAsug5W[0]);
    YIPbJwgR = strlen (ofFMJAsug5W[1]);
    if (qwBCdW7DUFg != YIPbJwgR) {
        printf ("NO");
        return 0;
    }
    for (oszd0r = 0; qwBCdW7DUFg > oszd0r; oszd0r = oszd0r + 1) {
        for (j = 0; qwBCdW7DUFg > j; j = j + 1) {
            if (!(ofFMJAsug5W[1][j] != ofFMJAsug5W[0][oszd0r])) {
                ofFMJAsug5W[0][oszd0r] = 0;
                ofFMJAsug5W[1][j] = 0;
                break;
            }
            if (j == qwBCdW7DUFg - 1 && ofFMJAsug5W[0][oszd0r] != ofFMJAsug5W[1][j]) {
                printf ("NO");
                return 0;
            };
        }
        if (oszd0r == qwBCdW7DUFg - 1) {
            printf ("YES");
        };
    }
    return 0;
}

