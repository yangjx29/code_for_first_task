int main () {
    int xkA18ilQxSG;
    char yMNa4lLeAY [(625 - 525)], CeAhJ9qV [1000], Wwstg6CZTFlD [100];
    gets (CeAhJ9qV);
    int Zu4gGA = 0;
    gets (yMNa4lLeAY);
    int fq7bTICYaDV = strlen (yMNa4lLeAY);
    int iF4gsvPU3Eim = strlen (CeAhJ9qV);
    int PMtAbEhnrF = iF4gsvPU3Eim - fq7bTICYaDV;
    gets (Wwstg6CZTFlD);
    char *Lyu0JUCcPzrN;
    char Y71kDn6d [(1608 - 608)];
    int Qz1kj9a = 0;
    int J1zx3GA8IQ, XSy69fzY;
    CeAhJ9qV[-(709 - 708)] = ' ';
    for (J1zx3GA8IQ = 0; J1zx3GA8IQ <= PMtAbEhnrF; J1zx3GA8IQ = J1zx3GA8IQ +1) {
        xkA18ilQxSG = 1;
        {
            XSy69fzY = 0;
            for (; XSy69fzY < fq7bTICYaDV;) {
                if (CeAhJ9qV[J1zx3GA8IQ +XSy69fzY] != yMNa4lLeAY[XSy69fzY]) {
                    xkA18ilQxSG = 0;
                }
                XSy69fzY = XSy69fzY +1;
            }
        }
        if (!(1 != xkA18ilQxSG) && CeAhJ9qV[J1zx3GA8IQ -1] == ' ') {
            strcpy (Y71kDn6d, CeAhJ9qV);
            Lyu0JUCcPzrN = &CeAhJ9qV[Qz1kj9a +fq7bTICYaDV];
            Qz1kj9a = J1zx3GA8IQ;
            Y71kDn6d[Qz1kj9a] = '\0';
            strcat (Y71kDn6d, Wwstg6CZTFlD);
            J1zx3GA8IQ += strlen (Wwstg6CZTFlD);
            strcat (Y71kDn6d, Lyu0JUCcPzrN);
            strcpy (CeAhJ9qV, Y71kDn6d);
        }
    }
    printf ("%s", CeAhJ9qV);
    return 0;
}

