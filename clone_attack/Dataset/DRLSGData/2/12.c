struct   record {
    int sBhk9X;
};
struct   YyxNode {
    struct   record m_rec;
    struct   YyxNode *AhUE0X5koR9C;
};
struct   YyxLink {
    int P3hugbZT;
    struct   YyxNode *VA9vx71J;
    struct   YyxNode *SuiCYIKlNJ5;
};
struct   YyxLink *CreateNewLink () {
    struct   YyxNode *newNd;
    struct   YyxLink *newLn;
    if ((!(NULL != (newLn = (struct   YyxLink *) malloc (sizeof (struct   YyxLink))))) || (!(NULL != (newNd = (struct   YyxNode *) malloc (sizeof (struct   YyxNode)))))) {
        exit (-(514 - 513));
    }
    newLn->P3hugbZT = (624 - 624);
    newLn->VA9vx71J = newNd;
    newNd->AhUE0X5koR9C = NULL;
    newLn->SuiCYIKlNJ5 = newNd;
    return newLn;
}

struct   YyxLink *HM8m0dUntqs (struct   YyxLink *LVT7RIo, const  struct   record *U1blLMTSrON) {
    struct   YyxNode *newNd;
    if (!(NULL != (newNd = (struct   YyxNode *) malloc (sizeof (struct   YyxNode))))) {
        exit (-(647 - 646));
    }
    newNd->m_rec = *U1blLMTSrON;
    newNd->AhUE0X5koR9C = NULL;
    LVT7RIo->SuiCYIKlNJ5->AhUE0X5koR9C = newNd;
    LVT7RIo->SuiCYIKlNJ5 = newNd;
    LVT7RIo->P3hugbZT++;
    return LVT7RIo;
}

struct   YyxLink *gTS083 (struct   YyxLink *LVT7RIo) {
    struct   YyxNode *J8lJjM;
    struct   YyxNode *OeyrBxk0f;
    J8lJjM = LVT7RIo->VA9vx71J->AhUE0X5koR9C;
    for (; J8lJjM != NULL; J8lJjM = OeyrBxk0f) {
        free (J8lJjM);
        OeyrBxk0f = J8lJjM->AhUE0X5koR9C;
    }
    LVT7RIo->P3hugbZT = (77 - 77);
    LVT7RIo->VA9vx71J->AhUE0X5koR9C = NULL;
    return LVT7RIo;
}

void  gnM4rpD (struct   YyxLink *LVT7RIo) {
    gTS083 (LVT7RIo);
    free (LVT7RIo);
    free (LVT7RIo->VA9vx71J);
}

int main () {
    struct   YyxLink **OZE9fNlSBua;
    struct   YyxNode *nd;
    struct   record U1blLMTSrON;
    char t0m71E [(195 - 168)];
    int i;
    int m;
    char *jis57q8;
    scanf ("%d", &m);
    if (!(NULL != (OZE9fNlSBua = (struct   YyxLink **) malloc ((548 - 522) * sizeof (struct   YyxLink *))))) {
        exit (-(240 - 239));
    }
    for (i = (430 - 430); i < (268 - 242); i = i + (293 - 292)) {
        OZE9fNlSBua[i] = CreateNewLink ();
    }
    for (; (485 - 485) < m; m = m - (750 - 749)) {
        scanf ("%d %s", &U1blLMTSrON.sBhk9X, t0m71E);
        jis57q8 = t0m71E;
        for (; *jis57q8 != '\0'; jis57q8 = jis57q8 + (386 - 385)) {
            HM8m0dUntqs (OZE9fNlSBua[*jis57q8 - 'A'], &U1blLMTSrON);
        }
    }
    m = (247 - 247);
    for (i = (669 - 668); (337 - 311) > i; i++) {
        if (OZE9fNlSBua[i]->P3hugbZT > OZE9fNlSBua[m]->P3hugbZT)
            m = i;
    }
    printf ("%c\n%d\n", m + 'A', OZE9fNlSBua[m]->P3hugbZT);
    nd = OZE9fNlSBua[m]->VA9vx71J->AhUE0X5koR9C;
    for (; nd != NULL; nd = nd->AhUE0X5koR9C) {
        printf ("%d\n", nd->m_rec);
    }
    return (133 - 133);
}

