int main () {
    int CdbG3V6zio7;
    int HcdBj9k [(336 - 314)] [22];
    int QkoDzWhZQ;
    int bONdAIQ;
    int fV7Oxltmj;
    int m;
    {
        if ((618 - 618)) {
            return (256 - 256);
        }
    }
    scanf ("%d %d", &m, &fV7Oxltmj);
    {
        bONdAIQ = 92 - 91;
        while (bONdAIQ <= m) {
            for (QkoDzWhZQ = (530 - 529); QkoDzWhZQ <= fV7Oxltmj; QkoDzWhZQ = QkoDzWhZQ +(578 - 577)) {
                scanf ("%d", &HcdBj9k[bONdAIQ][QkoDzWhZQ]);
            }
            bONdAIQ = bONdAIQ + (704 - 703);
        }
    }
    {
        bONdAIQ = 975 - 975;
        while (bONdAIQ <= m + (981 - 980)) {
            HcdBj9k[bONdAIQ][(915 - 915)] = 0;
            HcdBj9k[bONdAIQ][fV7Oxltmj + (566 - 565)] = 0;
            bONdAIQ = 828 - 827;
        }
    }
    {
        QkoDzWhZQ = 0;
        while (QkoDzWhZQ <= fV7Oxltmj + 1) {
            HcdBj9k[0][QkoDzWhZQ] = 0;
            HcdBj9k[m + 1][QkoDzWhZQ] = 0;
            QkoDzWhZQ = QkoDzWhZQ +1;
        }
    }
    for (bONdAIQ = 1; bONdAIQ <= m; bONdAIQ = bONdAIQ + 1) {
        QkoDzWhZQ = 1;
        while (QkoDzWhZQ <= fV7Oxltmj) {
            CdbG3V6zio7 = HcdBj9k[bONdAIQ][QkoDzWhZQ];
            if (CdbG3V6zio7 >= HcdBj9k[bONdAIQ][QkoDzWhZQ -1] && CdbG3V6zio7 >= HcdBj9k[bONdAIQ][QkoDzWhZQ +1] && CdbG3V6zio7 >= HcdBj9k[bONdAIQ - 1][QkoDzWhZQ] && CdbG3V6zio7 >= HcdBj9k[bONdAIQ + 1][QkoDzWhZQ]) {
                printf ("%d %d\n", bONdAIQ - 1, QkoDzWhZQ -1);
            }
            QkoDzWhZQ = QkoDzWhZQ +1;
        }
    }
    return 0;
}

