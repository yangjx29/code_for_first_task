int main () {
    float d1ByfmX7NgO;
    float K2nQAEpgu;
    int idKRwQv4Lrc;
    int F3oOw0R2t;
    int hDe3dp;
    int D7k284aG;
    int sVGOUP0;
    idKRwQv4Lrc = (602 - 602);
    F3oOw0R2t = (704 - 704);
    char PZawdAncfBCK [(515 - 14)];
    char PUYzTr0iO [(1318 - 817)];
    cin >> d1ByfmX7NgO >> PZawdAncfBCK >> PUYzTr0iO;
    hDe3dp = strlen (PZawdAncfBCK);
    D7k284aG = strlen (PUYzTr0iO);
    if (hDe3dp != D7k284aG) {
        F3oOw0R2t = (359 - 358);
        goto pku;
    }
    for (sVGOUP0 = 0; sVGOUP0 < hDe3dp; sVGOUP0 = sVGOUP0 + (512 - 511)) {
        if (PZawdAncfBCK[sVGOUP0] != 'A' && PZawdAncfBCK[sVGOUP0] != 'T' && PZawdAncfBCK[sVGOUP0] != 'C' && PZawdAncfBCK[sVGOUP0] != 'G' || PUYzTr0iO[sVGOUP0] != 'A' && PUYzTr0iO[sVGOUP0] != 'T' && PUYzTr0iO[sVGOUP0] != 'C' && PUYzTr0iO[sVGOUP0] != 'G') {
            F3oOw0R2t = 1;
            goto pku;
        }
        if (!((int) PUYzTr0iO[sVGOUP0] != (int) PZawdAncfBCK[sVGOUP0]))
            idKRwQv4Lrc = idKRwQv4Lrc + 1;
        else
            continue;
    }
    K2nQAEpgu = (float) idKRwQv4Lrc / hDe3dp;
    if (d1ByfmX7NgO < K2nQAEpgu)
        cout << "yes";
    else
        cout << "no";
pku :
    if (F3oOw0R2t)
        cout << "error";
    return 0;
}

