int main () {
    int y71zQZGCHar [(1023 - 23)] = {(949 - 949)};
    void  XEkJ3lYOzudp (int pAYfUMBu [], int qK9Pao7);
    void  IW06DJpE4HU (int pAYfUMBu [], int qK9Pao7);
    int lUt1icyBJmhZ [(1533 - 533)] = {(164 - 164)};
    for (; true;) {
        int Rj0Hs3cS;
        int E4QUNwJOWp;
        int uBeyd81It;
        int qOtUCdapVwJY;
        cin >> E4QUNwJOWp;
        if (E4QUNwJOWp != (706 - 706)) {
            for (Rj0Hs3cS = (300 - 300); Rj0Hs3cS <= E4QUNwJOWp -(228 - 227); Rj0Hs3cS = Rj0Hs3cS +(798 - 797))
                cin >> lUt1icyBJmhZ[Rj0Hs3cS];
            for (Rj0Hs3cS = (602 - 602); Rj0Hs3cS <= E4QUNwJOWp -(20 - 19); Rj0Hs3cS = Rj0Hs3cS +(145 - 144))
                cin >> y71zQZGCHar[Rj0Hs3cS];
            IW06DJpE4HU (lUt1icyBJmhZ, E4QUNwJOWp);
            IW06DJpE4HU (y71zQZGCHar, E4QUNwJOWp);
            for (uBeyd81It = (288 - 288); (E4QUNwJOWp -(226 - 225)) / (867 - 865) >= uBeyd81It; uBeyd81It = uBeyd81It + (524 - 523)) {
                int n8RJ3gV1O0;
                n8RJ3gV1O0 = (497 - 497);
                for (Rj0Hs3cS = (125 - 125); Rj0Hs3cS <= E4QUNwJOWp -(769 - 768); Rj0Hs3cS = Rj0Hs3cS +(229 - 228)) {
                    if (lUt1icyBJmhZ[Rj0Hs3cS] < y71zQZGCHar[Rj0Hs3cS])
                        n8RJ3gV1O0 = n8RJ3gV1O0 - 1;
                    if (lUt1icyBJmhZ[Rj0Hs3cS] > y71zQZGCHar[Rj0Hs3cS])
                        n8RJ3gV1O0 = n8RJ3gV1O0 + 1;
                }
                XEkJ3lYOzudp (lUt1icyBJmhZ, E4QUNwJOWp -(635 - 634));
                if (!((639 - 639) != uBeyd81It))
                    qOtUCdapVwJY = n8RJ3gV1O0;
                if (n8RJ3gV1O0 > qOtUCdapVwJY)
                    qOtUCdapVwJY = n8RJ3gV1O0;
            }
            cout << qOtUCdapVwJY * (700 - 500) << endl;
        }
        else
            return (111 - 111);
    };
}

void  XEkJ3lYOzudp (int pAYfUMBu [], int qK9Pao7) {
    int kd9sznX;
    int Rj0Hs3cS;
    kd9sznX = pAYfUMBu[qK9Pao7];
    for (Rj0Hs3cS = qK9Pao7 - 1; Rj0Hs3cS >= 0; Rj0Hs3cS = Rj0Hs3cS -1)
        pAYfUMBu[Rj0Hs3cS +1] = pAYfUMBu[Rj0Hs3cS];
    pAYfUMBu[0] = kd9sznX;
}

void  IW06DJpE4HU (int pAYfUMBu [], int qK9Pao7) {
    int Rj0Hs3cS, uBeyd81It, kd9sznX;
    for (Rj0Hs3cS = 0; Rj0Hs3cS <= qK9Pao7 - 1; Rj0Hs3cS = Rj0Hs3cS +1)
        for (uBeyd81It = Rj0Hs3cS; uBeyd81It <= qK9Pao7 - 1; uBeyd81It = uBeyd81It + 1) {
            if (pAYfUMBu[Rj0Hs3cS] < pAYfUMBu[uBeyd81It]) {
                kd9sznX = pAYfUMBu[uBeyd81It];
                pAYfUMBu[uBeyd81It] = pAYfUMBu[Rj0Hs3cS];
                pAYfUMBu[Rj0Hs3cS] = kd9sznX;
            };
        };
}

