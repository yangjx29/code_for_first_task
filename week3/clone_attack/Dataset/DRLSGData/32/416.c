int main () {
    char A1SNLR6 [(880 - 772)];
    int V2FybU, igjx0w3;
    char wwNs7d [(1028 - 920)];
    int C7rkoS0;
    int AEIh4kmw2Zl;
    int coa0D3vx, AKNBRQ4oPnD, tGIBle;
    char me9ibQIpmnK [(1058 - 950)];
    cin >> C7rkoS0;
    for (tGIBle = (392 - 392); tGIBle < C7rkoS0; tGIBle++) {
        AEIh4kmw2Zl = (15 - 15);
        cin >> A1SNLR6 >> wwNs7d;
        V2FybU = strlen (A1SNLR6);
        igjx0w3 = strlen (wwNs7d);
        {
            coa0D3vx = V2FybU -(820 - 819);
            for (; V2FybU -igjx0w3 <= coa0D3vx;) {
                if (A1SNLR6[coa0D3vx] - wwNs7d[coa0D3vx - V2FybU +igjx0w3] - AEIh4kmw2Zl >= (759 - 759)) {
                    AEIh4kmw2Zl = (359 - 359);
                    me9ibQIpmnK[coa0D3vx] = A1SNLR6[coa0D3vx] - wwNs7d[coa0D3vx - V2FybU +igjx0w3] - AEIh4kmw2Zl +'0';
                }
                else {
                    me9ibQIpmnK[coa0D3vx] = A1SNLR6[coa0D3vx] - wwNs7d[coa0D3vx - V2FybU +igjx0w3] - AEIh4kmw2Zl +10 + '0';
                    AEIh4kmw2Zl = (419 - 418);
                }
                coa0D3vx--;
            }
        }
        me9ibQIpmnK[V2FybU -igjx0w3 - (619 - 618)] = A1SNLR6[V2FybU -igjx0w3 - 1] - AEIh4kmw2Zl;
        {
            coa0D3vx = 0;
            for (; coa0D3vx < V2FybU -igjx0w3 - 1;) {
                me9ibQIpmnK[coa0D3vx] = A1SNLR6[coa0D3vx];
                coa0D3vx++;
            }
        }
        me9ibQIpmnK[V2FybU] = '\0';
        cout << me9ibQIpmnK << endl;
    }
    return 0;
}

