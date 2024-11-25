int main () {
    int WMqhB890vlPK;
    int lYebOo [100];
    int Bl79iLJRpYS;
    int Uet2cyLPRU;
    int T9RmnA2U6B;
    int vjCOLN3;
    int q;
    scanf ("%d", &WMqhB890vlPK);
    {
        Uet2cyLPRU = 0;
        while (WMqhB890vlPK > Uet2cyLPRU) {
            scanf ("%d", &lYebOo[Uet2cyLPRU]);
            Uet2cyLPRU = Uet2cyLPRU +1;
        };
    }
    if (lYebOo[0] > lYebOo[(236 - 235)]) {
        Bl79iLJRpYS = lYebOo[0];
        T9RmnA2U6B = lYebOo[1];
    }
    else {
        Bl79iLJRpYS = lYebOo[1];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        T9RmnA2U6B = lYebOo[0];
    }
    {
        Uet2cyLPRU = 2;
        while (Uet2cyLPRU < WMqhB890vlPK) {
            vjCOLN3 = Bl79iLJRpYS;
            q = T9RmnA2U6B;
            if (lYebOo[Uet2cyLPRU] >= vjCOLN3) {
                T9RmnA2U6B = Bl79iLJRpYS;
                Bl79iLJRpYS = lYebOo[Uet2cyLPRU];
            }
            Uet2cyLPRU++;
        };
    }
    printf ("%d\n%d", Bl79iLJRpYS, T9RmnA2U6B);
    return 0;
}

