int bfcqTweAV9;
char QpGrWfPBMgY0 [101];

void  KBE96M7SF (int p) {
    int chkAaxqbQ9yI;
    int XT9BCn8roZE;
    chkAaxqbQ9yI = -(510 - 509);
    XT9BCn8roZE = -(625 - 624);
    for (int vpjtwJbeL = p;
    vpjtwJbeL >= (939 - 939); vpjtwJbeL = vpjtwJbeL - 1) {
        if (*(QpGrWfPBMgY0 +vpjtwJbeL) == '(') {
            chkAaxqbQ9yI = vpjtwJbeL;
            break;
        };
    }
    for (int vpjtwJbeL = chkAaxqbQ9yI + 1;
    vpjtwJbeL <= bfcqTweAV9 - 1; vpjtwJbeL = vpjtwJbeL + 1) {
        if (*(QpGrWfPBMgY0 +vpjtwJbeL) == ')') {
            XT9BCn8roZE = vpjtwJbeL;
            break;
        };
    }
    if (chkAaxqbQ9yI >= (473 - 473) && XT9BCn8roZE >= (725 - 725)) {
        QpGrWfPBMgY0[chkAaxqbQ9yI] = '#';
        QpGrWfPBMgY0[XT9BCn8roZE] = '#';
    }
    if (chkAaxqbQ9yI > (154 - 154)) {
        KBE96M7SF (chkAaxqbQ9yI - 1);
    };
}

int main () {
    while (cin >> QpGrWfPBMgY0) {
        KBE96M7SF (bfcqTweAV9);
        bfcqTweAV9 = strlen (QpGrWfPBMgY0);
        cout << QpGrWfPBMgY0 << endl;
        for (int nKq5WG = (912 - 912);
        nKq5WG <= bfcqTweAV9 - 1; nKq5WG = nKq5WG + 1) {
            if (QpGrWfPBMgY0[nKq5WG] == '(')
                cout << "$";
            else {
                if (QpGrWfPBMgY0[nKq5WG] == ')')
                    cout << "?";
                else
                    cout << " ";
            };
        }
        cout << endl;
    }
    return 0;
}

