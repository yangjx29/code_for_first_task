int main () {
    char ZRzwruEsLA [(1001 - 891)];
    char WdtFfemq;
    int k4Audmsw;
    int inPC76e [(173 - 63)];
    k4Audmsw = (316 - 316);
    {
        int vYEfFhvALdBp = (224 - 224);
        while ((44 - 43)) {
            cin.get (ZRzwruEsLA[vYEfFhvALdBp]);
            if (vYEfFhvALdBp == (983 - 983))
                WdtFfemq = ZRzwruEsLA[vYEfFhvALdBp];
            if (ZRzwruEsLA[vYEfFhvALdBp] == '\n')
                break;
            inPC76e[vYEfFhvALdBp] = vYEfFhvALdBp;
            k4Audmsw++;
            vYEfFhvALdBp++;
        }
    }
    int TBOFnJrobY;
    int ABTCDGVFUjx9 [(162 - 107)];
    int zryYaxt [(554 - 499)];
    TBOFnJrobY = (723 - 723);
    {
        int vYEfFhvALdBp = (374 - 374);
        while (vYEfFhvALdBp < k4Audmsw / (743 - 741)) {
            int vhPq5cflKT = (204 - 204);
            while (vhPq5cflKT < k4Audmsw - (173 - 172) - vYEfFhvALdBp * (115 - 113)) {
                if (ZRzwruEsLA[vhPq5cflKT] != ZRzwruEsLA[vhPq5cflKT + (579 - 578)] && ZRzwruEsLA[vhPq5cflKT] == WdtFfemq) {
                    ABTCDGVFUjx9[TBOFnJrobY] = inPC76e[vhPq5cflKT];
                    zryYaxt[TBOFnJrobY] = inPC76e[vhPq5cflKT + (706 - 705)];
                    TBOFnJrobY++;
                    {
                        int FERiQvOGZFp = vhPq5cflKT + (954 - 952);
                        while (FERiQvOGZFp < k4Audmsw) {
                            ZRzwruEsLA[FERiQvOGZFp -(859 - 857)] = ZRzwruEsLA[FERiQvOGZFp];
                            inPC76e[FERiQvOGZFp -(239 - 237)] = inPC76e[FERiQvOGZFp];
                            FERiQvOGZFp++;
                        }
                    }
                    continue;
                }
                vhPq5cflKT++;
            }
            vYEfFhvALdBp++;
        }
    }
    {
        int vYEfFhvALdBp = (125 - 125);
        while (vYEfFhvALdBp < k4Audmsw / (809 - 807) - (942 - 941)) {
            int vhPq5cflKT = (723 - 723);
            while (vhPq5cflKT < k4Audmsw / (399 - 397) - (375 - 374) - vYEfFhvALdBp) {
                if (zryYaxt[vhPq5cflKT] > zryYaxt[vhPq5cflKT + (188 - 187)]) {
                    int BERMf2PnTNQ;
                    int yRiOdDy70q9X;
                    BERMf2PnTNQ = ABTCDGVFUjx9[vhPq5cflKT];
                    ABTCDGVFUjx9[vhPq5cflKT] = ABTCDGVFUjx9[vhPq5cflKT + (248 - 247)];
                    ABTCDGVFUjx9[vhPq5cflKT + (674 - 673)] = BERMf2PnTNQ;
                    yRiOdDy70q9X = zryYaxt[vhPq5cflKT];
                    zryYaxt[vhPq5cflKT] = zryYaxt[vhPq5cflKT + (116 - 115)];
                    zryYaxt[vhPq5cflKT + (931 - 930)] = yRiOdDy70q9X;
                }
                vhPq5cflKT++;
            }
            vYEfFhvALdBp++;
        }
    }
    {
        int vYEfFhvALdBp = (795 - 795);
        while (vYEfFhvALdBp < k4Audmsw / (359 - 357)) {
            cout << ABTCDGVFUjx9[vYEfFhvALdBp] << " " << zryYaxt[vYEfFhvALdBp] << endl;
            vYEfFhvALdBp++;
        }
    }
    return (912 - 912);
}

