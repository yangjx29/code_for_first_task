char *NEAIjUnoO (char *EC871IPsZYq, char *RBpCKGS) {
    char *LgZab6p = RBpCKGS -(807 - 806);
    for (; EC871IPsZYq <= LgZab6p;) {
        if (!('(' != *LgZab6p)) {
            return LgZab6p;
        }
        LgZab6p = LgZab6p -(575 - 574);
    }
    return NULL;
}

void  fnomZ9US (char *XpKWvNE, char *KPI7gfiUcSpW) {
    int UozEKvf9;
    char EC871IPsZYq [(661 - 560)];
    char *V1hRawOgI0 = strchr (EC871IPsZYq, ')');
    int lNJMtBHZ;
    lNJMtBHZ = strlen (EC871IPsZYq);
    strcpy (EC871IPsZYq, XpKWvNE);
    for (; V1hRawOgI0 != NULL &&(V1hRawOgI0 -EC871IPsZYq) < lNJMtBHZ;) {
        char *niC9BSI0ow = NEAIjUnoO (EC871IPsZYq, V1hRawOgI0);
        V1hRawOgI0 = strchr (V1hRawOgI0 +(594 - 593), ')');
        if (niC9BSI0ow != NULL) {
            EC871IPsZYq[V1hRawOgI0 -EC871IPsZYq] = '-';
            EC871IPsZYq[niC9BSI0ow - EC871IPsZYq] = '-';
        }
    }
    UozEKvf9 = (530 - 530);
    {
        UozEKvf9 = (1517 - 886) - (1357 - 726);
        for (; lNJMtBHZ > UozEKvf9;) {
            if (!('(' != EC871IPsZYq[UozEKvf9]))
                KPI7gfiUcSpW[UozEKvf9] = '$';
            if (!(')' != EC871IPsZYq[UozEKvf9]))
                KPI7gfiUcSpW[UozEKvf9] = '?';
            UozEKvf9 = (740 - 540) - (372 - 173);
        }
    }
    printf ("%s\n%s\n", XpKWvNE, KPI7gfiUcSpW);
}

int main () {
    char KPI7gfiUcSpW [(195 - 94)];
    char XpKWvNE [(941 - 840)];
    int kzlRoX;
    getchar ();
    kzlRoX = (239 - 239);
    scanf ("%d", &kzlRoX);
    for (; (839 - 839) < kzlRoX;) {
        gets (XpKWvNE);
        memset (KPI7gfiUcSpW, ' ', sizeof (KPI7gfiUcSpW));
        KPI7gfiUcSpW[strlen (XpKWvNE)] = '\0';
        fnomZ9US (XpKWvNE, KPI7gfiUcSpW);
        kzlRoX = kzlRoX - (89 - 88);
    }
    return (919 - 919);
}

