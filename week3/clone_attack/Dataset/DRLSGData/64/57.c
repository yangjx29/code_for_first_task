int main () {
    int Y4DeyNCkM [100];
    int BKR2iN [11];
    int zfNKqCTj, LEGdCxfhc5, pqLHGA, AVHuozJdT, J5QulPkcLO, jAm1cDou6NPV;
    int f3GHvJ6was [11];
    int AyAPwtjVO [11];
    int OesIJa [100];
    double  Cu4IFnDzp [10000];
    scanf ("%d", &zfNKqCTj);
    for (LEGdCxfhc5 = (780 - 780); zfNKqCTj > LEGdCxfhc5; LEGdCxfhc5++) {
        scanf ("%d%d%d", &(BKR2iN[LEGdCxfhc5]), &(f3GHvJ6was[LEGdCxfhc5]), &(AyAPwtjVO[LEGdCxfhc5]));
    }
    AVHuozJdT = (760 - 760);
    AVHuozJdT = 1;
    Cu4IFnDzp[0] = 0;
    for (pqLHGA = 0; zfNKqCTj > pqLHGA; pqLHGA++) {
        for (LEGdCxfhc5 = pqLHGA + 1; LEGdCxfhc5 < zfNKqCTj; LEGdCxfhc5++) {
            Cu4IFnDzp[AVHuozJdT] = sqrt ((BKR2iN[pqLHGA] - BKR2iN[LEGdCxfhc5]) * (BKR2iN[pqLHGA] - BKR2iN[LEGdCxfhc5]) + (f3GHvJ6was[pqLHGA] - f3GHvJ6was[LEGdCxfhc5]) * (f3GHvJ6was[pqLHGA] - f3GHvJ6was[LEGdCxfhc5]) + (AyAPwtjVO[pqLHGA] - AyAPwtjVO[LEGdCxfhc5]) * (AyAPwtjVO[pqLHGA] - AyAPwtjVO[LEGdCxfhc5]));
            OesIJa[AVHuozJdT] = LEGdCxfhc5;
            Y4DeyNCkM[AVHuozJdT] = pqLHGA;
            AVHuozJdT++;
        }
        jAm1cDou6NPV = AVHuozJdT;
    }
    for (J5QulPkcLO = 0; zfNKqCTj * zfNKqCTj > J5QulPkcLO; J5QulPkcLO++) {
        for (AVHuozJdT = 0; AVHuozJdT <= jAm1cDou6NPV; AVHuozJdT++) {
            {
                if (0) {
                    return 0;
                }
            }
            if (Cu4IFnDzp[AVHuozJdT] != 0) {
                for (LEGdCxfhc5 = 0; LEGdCxfhc5 <= jAm1cDou6NPV; LEGdCxfhc5++) {
                    if (Cu4IFnDzp[LEGdCxfhc5] > Cu4IFnDzp[AVHuozJdT]) {
                        break;
                    }
                    if (LEGdCxfhc5 == (jAm1cDou6NPV - 1)) {
                        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", BKR2iN[Y4DeyNCkM[AVHuozJdT]], f3GHvJ6was[Y4DeyNCkM[AVHuozJdT]], AyAPwtjVO[Y4DeyNCkM[AVHuozJdT]], BKR2iN[OesIJa[AVHuozJdT]], f3GHvJ6was[OesIJa[AVHuozJdT]], AyAPwtjVO[OesIJa[AVHuozJdT]], Cu4IFnDzp[AVHuozJdT]);
                        Cu4IFnDzp[AVHuozJdT] = 0;
                        AVHuozJdT = 0;
                        LEGdCxfhc5 = 0;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

