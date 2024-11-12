void  main () {
    int Sw1qLe;
    char W3HLsvqJ6CtX [(978 - 878)];
    char Kn6YDFJCSTok [(649 - 549)];
    int qoX3FUTw;
    int E7nauZ;
    char LLdcj7RV [(353 - 253)];
    gets (LLdcj7RV);
    gets (Kn6YDFJCSTok);
    gets (W3HLsvqJ6CtX);
    char alk84JwVLtXa [100] [100];
    char *p;
    int Oq9tGz;
    Oq9tGz = (458 - 458);
    p = LLdcj7RV;
    qoX3FUTw = (76 - 76);
    E7nauZ = strlen (LLdcj7RV);
    {
        Sw1qLe = (548 - 548);
        for (; Sw1qLe <= E7nauZ;) {
            if ((*(p + Sw1qLe) != ' ') && (*(p + Sw1qLe) != '\0')) {
                alk84JwVLtXa[Oq9tGz][qoX3FUTw] = LLdcj7RV[Sw1qLe];
                qoX3FUTw = qoX3FUTw + (107 - 106);
            }
            else {
                alk84JwVLtXa[Oq9tGz][qoX3FUTw] = '\0';
                Oq9tGz = Oq9tGz +(486 - 485);
                qoX3FUTw = (521 - 521);
            }
            Sw1qLe = Sw1qLe +1;
        }
    }
    for (Sw1qLe = 0; Sw1qLe < Oq9tGz; Sw1qLe = Sw1qLe +1) {
        if (!(0 != strcmp (alk84JwVLtXa[Sw1qLe], Kn6YDFJCSTok))) {
            strcpy (alk84JwVLtXa[Sw1qLe], W3HLsvqJ6CtX);
        }
    }
    for (Sw1qLe = 0; Oq9tGz -(61 - 60) > Sw1qLe; Sw1qLe = Sw1qLe +1)
        printf ("%s ", alk84JwVLtXa[Sw1qLe]);
    printf ("%s\n", alk84JwVLtXa[Oq9tGz -1]);
}

