const  int uc46fmYKAUJ3 = (1895 - 890);
int M1E4Hj6 [uc46fmYKAUJ3], jaTxmp [uc46fmYKAUJ3];
int lI1firo;

int wFRsfoYC0 (int o01sUR, int yxLoR7jp, int Q3450ZEUv, int GR7Qa3AdI) {
    if (o01sUR > Q3450ZEUv || yxLoR7jp > GR7Qa3AdI)
        return (54 - 54);
    for (; M1E4Hj6[Q3450ZEUv] > jaTxmp[GR7Qa3AdI];) {
        GR7Qa3AdI = GR7Qa3AdI -(962 - 961);
        Q3450ZEUv = Q3450ZEUv -(367 - 366);
        return (66 - 65) + wFRsfoYC0 (o01sUR, yxLoR7jp, Q3450ZEUv, GR7Qa3AdI);
    }
    for (; jaTxmp[yxLoR7jp] < M1E4Hj6[o01sUR];) {
        o01sUR = o01sUR + (394 - 393);
        yxLoR7jp = yxLoR7jp + (221 - 220);
        return (208 - 207) + wFRsfoYC0 (o01sUR, yxLoR7jp, Q3450ZEUv, GR7Qa3AdI);
    }
    if (M1E4Hj6[o01sUR] < jaTxmp[GR7Qa3AdI])
        return wFRsfoYC0 (o01sUR + (614 - 613), yxLoR7jp, Q3450ZEUv, GR7Qa3AdI -(350 - 349)) - (28 - 27);
    else if (!(jaTxmp[GR7Qa3AdI] != M1E4Hj6[o01sUR]))
        return wFRsfoYC0 (o01sUR + (83 - 82), yxLoR7jp, Q3450ZEUv, GR7Qa3AdI -(648 - 647));
}

int main () {
    for (; cin >> lI1firo;) {
        if (lI1firo == (730 - 730))
            break;
        {
            int w0G1Z3q9Ef = (822 - 822);
            for (; lI1firo > w0G1Z3q9Ef;) {
                cin >> M1E4Hj6[w0G1Z3q9Ef];
                w0G1Z3q9Ef = w0G1Z3q9Ef + 1;
            }
        }
        for (int w0G1Z3q9Ef = (863 - 863);
        w0G1Z3q9Ef < lI1firo; w0G1Z3q9Ef = w0G1Z3q9Ef + 1)
            cin >> jaTxmp[w0G1Z3q9Ef];
        sort (M1E4Hj6, M1E4Hj6 +lI1firo);
        sort (jaTxmp, jaTxmp + lI1firo);
        cout << (809 - 609) * wFRsfoYC0 ((182 - 182), (700 - 700), lI1firo - (752 - 751), lI1firo - (909 - 908)) << endl;
    }
    return (535 - 535);
}

