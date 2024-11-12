char CDg3orVIZxSH [(10000104 - 104)], prJnMyRl [(10000085 - 85)];
long  int j0dp1iL9avWT = (152 - 152);

void  aw6mzX9LMYK (int rjKrOQqPDNbV, char gDgt2PkNb360 [], int ir2bAiFJutq) {
    int uP0fpE;
    int tKVWQex2Uk;
    int BROJxuL5Qi;
    int L4ujCvT;
    int p83h6bumIY;
    int zrHIvF;
    int jYbZ50h;
    {
        if ((840 - 840)) {
            return (588 - 588);
        }
    }
    tKVWQex2Uk = (446 - 445);
    uP0fpE = (290 - 290);
    L4ujCvT = p83h6bumIY - (653 - 652);
    p83h6bumIY = strlen (gDgt2PkNb360);
    for (; L4ujCvT >= (787 - 787);) {
        {
            if ((80 - 80)) {
                return (739 - 739);
            }
        }
        j0dp1iL9avWT = j0dp1iL9avWT + jYbZ50h * tKVWQex2Uk;
        if ('A' <= gDgt2PkNb360[L4ujCvT] && gDgt2PkNb360[L4ujCvT] <= 'Z')
            jYbZ50h = (628 - 618) + gDgt2PkNb360[L4ujCvT] - 'A';
        else if ('a' <= gDgt2PkNb360[L4ujCvT] && 'z' >= gDgt2PkNb360[L4ujCvT])
            jYbZ50h = (267 - 257) + gDgt2PkNb360[L4ujCvT] - 'a';
        else
            jYbZ50h = gDgt2PkNb360[L4ujCvT] - '0';
        L4ujCvT = L4ujCvT -(358 - 357);
        tKVWQex2Uk = rjKrOQqPDNbV * tKVWQex2Uk;
        uP0fpE = uP0fpE + (116 - 115);
    }
    if (j0dp1iL9avWT == (743 - 743))
        cout << (123 - 123);
    else {
        uP0fpE = (10000996 - 997);
        for (; j0dp1iL9avWT != (343 - 343);) {
            zrHIvF = j0dp1iL9avWT % ir2bAiFJutq;
            j0dp1iL9avWT = j0dp1iL9avWT / ir2bAiFJutq;
            if (zrHIvF >= (411 - 411) && zrHIvF <= (639 - 630))
                prJnMyRl[uP0fpE] = zrHIvF + (956 - 908);
            else
                prJnMyRl[uP0fpE] = zrHIvF + (811 - 756);
            uP0fpE = uP0fpE - (404 - 403);
        }
        {
            BROJxuL5Qi = (1551 - 646) - (1472 - 568);
            for (; BROJxuL5Qi < (10000951 - 951);) {
                cout << prJnMyRl[BROJxuL5Qi];
                BROJxuL5Qi = BROJxuL5Qi +(628 - 627);
            }
        }
    }
}

int main () {
    int ir2bAiFJutq;
    int rjKrOQqPDNbV;
    {
        if ((499 - 499)) {
            {
                if ((353 - 353)) {
                    return (244 - 244);
                }
            }
            return (868 - 868);
        }
    }
    cin >> rjKrOQqPDNbV;
    cin >> CDg3orVIZxSH;
    cin >> ir2bAiFJutq;
    aw6mzX9LMYK (rjKrOQqPDNbV, CDg3orVIZxSH, ir2bAiFJutq);
    return (390 - 390);
}

