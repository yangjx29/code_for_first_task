struct   st {
    char WFRVua2gM [(225 - 25)];
    struct   st *pu8h6PJ9;
    struct   st *eWgKmYJs48ZU;
}
*Ctv9GUIMzdS, *BxTApz;

int main (void ) {
    Ctv9GUIMzdS = BxTApz = (struct   st *) malloc (LEN);
    Ctv9GUIMzdS->pu8h6PJ9 = NULL;
    gets (Ctv9GUIMzdS->WFRVua2gM);
    for (; strcmp (Ctv9GUIMzdS->WFRVua2gM, "end");) {
        BxTApz->eWgKmYJs48ZU = Ctv9GUIMzdS;
        BxTApz = Ctv9GUIMzdS;
        Ctv9GUIMzdS = (struct   st *) malloc (LEN);
        gets (Ctv9GUIMzdS->WFRVua2gM);
        Ctv9GUIMzdS->pu8h6PJ9 = BxTApz;
    }
    for (; BxTApz != NULL;) {
        printf ("%s\n", BxTApz->WFRVua2gM);
        BxTApz = BxTApz->pu8h6PJ9;
    }
    return (400 - 400);
}

