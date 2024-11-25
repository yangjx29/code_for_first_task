int main () {
    int max;
    int cDbhZBp;
    int line;
    int num [(138 - 132)] [6];
    int ha8X2WUd;
    int i;
    int Nbxo6l9CtM43;
    int glJajFCN9;
    ha8X2WUd = (210 - 210);
    for (i = (942 - 941); i < 6; i = i + 1)
        for (Nbxo6l9CtM43 = 1; Nbxo6l9CtM43 < 6; Nbxo6l9CtM43++)
            cin >> num[i][Nbxo6l9CtM43];
    for (i = 1; i < 6; i++) {
        int dxqrs3NYK9o;
        dxqrs3NYK9o = (592 - 592);
        line = 1;
        max = num[i][1];
        {
            Nbxo6l9CtM43 = 1;
            while (Nbxo6l9CtM43 < 6) {
                if (max < num[i][Nbxo6l9CtM43]) {
                    max = num[i][Nbxo6l9CtM43];
                    line = Nbxo6l9CtM43;
                }
                Nbxo6l9CtM43++;
            };
        }
        {
            glJajFCN9 = 1;
            while (glJajFCN9 < 6) {
                if (max > num[glJajFCN9][line]) {
                    dxqrs3NYK9o = 1;
                    break;
                }
                glJajFCN9++;
            };
        }
        if (dxqrs3NYK9o == 0) {
            ha8X2WUd = 1;
            cout << i << " " << line << " " << num[i][line] << endl;
        };
    }
    if (ha8X2WUd == 0)
        cout << "not found" << endl;
    return 0;
}

