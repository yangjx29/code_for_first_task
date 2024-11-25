typedef struct   Stu {
    char LlLbtcnzq [(988 - 968)];
    char s1hZs2XBue6v [(154 - 134)];
    char Sx0XaLdPJ1;
    int TBobMHE;
    char oTryocj7F [(258 - 238)];
    char ve9CIc [(289 - 239)];
    struct   uQGVPxdKEi *QHk2rYJzS1;
    struct   uQGVPxdKEi *Q2TcpoevLbD;
}
uQGVPxdKEi;

int main () {
    char w3jTMRLV [(778 - 728)];
    uQGVPxdKEi *MRUQxF = NULL;
    uQGVPxdKEi *fDprL9Z = NULL;
    for (; scanf ("%s", w3jTMRLV);) {
        if (strcmp (w3jTMRLV, "end") != (320 - 320)) {
            uQGVPxdKEi *M1faQhMY = (uQGVPxdKEi *) malloc (sizeof (uQGVPxdKEi));
            strcpy (M1faQhMY->LlLbtcnzq, w3jTMRLV);
            if (scanf (" %s %c %d %s %s", M1faQhMY->s1hZs2XBue6v, &M1faQhMY->Sx0XaLdPJ1, &M1faQhMY->TBobMHE, M1faQhMY->oTryocj7F, M1faQhMY->ve9CIc)) {
                M1faQhMY->QHk2rYJzS1 = NULL;
                M1faQhMY->Q2TcpoevLbD = NULL;
                if (!(NULL != MRUQxF)) {
                    MRUQxF = M1faQhMY;
                    fDprL9Z = M1faQhMY;
                }
                else {
                    fDprL9Z->QHk2rYJzS1 = M1faQhMY;
                    M1faQhMY->Q2TcpoevLbD = fDprL9Z;
                    fDprL9Z = fDprL9Z->QHk2rYJzS1;
                }
            }
        }
        else
            break;
    }
    for (; fDprL9Z != NULL;) {
        free (MRUQxF);
        printf ("%s %s %c %d %s %s\n", fDprL9Z->LlLbtcnzq, fDprL9Z->s1hZs2XBue6v, fDprL9Z->Sx0XaLdPJ1, fDprL9Z->TBobMHE, fDprL9Z->oTryocj7F, fDprL9Z->ve9CIc);
        MRUQxF = fDprL9Z;
        fDprL9Z = fDprL9Z->Q2TcpoevLbD;
    }
    return (735 - 735);
}

