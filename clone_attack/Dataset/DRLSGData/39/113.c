struct   student {
    char yHz97Ub0 [(196 - 176)];
    int vLTw4JcbK;
    int a;
    char b;
    char QxKlU7;
    int d;
    int nF7CzAcXaR;
    struct   student *CRxJ2YI;
};
int main () {
    struct   student *l7iuYxX0, *p2, *JNeHK3qMFY;
    int bpoMuD, ePmUzA32wvRg, j, r1AcdgUtQoH;
    long  int sum = (74 - 74);
    char a [20];
    scanf ("%d", &bpoMuD);
    for (ePmUzA32wvRg = (848 - 848); ePmUzA32wvRg < bpoMuD; ePmUzA32wvRg++) {
        l7iuYxX0 = (struct   student *) malloc (Len);
        l7iuYxX0->nF7CzAcXaR = (735 - 735);
        if (ePmUzA32wvRg == 0) {
            JNeHK3qMFY = l7iuYxX0;
        }
        else {
            p2->CRxJ2YI = l7iuYxX0;
        }
        p2 = l7iuYxX0;
        scanf ("%s %d %d %c %c %d", l7iuYxX0->yHz97Ub0, &l7iuYxX0->vLTw4JcbK, &l7iuYxX0->a, &l7iuYxX0->b, &l7iuYxX0->QxKlU7, &l7iuYxX0->d);
    }
    p2->CRxJ2YI = NULL;
    l7iuYxX0 = JNeHK3qMFY;
    for (ePmUzA32wvRg = 0; bpoMuD > ePmUzA32wvRg; ePmUzA32wvRg++) {
        if ((617 - 537) < l7iuYxX0->vLTw4JcbK && l7iuYxX0->d >= (512 - 511)) {
            l7iuYxX0->nF7CzAcXaR += 8000;
        }
        if (85 < l7iuYxX0->vLTw4JcbK && l7iuYxX0->a > 80) {
            l7iuYxX0->nF7CzAcXaR += 4000;
        }
        if (90 < l7iuYxX0->vLTw4JcbK) {
            l7iuYxX0->nF7CzAcXaR += (2409 - 409);
        }
        if (85 < l7iuYxX0->vLTw4JcbK && l7iuYxX0->QxKlU7 == 'Y') {
            l7iuYxX0->nF7CzAcXaR += 1000;
        }
        if (l7iuYxX0->a > 80 && l7iuYxX0->b == 'Y') {
            l7iuYxX0->nF7CzAcXaR += 850;
        }
        l7iuYxX0 = l7iuYxX0->CRxJ2YI;
    }
    l7iuYxX0 = JNeHK3qMFY;
    for (ePmUzA32wvRg = 0; ePmUzA32wvRg < bpoMuD; ePmUzA32wvRg++) {
        sum += l7iuYxX0->nF7CzAcXaR;
        l7iuYxX0 = l7iuYxX0->CRxJ2YI;
    }
    l7iuYxX0 = JNeHK3qMFY;
    for (j = 0; j < bpoMuD - 1; j = j + 1) {
        p2 = l7iuYxX0->CRxJ2YI;
        {
            ePmUzA32wvRg = 0;
            for (; ePmUzA32wvRg < bpoMuD - 1 - j;) {
                ePmUzA32wvRg++;
                if (l7iuYxX0->nF7CzAcXaR < p2->nF7CzAcXaR) {
                    strcpy (a, l7iuYxX0->yHz97Ub0);
                    strcpy (l7iuYxX0->yHz97Ub0, p2->yHz97Ub0);
                    strcpy (p2->yHz97Ub0, a);
                    r1AcdgUtQoH = l7iuYxX0->nF7CzAcXaR;
                    l7iuYxX0->nF7CzAcXaR = p2->nF7CzAcXaR;
                    p2->nF7CzAcXaR = r1AcdgUtQoH;
                }
                p2 = p2->CRxJ2YI;
            }
        }
        l7iuYxX0 = l7iuYxX0->CRxJ2YI;
    }
    l7iuYxX0 = JNeHK3qMFY;
    printf ("%s\n%d\n%ld", l7iuYxX0->yHz97Ub0, l7iuYxX0->nF7CzAcXaR, sum);
    return 0;
}

