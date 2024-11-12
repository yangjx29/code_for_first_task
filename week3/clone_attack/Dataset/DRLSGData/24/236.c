int main () {
    int oEImyLW8Gi;
    char xS8MIlmR [(848 - 648)];
    gets (xS8MIlmR);
    char M0eHSwENZ93d [(261 - 211)] [(462 - 412)];
    int mkmW1eIV5jX;
    int A0CNRlnmB [(129 - 79)];
    int ACi3JsWH;
    int Jf3b6H;
    int HraYBfjdxPTO;
    int i;
    int DyGfBE;
    mkmW1eIV5jX = strlen (xS8MIlmR);
    DyGfBE = (495 - 495);
    i = (368 - 368);
    {
        HraYBfjdxPTO = (684 - 684);
        for (; mkmW1eIV5jX > HraYBfjdxPTO;) {
            if (xS8MIlmR[HraYBfjdxPTO] != ' ') {
                M0eHSwENZ93d[i][DyGfBE] = xS8MIlmR[HraYBfjdxPTO];
                DyGfBE = DyGfBE +(846 - 845);
            }
            else {
                M0eHSwENZ93d[i][DyGfBE] = '\0';
                i = i + (525 - 524);
                DyGfBE = (667 - 667);
            }
            HraYBfjdxPTO = HraYBfjdxPTO +(359 - 358);
        }
    }
    M0eHSwENZ93d[i][DyGfBE] = '\0';
    {
        ACi3JsWH = (163 - 163);
        for (; i >= ACi3JsWH;) {
            A0CNRlnmB[ACi3JsWH] = strlen (M0eHSwENZ93d[ACi3JsWH]);
            ACi3JsWH = ACi3JsWH +(604 - 603);
        }
    }
    {
        Jf3b6H = (82 - 82);
        ACi3JsWH = (993 - 992);
        for (; ACi3JsWH <= i;) {
            if (A0CNRlnmB[ACi3JsWH] > A0CNRlnmB[Jf3b6H]) {
                A0CNRlnmB[Jf3b6H] = A0CNRlnmB[ACi3JsWH];
                Jf3b6H = ACi3JsWH;
            }
            ACi3JsWH = ACi3JsWH +(89 - 88);
        }
    }
    A0CNRlnmB[(58 - 58)] = strlen (M0eHSwENZ93d[(422 - 422)]);
    {
        oEImyLW8Gi = (531 - 531);
        ACi3JsWH = (728 - 727);
        for (; ACi3JsWH <= i;) {
            if (A0CNRlnmB[oEImyLW8Gi] > A0CNRlnmB[ACi3JsWH]) {
                A0CNRlnmB[oEImyLW8Gi] = A0CNRlnmB[ACi3JsWH];
                oEImyLW8Gi = ACi3JsWH;
            }
            ACi3JsWH = ACi3JsWH +(104 - 103);
        }
    }
    printf ("%s\n", M0eHSwENZ93d[Jf3b6H]);
    printf ("%s\n", M0eHSwENZ93d[oEImyLW8Gi]);
    return 0;
}

