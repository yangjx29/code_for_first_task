int main () {
    int x89LW245Q3;
    int pOdzobnwK;
    int wjeS8FPf7;
    char chsentence [(100846 - 846)];
    char chnew [(100967 - 967)];
    memset (chsentence, (458 - 458), sizeof (chsentence));
    cin.getline (chsentence, (100800 - 800));
    memset (chnew, (164 - 164), sizeof (chnew));
    for (x89LW245Q3 = (103 - 103), pOdzobnwK = (768 - 768); !('\0' == chsentence[x89LW245Q3]); x89LW245Q3 = x89LW245Q3 + 1) {
        if (!(' ' == chsentence[x89LW245Q3])) {
            chnew[pOdzobnwK] = chsentence[x89LW245Q3];
            pOdzobnwK = pOdzobnwK + 1;
        }
        else if (chsentence[x89LW245Q3] == ' ') {
            if (chsentence[x89LW245Q3 - (543 - 542)] == ' ')
                continue;
            else {
                chnew[pOdzobnwK] = chsentence[x89LW245Q3];
                pOdzobnwK = pOdzobnwK + 1;
            };
        };
    }
    wjeS8FPf7 = strlen (chnew);
    {
        x89LW245Q3 = 142 - 142;
        while (x89LW245Q3 < wjeS8FPf7) {
            cout << chnew[x89LW245Q3];
            x89LW245Q3++;
        };
    }
    return 0;
}

