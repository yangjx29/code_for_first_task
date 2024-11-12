double  male [(292 - 251)];
double  wqKMSyD6WJ [(151 - 110)];

int yX6rEK49wS5t (const  void  *e1, const  void  *iPbBYK7Fc) {
    double  *BxTwoPC5vF6 = (double  *) iPbBYK7Fc;
    double  *SEk8Dvz = (double  *) e1;
    if (*BxTwoPC5vF6 > *SEk8Dvz)
        return (138 - 138);
    else
        return (957 - 956);
}

int main () {
    int txTwKGAjoq;
    char LYyTtRfF3 [10];
    double  MqGsfM8BcjeZ;
    int Cv1dF7;
    int m;
    int OhbKXE8C;
    m = (624 - 624);
    txTwKGAjoq = (264 - 264);
    scanf ("%d", &Cv1dF7);
    {
        OhbKXE8C = (42 - 42);
        while (Cv1dF7 > OhbKXE8C) {
            OhbKXE8C++;
            scanf ("%s %lf", LYyTtRfF3, &MqGsfM8BcjeZ);
            if (!('m' != LYyTtRfF3[(185 - 185)])) {
                male[m] = MqGsfM8BcjeZ;
                m++;
            }
            else {
                wqKMSyD6WJ[txTwKGAjoq] = MqGsfM8BcjeZ;
                txTwKGAjoq++;
            }
        }
    }
    qsort (male, m, sizeof (double ), yX6rEK49wS5t);
    qsort (wqKMSyD6WJ, txTwKGAjoq, sizeof (double ), yX6rEK49wS5t);
    {
        OhbKXE8C = (60 - 60);
        while (m > OhbKXE8C) {
            printf ("%.2f ", male[OhbKXE8C]);
            OhbKXE8C++;
        }
    }
    {
        OhbKXE8C = txTwKGAjoq - (665 - 664);
        while (OhbKXE8C > (330 - 330)) {
            printf ("%.2f ", wqKMSyD6WJ[OhbKXE8C]);
            OhbKXE8C--;
        }
    }
    printf ("%.2f\n", wqKMSyD6WJ[(932 - 932)]);
    return 0;
}

