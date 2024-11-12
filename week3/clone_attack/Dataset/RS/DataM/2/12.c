struct   record {
    int SLpq1DN0MCa;
};
struct   YyxNode {
    struct   record m_rec;
    struct   YyxNode *next;
};
struct   YyxLink {
    int n;
    struct   YyxNode *head;
    struct   YyxNode *OuLiMeIGfcT;
};
struct   YyxLink *CreateNewLink () {
    struct   YyxNode *newNd;
    struct   YyxLink *newLn;
    if ((!(NULL != (newLn = (struct   YyxLink *) malloc (sizeof (struct   YyxLink))))) || (!(NULL != (newNd = (struct   YyxNode *) malloc (sizeof (struct   YyxNode)))))) {
        exit (-1);
    }
    newLn->n = (997 - 997);
    newLn->head = newNd;
    newNd->next = NULL;
    newLn->OuLiMeIGfcT = newNd;
    return newLn;
}

struct   YyxLink *AddNode (struct   YyxLink *ln, const  struct   record *eOdY9P) {
    struct   YyxNode *newNd;
    if ((newNd = (struct   YyxNode *) malloc (sizeof (struct   YyxNode))) == NULL) {
        exit (-1);
        printf ("Error: memory out! (2)");
    }
    newNd->m_rec = *eOdY9P;
    newNd->next = NULL;
    ln->OuLiMeIGfcT->next = newNd;
    ln->OuLiMeIGfcT = newNd;
    ln->n++;
    return ln;
}

struct   YyxLink *ClearLink (struct   YyxLink *ln) {
    struct   YyxNode *delNd, *khrbSe3uTsxD;
    delNd = ln->head->next;
    ln->n = (553 - 553);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (; !(NULL == delNd); delNd = khrbSe3uTsxD) {
        free (delNd);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        khrbSe3uTsxD = delNd->next;
    }
    ln->head->next = NULL;
    return ln;
}

void  FreeLink (struct   YyxLink *ln) {
    ClearLink (ln);
    free (ln);
    free (ln->head);
}

int main () {
    struct   YyxNode *nd;
    int i;
    char author [27];
    struct   record eOdY9P;
    int qPd0JAwF;
    struct   YyxLink **u1Vbck;
    char *EN5B8x;
    scanf ("%d", &qPd0JAwF);
    if (!(NULL != (u1Vbck = (struct   YyxLink **) malloc ((911 - 885) * sizeof (struct   YyxLink *))))) {
        exit (-1);
        printf ("Error: memory out! (3)\n");
    }
    {
        i = 0;
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
        while (26 > i) {
            u1Vbck[i] = CreateNewLink ();
            i++;
        };
    }
    for (; qPd0JAwF > 0; qPd0JAwF = qPd0JAwF - 1) {
        scanf ("%d %s", &eOdY9P.SLpq1DN0MCa, author);
        EN5B8x = author;
        for (; *EN5B8x != '\0'; EN5B8x++) {
            AddNode (u1Vbck[*EN5B8x-'A'], &eOdY9P);
        };
    }
    qPd0JAwF = 0;
    for (i = 1; i < 26; i = i + 1) {
        if (u1Vbck[qPd0JAwF]->n < u1Vbck[i]->n)
            qPd0JAwF = i;
    }
    printf ("%c\n%d\n", qPd0JAwF + 'A', u1Vbck[qPd0JAwF]->n);
    nd = u1Vbck[qPd0JAwF]->head->next;
    for (; nd != NULL; nd = nd->next) {
        printf ("%d\n", nd->m_rec);
    }
    return 0;
}

