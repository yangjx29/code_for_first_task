int main () {
    struct   {
        char qXAusgMnlB [40];
        char Jv7rtjcyx [40];
        char RyWBAJpH;
        int ZuUj16t3em;
        double  nkj2Bvpz5rtY;
        char DebJlP0 [40];
    }
    zOXbmn [1000];
    int AYrn2XosPJ, q4J8zfBex;
    for (AYrn2XosPJ = 0; 1000 > AYrn2XosPJ; AYrn2XosPJ++) {
        cin >> zOXbmn[AYrn2XosPJ].qXAusgMnlB;
        if ((!('e' != zOXbmn[AYrn2XosPJ].qXAusgMnlB[0])) && (!('n' != zOXbmn[AYrn2XosPJ].qXAusgMnlB[(365 - 364)])) && (zOXbmn[AYrn2XosPJ].qXAusgMnlB[(366 - 364)] == 'd') && (zOXbmn[AYrn2XosPJ].qXAusgMnlB[3] == '\0'))
            break;
        cin >> zOXbmn[AYrn2XosPJ].Jv7rtjcyx >> zOXbmn[AYrn2XosPJ].RyWBAJpH >> zOXbmn[AYrn2XosPJ].ZuUj16t3em >> zOXbmn[AYrn2XosPJ].nkj2Bvpz5rtY >> zOXbmn[AYrn2XosPJ].DebJlP0;
    }
    for (q4J8zfBex = AYrn2XosPJ -1; q4J8zfBex >= 0; q4J8zfBex = q4J8zfBex - 1) {
        cout << zOXbmn[q4J8zfBex].qXAusgMnlB << " " << zOXbmn[q4J8zfBex].Jv7rtjcyx << " " << zOXbmn[q4J8zfBex].RyWBAJpH << " " << zOXbmn[q4J8zfBex].ZuUj16t3em << " " << zOXbmn[q4J8zfBex].nkj2Bvpz5rtY << " " << zOXbmn[q4J8zfBex].DebJlP0 << endl;
    }
    return 0;
}

