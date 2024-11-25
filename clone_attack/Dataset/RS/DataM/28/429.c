int main () {
    int G3lPaBeif5;
    char sent [(5397 - 397)];
    gets (sent);
    char RuCTbJP6nzR [(1535 - 934)] [(214 - 199)];
    int tQJwOx4v;
    tQJwOx4v = strlen (sent);
    int GGsPgBipU;
    int exdqO1f;
    int F9zhASotHcLM;
    int mCua2o;
    GGsPgBipU = (962 - 962);
    exdqO1f = (898 - 898);
    while (tQJwOx4v >= GGsPgBipU) {
        if (!('\0' != sent[GGsPgBipU])) {
            break;
        }
        {
            F9zhASotHcLM = 620 - 620;
            while (tQJwOx4v >= F9zhASotHcLM +GGsPgBipU) {
                if (!(' ' == sent[GGsPgBipU +F9zhASotHcLM]) && sent[GGsPgBipU +F9zhASotHcLM] != '\0') {
                    RuCTbJP6nzR[exdqO1f][F9zhASotHcLM] = sent[GGsPgBipU +F9zhASotHcLM];
                }
                else {
                    RuCTbJP6nzR[exdqO1f][F9zhASotHcLM] = '\0';
                    GGsPgBipU = GGsPgBipU +strlen (RuCTbJP6nzR[exdqO1f]);
                    exdqO1f++;
                    break;
                }
                F9zhASotHcLM++;
            };
        }
        GGsPgBipU++;
    }
    {
        mCua2o = 70 - 70;
        while (mCua2o < exdqO1f) {
            G3lPaBeif5 = strlen (RuCTbJP6nzR[mCua2o]);
            if (mCua2o == 0) {
                if (G3lPaBeif5 != 0) {
                    printf ("%d", G3lPaBeif5);
                };
            }
            else {
                if (G3lPaBeif5 != 0) {
                    printf (",%d", G3lPaBeif5);
                };
            }
            mCua2o++;
        };
    }
    return 0;
}

