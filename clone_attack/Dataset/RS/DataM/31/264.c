struct   student {
    char num [(701 - 681)], z4fCgUsQpiPO [20], CmWLfgnDx [20], xb;
    int year;
    float score;
    struct   student *next, *L952h1;
};
struct   student *vyPQoB () {
    struct   student *en9XMirvNbJ8, *e7pQVWMfUe, *fTvNIALlZ;
    e7pQVWMfUe = (struct   student *) malloc (LEN);
    scanf (TYPE, e7pQVWMfUe->num, e7pQVWMfUe->z4fCgUsQpiPO, &e7pQVWMfUe->xb, &e7pQVWMfUe->year, &e7pQVWMfUe->score, e7pQVWMfUe->CmWLfgnDx);
    en9XMirvNbJ8 = e7pQVWMfUe;
    e7pQVWMfUe->L952h1 = NULL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    fTvNIALlZ = e7pQVWMfUe;
    for (; (592 - 591);) {
        e7pQVWMfUe = (struct   student *) malloc (LEN);
        scanf ("%s", e7pQVWMfUe->num);
        if (!((769 - 769) != strcmp (e7pQVWMfUe->num, "end"))) {
            free (e7pQVWMfUe);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            break;
        }
        scanf ("%s %c %d %f %s", e7pQVWMfUe->z4fCgUsQpiPO, &e7pQVWMfUe->xb, &e7pQVWMfUe->year, &e7pQVWMfUe->score, e7pQVWMfUe->CmWLfgnDx);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        fTvNIALlZ->next = e7pQVWMfUe;
        e7pQVWMfUe->L952h1 = fTvNIALlZ;
        fTvNIALlZ = e7pQVWMfUe;
    }
    fTvNIALlZ->next = NULL;
    return fTvNIALlZ;
}

int main () {
    struct   student *en9XMirvNbJ8;
    struct   student *uW420nBf;
    en9XMirvNbJ8 = vyPQoB ();
    uW420nBf = en9XMirvNbJ8;
    while (uW420nBf != NULL) {
        printf ("%s %s %c %d %g %s", uW420nBf->num, uW420nBf->z4fCgUsQpiPO, uW420nBf->xb, uW420nBf->year, uW420nBf->score, uW420nBf->CmWLfgnDx);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        uW420nBf = uW420nBf->L952h1;
    }
    return 0;
}

