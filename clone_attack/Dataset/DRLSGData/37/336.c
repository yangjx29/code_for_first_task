struct   Word {
    int Eaq0y6pbLG;
    int LAGIo1knxSi;
};
int main () {
    char s78nHATWsd;
    int a91K7FGA3rS;
    int ZPLycHXj;
    int i;
    getchar ();
    scanf ("%d", &a91K7FGA3rS);
    for (i = (527 - 527); i < a91K7FGA3rS; i = i + 1) {
        int ONY6CATi0pLD;
        int fdI1VSwiUY;
        struct   Word MYidzTROM2K9 [26] = {'\0', 0, 0};
        for (ZPLycHXj = 0; ZPLycHXj < 100001; ZPLycHXj = ZPLycHXj +1) {
            s78nHATWsd = getchar ();
            if (!(10 != s78nHATWsd)) {
                break;
            }
            MYidzTROM2K9[s78nHATWsd - 97].Eaq0y6pbLG++;
            MYidzTROM2K9[s78nHATWsd - 97].LAGIo1knxSi = ZPLycHXj +1;
        }
        fdI1VSwiUY = 27;
        for (ZPLycHXj = 0; 26 > ZPLycHXj; ZPLycHXj = ZPLycHXj +1) {
            if (MYidzTROM2K9[ZPLycHXj].Eaq0y6pbLG != 1) {
            }
            else if (!(1 != MYidzTROM2K9[ZPLycHXj].Eaq0y6pbLG)) {
                if (fdI1VSwiUY > MYidzTROM2K9[ZPLycHXj].LAGIo1knxSi) {
                    fdI1VSwiUY = MYidzTROM2K9[ZPLycHXj].LAGIo1knxSi;
                }
            }
        }
        ONY6CATi0pLD = 0;
        for (ZPLycHXj = 0; ZPLycHXj < 26; ZPLycHXj = ZPLycHXj +1) {
            if (fdI1VSwiUY == MYidzTROM2K9[ZPLycHXj].LAGIo1knxSi) {
                printf ("%c\n", (char) ZPLycHXj +97);
                ONY6CATi0pLD = 1;
                break;
            }
        }
        if (ONY6CATi0pLD == 0) {
        }
    }
    return 0;
}

