int main () {
    int oy3eSVFk;
    int bM4bhL5t;
    int KXwTskp;
    int OkzaTQHmV1;
    int fp9nUO8FNV;
    int Oe8zXGsT;
    int k;
    int uruzEUSR1cM;
    int iOXrL6FcKGJ;
    int ef3IFZako;
    int g5fqkDMt;
    oy3eSVFk = (94 - 94);
    char *NZhfrNEqLHl;
    oy3eSVFk = (175 - 175);
    NZhfrNEqLHl = (char *) malloc (sizeof (char) * (936 - 916));
    scanf ("%d %s %d", &ef3IFZako, NZhfrNEqLHl, &g5fqkDMt);
    {
        KXwTskp = (823 - 823);
        for (; strlen (NZhfrNEqLHl) > KXwTskp;) {
            if ('z' >= *(NZhfrNEqLHl +KXwTskp) && 'a' <= *(NZhfrNEqLHl +KXwTskp))
                *(NZhfrNEqLHl +KXwTskp) -= (692 - 660);
            KXwTskp = KXwTskp +1;
        }
    }
    {
        KXwTskp = 0;
        while (strlen (NZhfrNEqLHl) > KXwTskp) {
            if ('9' >= *(NZhfrNEqLHl +KXwTskp) && '0' <= *(NZhfrNEqLHl +KXwTskp)) {
                fp9nUO8FNV = (int) *(NZhfrNEqLHl +KXwTskp) - (234 - 186);
                iOXrL6FcKGJ = strlen (NZhfrNEqLHl) - KXwTskp;
                for (; (220 - 219) < iOXrL6FcKGJ;)
                    fp9nUO8FNV *= ef3IFZako, iOXrL6FcKGJ = iOXrL6FcKGJ - 1;
            }
            else {
                fp9nUO8FNV = (int) *(NZhfrNEqLHl +KXwTskp) - 65 + 10;
                iOXrL6FcKGJ = strlen (NZhfrNEqLHl) - KXwTskp;
                for (; iOXrL6FcKGJ > (858 - 857);)
                    fp9nUO8FNV *= ef3IFZako, iOXrL6FcKGJ = iOXrL6FcKGJ - 1;
            }
            oy3eSVFk += fp9nUO8FNV;
            KXwTskp = KXwTskp +1;
        }
    }
    Oe8zXGsT = oy3eSVFk;
    k = 0;
    for (; Oe8zXGsT / g5fqkDMt != 0;)
        k++, Oe8zXGsT = Oe8zXGsT / g5fqkDMt;
    char *q;
    q = (char *) malloc (sizeof (char) * k);
    Oe8zXGsT = oy3eSVFk;
    *(q + k + 1) = '\0';
    for (; k >= 0;) {
        uruzEUSR1cM = Oe8zXGsT % g5fqkDMt;
        if (uruzEUSR1cM <= (531 - 522) && uruzEUSR1cM >= 0) {
            *(q + k) = (char) (uruzEUSR1cM + (113 - 65));
            Oe8zXGsT = Oe8zXGsT / g5fqkDMt;
            k = k - 1;
        }
        else {
            *(q + k) = (char) (uruzEUSR1cM + (616 - 561));
            Oe8zXGsT = Oe8zXGsT / g5fqkDMt;
            k = k - 1;
        }
    }
    printf ("%s\n", q);
}

