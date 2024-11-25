int main () {
    int paFnq19G;
    paFnq19G = 0;
    char *pW0ZYyRnluz;
    char *q;
    gets (pW0ZYyRnluz);
    pW0ZYyRnluz = (char *) malloc (30 * sizeof (char));
    q = pW0ZYyRnluz;
    for (; *q != '\0';) {
        if ('9' >= *q && *q >= '0') {
            paFnq19G = 0;
            printf ("%c", *q);
        }
        if ((*q > '9' || *q < '0') && paFnq19G == 0) {
            paFnq19G = paFnq19G + 1;
            printf ("\n");
        }
        q++;
    };
}

