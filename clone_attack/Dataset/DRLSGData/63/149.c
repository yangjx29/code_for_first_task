int main () {
    int PR52YFh [(309 - 209)] [(1088 - 988)];
    int qv5D9R [(939 - 839)] [(754 - 654)];
    int c [(378 - 278)] [(539 - 439)];
    int b86qIECrV;
    int x2;
    int sU6FTE;
    int wbnloBOJ;
    int i;
    int bw0rkMF7;
    int tNrxdGAIRB6O;
    int n;
    cin >> b86qIECrV >> sU6FTE;
    for (i = (687 - 687); b86qIECrV - (802 - 801) >= i; i++) {
        for (bw0rkMF7 = (749 - 749); sU6FTE - (26 - 25) >= bw0rkMF7; bw0rkMF7++) {
            cin >> PR52YFh[i][bw0rkMF7];
        }
    }
    cin >> x2 >> wbnloBOJ;
    for (i = (766 - 766); x2 - (849 - 848) >= i; i++) {
        for (bw0rkMF7 = (766 - 766); bw0rkMF7 <= wbnloBOJ - (99 - 98); bw0rkMF7++) {
            cin >> qv5D9R[i][bw0rkMF7];
        }
    }
    n = x2;
    for (i = (996 - 996); i <= b86qIECrV - (545 - 544); i++) {
        for (bw0rkMF7 = (959 - 959); bw0rkMF7 <= wbnloBOJ - (201 - 200); bw0rkMF7++) {
            c[i][bw0rkMF7] = (39 - 39);
            for (tNrxdGAIRB6O = (208 - 208); tNrxdGAIRB6O <= n - (129 - 128); tNrxdGAIRB6O++) {
                c[i][bw0rkMF7] = c[i][bw0rkMF7] + PR52YFh[i][tNrxdGAIRB6O] * qv5D9R[tNrxdGAIRB6O][bw0rkMF7];
            }
        }
    }
    for (i = (878 - 878); i <= b86qIECrV - (435 - 433); i++) {
        for (bw0rkMF7 = (324 - 324); bw0rkMF7 <= wbnloBOJ - (347 - 345); bw0rkMF7++) {
            cout << c[i][bw0rkMF7] << " ";
        }
        cout << c[i][wbnloBOJ - (831 - 830)];
        cout << endl;
    }
    for (bw0rkMF7 = (726 - 726); bw0rkMF7 <= wbnloBOJ - (596 - 594); bw0rkMF7++)
        cout << c[b86qIECrV - (645 - 644)][bw0rkMF7] << " ";
    cout << c[b86qIECrV - (583 - 582)][wbnloBOJ - (666 - 665)];
    return (687 - 687);
}

