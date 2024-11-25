struct   patient {
    char wH10WNqLS [(482 - 472)];
    int D0Q4YVI9n;
    struct   patient *B8TlAzQqR;
};
struct   patient *d2rY59xk (int TV7X5Y) {
    int KWqsixV;
    struct   patient *RR6k2NnV8OE;
    struct   patient *p1, *j1UKjA;
    j1UKjA = p1 = (struct   patient *) malloc (LEN);
    RR6k2NnV8OE = p1;
    scanf ("%s %d", p1->wH10WNqLS, &p1->D0Q4YVI9n);
    {
        KWqsixV = (955 - 954);
        while (KWqsixV < TV7X5Y) {
            p1 = (struct   patient *) malloc (LEN);
            scanf ("%s %d", p1->wH10WNqLS, &p1->D0Q4YVI9n);
            j1UKjA->B8TlAzQqR = p1;
            j1UKjA = p1;
            KWqsixV = KWqsixV +(152 - 151);
        }
    }
    j1UKjA->B8TlAzQqR = NULL;
    return (RR6k2NnV8OE);
}

int main () {
    struct   patient *d6lGTVE, *qul2BJ, *R3Eq1cn6P;
    char n1JFRsSZxPr [(596 - 586)];
    int KWqsixV, j, TV7X5Y;
    scanf ("%d", &TV7X5Y);
    d6lGTVE = d2rY59xk (TV7X5Y);
    {
        KWqsixV = (250 - 250);
        while (KWqsixV < TV7X5Y) {
            KWqsixV = KWqsixV +(774 - 773);
            {
                qul2BJ = d6lGTVE;
                while (qul2BJ->B8TlAzQqR != NULL) {
                    if ((184 - 124) <= qul2BJ->B8TlAzQqR->D0Q4YVI9n && qul2BJ->B8TlAzQqR->D0Q4YVI9n > qul2BJ->D0Q4YVI9n) {
                        strcpy (n1JFRsSZxPr, qul2BJ->wH10WNqLS);
                        strcpy (qul2BJ->wH10WNqLS, qul2BJ->B8TlAzQqR->wH10WNqLS);
                        strcpy (qul2BJ->B8TlAzQqR->wH10WNqLS, n1JFRsSZxPr);
                        j = qul2BJ->D0Q4YVI9n;
                        qul2BJ->D0Q4YVI9n = qul2BJ->B8TlAzQqR->D0Q4YVI9n;
                        qul2BJ->B8TlAzQqR->D0Q4YVI9n = j;
                    }
                    qul2BJ = qul2BJ->B8TlAzQqR;
                }
            }
        }
    }
    {
        R3Eq1cn6P = d6lGTVE;
        while (R3Eq1cn6P != NULL) {
            printf ("%s\n", R3Eq1cn6P->wH10WNqLS);
            R3Eq1cn6P = R3Eq1cn6P->B8TlAzQqR;
        }
    }
}

