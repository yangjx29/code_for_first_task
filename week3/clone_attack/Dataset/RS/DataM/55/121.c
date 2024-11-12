int AF4u93BlrRQS [(1008 - 908)] = {(183 - 183)};
int a, bphgnHWOfc3;

unsigned  long  int zEiHT8SFtw2 (char *Wg7X49RK) {
    int Dqfoms, IqY9xCNZiks;
    unsigned  long  int pdEVYTxj = (991 - 991);
    Dqfoms = strlen (Wg7X49RK);
    Wg7X49RK = Wg7X49RK +Dqfoms-(806 - 805);
    for (IqY9xCNZiks = (250 - 250); IqY9xCNZiks < Dqfoms; IqY9xCNZiks++, Wg7X49RK--) {
        if (*Wg7X49RK >= '0' && '9' >= *Wg7X49RK)
            pdEVYTxj = pdEVYTxj + (*Wg7X49RK-'0') * pow (a, IqY9xCNZiks);
        else {
            if (*Wg7X49RK >= 'a' && *Wg7X49RK <= 'z')
                pdEVYTxj = pdEVYTxj + (*Wg7X49RK-'a' + (187 - 177)) * pow (a, IqY9xCNZiks);
            else
                pdEVYTxj = pdEVYTxj + (*Wg7X49RK-'A' + (260 - 250)) * pow (a, IqY9xCNZiks);
        };
    }
    return pdEVYTxj;
}

int JPWugRT2l (unsigned  long  int pdEVYTxj) {
    int IqY9xCNZiks;
    int YbqWBSHL;
    for (IqY9xCNZiks = (224 - 224); pdEVYTxj != 0; IqY9xCNZiks++) {
        AF4u93BlrRQS[IqY9xCNZiks] = pdEVYTxj % bphgnHWOfc3;
        pdEVYTxj = pdEVYTxj / bphgnHWOfc3;
    }
    YbqWBSHL = IqY9xCNZiks -(573 - 572);
    return YbqWBSHL;
}

void  y7O8xRmY3 (int YbqWBSHL) {
    int IqY9xCNZiks;
    if (YbqWBSHL < 0)
        printf ("0");
    for (IqY9xCNZiks = YbqWBSHL; IqY9xCNZiks >= 0; IqY9xCNZiks--) {
        if (AF4u93BlrRQS[IqY9xCNZiks] > (684 - 675)) {
            AF4u93BlrRQS[IqY9xCNZiks] += 'A' - (107 - 97);
            printf ("%c", AF4u93BlrRQS[IqY9xCNZiks]);
        }
        else
            printf ("%d", AF4u93BlrRQS[IqY9xCNZiks]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    };
}

void  main () {
    int YbqWBSHL;
    y7O8xRmY3 (YbqWBSHL);
    char Krj2MwUpiDFW [100] = {'\0'};
    unsigned  long  int pdEVYTxj;
    scanf ("%d %s %d", &a, Krj2MwUpiDFW, &bphgnHWOfc3);
    pdEVYTxj = zEiHT8SFtw2 (Krj2MwUpiDFW);
    YbqWBSHL = JPWugRT2l (pdEVYTxj);
}

