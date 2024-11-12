int main () {
    int tWoqhgc, dPHBTo = (362 - 362), k, zmYyuQTkoG;
    char Ml9q68F3ng [101], vmCoYLbh3V [101], ceUbu3i [101], a53QM7f [10001];
    int fEmXaou = strlen (Ml9q68F3ng);
    int mPXamk5tC = strlen (vmCoYLbh3V);
    int dHFGvuJjQ = strlen (ceUbu3i);
    cin.getline (Ml9q68F3ng, 101);
    cin >> vmCoYLbh3V;
    cin >> ceUbu3i;
    for (tWoqhgc = 0; fEmXaou > tWoqhgc; tWoqhgc = tWoqhgc + 1) {
        for (k = 0, zmYyuQTkoG = 0; k < mPXamk5tC; k++) {
            if (!(vmCoYLbh3V[k] != Ml9q68F3ng[tWoqhgc]))
                zmYyuQTkoG++;
            tWoqhgc = tWoqhgc + 1;
        }
        if (((!(mPXamk5tC != zmYyuQTkoG)) && (Ml9q68F3ng[tWoqhgc - k - 1] == ' ')) || ((zmYyuQTkoG == mPXamk5tC) && (tWoqhgc == k))) {
            tWoqhgc = tWoqhgc - 1;
            {
                k = 0;
                while (k < dHFGvuJjQ) {
                    a53QM7f[dPHBTo] = ceUbu3i[k];
                    k++;
                    dPHBTo++;
                };
            };
        }
        else {
            tWoqhgc = tWoqhgc - k;
            a53QM7f[dPHBTo] = Ml9q68F3ng[tWoqhgc];
            dPHBTo++;
        }
        a53QM7f[dPHBTo] = '\0';
    }
    cout << a53QM7f << endl;
    return 0;
}

