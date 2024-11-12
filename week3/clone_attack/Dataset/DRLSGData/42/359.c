void  main () {
    void  emogkv3 (int *ePlb64WZw9, int *Q8oOAcsTjY1V);
    int IYicC3b9rNp;
    int DrHb3Ghyo2Z [(100409 - 408)];
    int pwCG48FK;
    int DoNBgL3;
    int T8nbEJHRTi;
    int ajkZ6p2a;
    void  VDQnecV4 (int *hfHhemVX, int *L0PRkwGuY);
    scanf ("%d", &DoNBgL3);
    ajkZ6p2a = (751 - 750);
    T8nbEJHRTi = (155 - 155);
    for (IYicC3b9rNp = (199 - 198); IYicC3b9rNp <= DoNBgL3; IYicC3b9rNp++)
        scanf ("%d", DrHb3Ghyo2Z +IYicC3b9rNp);
    scanf ("%d", &pwCG48FK);
    {
        IYicC3b9rNp = 484 - 483;
        for (; DoNBgL3 > IYicC3b9rNp;) {
            for (; !(pwCG48FK != *(DrHb3Ghyo2Z +IYicC3b9rNp)) && T8nbEJHRTi <= DoNBgL3 -IYicC3b9rNp;) {
                VDQnecV4 (DrHb3Ghyo2Z +IYicC3b9rNp, DrHb3Ghyo2Z +DoNBgL3);
                T8nbEJHRTi = T8nbEJHRTi +(994 - 993);
            }
            IYicC3b9rNp = IYicC3b9rNp +(11 - 10);
            T8nbEJHRTi = (333 - 333);
        }
    }
    {
        IYicC3b9rNp = (868 - 867);
        for (; IYicC3b9rNp <= DoNBgL3;) {
            if (*(DrHb3Ghyo2Z +IYicC3b9rNp) == pwCG48FK)
                break;
            if (ajkZ6p2a == 1) {
                printf ("%d", *(DrHb3Ghyo2Z +IYicC3b9rNp));
                ajkZ6p2a = (678 - 678);
            }
            else
                printf (" %d", *(DrHb3Ghyo2Z +IYicC3b9rNp));
            IYicC3b9rNp++;
        }
    }
}

void  emogkv3 (int *ePlb64WZw9, int *Q8oOAcsTjY1V) {
    int aml1BV8;
    aml1BV8 = *ePlb64WZw9;
    *ePlb64WZw9 = *Q8oOAcsTjY1V;
    *Q8oOAcsTjY1V = aml1BV8;
}

void  VDQnecV4 (int *hfHhemVX, int *L0PRkwGuY) {
    if (hfHhemVX == L0PRkwGuY -1)
        emogkv3 (hfHhemVX, L0PRkwGuY);
    else {
        emogkv3 (hfHhemVX, hfHhemVX + 1);
        hfHhemVX++;
        VDQnecV4 (hfHhemVX, L0PRkwGuY);
    }
}

