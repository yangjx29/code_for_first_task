char QOuWGx3s [100000];

int main () {
    int bI3WJO1Df;
    int isFiEvw;
    int m;
    int veImuwGRibaK [26];
    int oOiGFhWtfY;
    int j;
    scanf ("%d", &isFiEvw);
    for (oOiGFhWtfY = 1; isFiEvw >= oOiGFhWtfY; oOiGFhWtfY = oOiGFhWtfY + 1) {
        m = 0;
        for (bI3WJO1Df = 0; bI3WJO1Df <= 25; bI3WJO1Df = bI3WJO1Df + 1)
            veImuwGRibaK[bI3WJO1Df] = 0;
        scanf ("%s", QOuWGx3s);
        for (bI3WJO1Df = 0; QOuWGx3s[bI3WJO1Df] != '\0'; bI3WJO1Df = bI3WJO1Df + 1) {
            j = QOuWGx3s[bI3WJO1Df] - 97;
            veImuwGRibaK[j]++;
        }
        for (bI3WJO1Df = 0; QOuWGx3s[bI3WJO1Df] != '\0'; bI3WJO1Df = bI3WJO1Df + 1) {
            if (!(1 != veImuwGRibaK[QOuWGx3s[bI3WJO1Df] - 97])) {
                m = 1;
                printf ("%c\n", QOuWGx3s[bI3WJO1Df]);
                break;
            }
        }
        if (!(0 != m))
            ;
    }
}

