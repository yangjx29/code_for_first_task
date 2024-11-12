int main () {
    int WKnScphTqsN7, RLUkwpnXSqaC, CBPrlc [100], k;
    char st [150];
    gets (st);
    WKnScphTqsN7 = strlen (st);
    k = 1;
    CBPrlc[(722 - 722)] = -1;
    {
        RLUkwpnXSqaC = 0;
        while (RLUkwpnXSqaC < WKnScphTqsN7) {
            if (st[RLUkwpnXSqaC] == ' ') {
                CBPrlc[k] = RLUkwpnXSqaC;
                k++;
            }
            RLUkwpnXSqaC++;
        };
    }
    CBPrlc[k] = WKnScphTqsN7;
    for (RLUkwpnXSqaC = k; RLUkwpnXSqaC > 0; RLUkwpnXSqaC--) {
        for (int j = CBPrlc[RLUkwpnXSqaC -1] + 1;
        j <= CBPrlc[RLUkwpnXSqaC] - 1; j++)
            cout << st[j];
        if (RLUkwpnXSqaC != 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}

