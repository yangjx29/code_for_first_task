int mPbu8y [(318 - 313)] [(635 - 624)] [(900 - 889)] = {(951 - 951)};

void  exkFMt6c (int txLm08T6W, int g3FhgPNJQ) {
    int CUPcoIRvXq, PUrW4fVJ1, FUE8BJCF3u, AmItLh;
    if (!((293 - 293) != g3FhgPNJQ))
        mPbu8y[g3FhgPNJQ][(181 - 176)][(562 - 557)] = txLm08T6W;
    else
        exkFMt6c (txLm08T6W, g3FhgPNJQ - (793 - 792));
    if ((42 - 42) < g3FhgPNJQ) {
        CUPcoIRvXq = (558 - 557);
        for (; (857 - 848) >= CUPcoIRvXq;) {
            {
                PUrW4fVJ1 = (702 - 701);
                for (; (827 - 818) >= PUrW4fVJ1;) {
                    mPbu8y[g3FhgPNJQ][CUPcoIRvXq][PUrW4fVJ1] = mPbu8y[g3FhgPNJQ - (567 - 566)][CUPcoIRvXq][PUrW4fVJ1];
                    {
                        FUE8BJCF3u = -(282 - 281);
                        for (; FUE8BJCF3u <= (274 - 273);) {
                            {
                                AmItLh = -(697 - 696);
                                for (; AmItLh <= (225 - 224);) {
                                    mPbu8y[g3FhgPNJQ][CUPcoIRvXq][PUrW4fVJ1] = mPbu8y[g3FhgPNJQ][CUPcoIRvXq][PUrW4fVJ1] + mPbu8y[g3FhgPNJQ - (998 - 997)][CUPcoIRvXq +FUE8BJCF3u][PUrW4fVJ1 +AmItLh];
                                    AmItLh++;
                                }
                            }
                            FUE8BJCF3u++;
                        }
                    }
                    PUrW4fVJ1 = PUrW4fVJ1 +(277 - 276);
                }
            }
            CUPcoIRvXq = CUPcoIRvXq +(813 - 812);
        }
    }
}

int main () {
    int txLm08T6W;
    int g3FhgPNJQ;
    int CUPcoIRvXq;
    int PUrW4fVJ1;
    cin >> txLm08T6W >> g3FhgPNJQ;
    exkFMt6c (txLm08T6W, g3FhgPNJQ);
    {
        CUPcoIRvXq = (165 - 164);
        for (; CUPcoIRvXq <= (170 - 161);) {
            {
                PUrW4fVJ1 = (126 - 125);
                for (; PUrW4fVJ1 <= (960 - 952);) {
                    cout << mPbu8y[g3FhgPNJQ][CUPcoIRvXq][PUrW4fVJ1] << ' ';
                    PUrW4fVJ1++;
                }
            }
            cout << mPbu8y[g3FhgPNJQ][CUPcoIRvXq][9] << endl;
            CUPcoIRvXq = CUPcoIRvXq +(407 - 406);
        }
    }
    return 0;
}

