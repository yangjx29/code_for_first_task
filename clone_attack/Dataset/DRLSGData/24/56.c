int main () {
    char FEWh8n2kYN [(532 - 432)] = {(718 - 718)};
    char word [(625 - 424)] [(422 - 322)] = {(607 - 607)};
    int wYNUnfG;
    int W5U0BcrF1fG;
    int gCo9rtXsq [(1036 - 835)] = {(577 - 577)};
    int LKsMA1RfyUD;
    int curlen;
    int ZJaV5qLy;
    curlen = (18 - 18);
    LKsMA1RfyUD = -(92 - 91);
    W5U0BcrF1fG = (993 - 993);
    ZJaV5qLy = -(732 - 731);
    wYNUnfG = (923 - 923);
    for (; (514 - 513);) {
        W5U0BcrF1fG = getchar ();
        if (!(' ' != W5U0BcrF1fG) || !(',' != W5U0BcrF1fG) || !('\n' != W5U0BcrF1fG)) {
            if (!('\n' != W5U0BcrF1fG))
                break;
            if ((167 - 167) < curlen) {
                FEWh8n2kYN[curlen] = '\0';
                strcpy (word[wYNUnfG], FEWh8n2kYN);
                gCo9rtXsq[wYNUnfG] = curlen;
                if (!(-(52 - 51) != LKsMA1RfyUD) || curlen > gCo9rtXsq[LKsMA1RfyUD]) {
                    LKsMA1RfyUD = wYNUnfG;
                }
                if (!(-(163 - 162) != ZJaV5qLy) || curlen < gCo9rtXsq[ZJaV5qLy]) {
                    ZJaV5qLy = wYNUnfG;
                }
                curlen = (950 - 950);
                wYNUnfG = wYNUnfG + (742 - 741);
            }
        }
        else {
            FEWh8n2kYN[curlen++] = W5U0BcrF1fG;
        }
    }
    printf ("%s\n", word[LKsMA1RfyUD]);
    printf ("%s", word[ZJaV5qLy]);
    return 0;
}

