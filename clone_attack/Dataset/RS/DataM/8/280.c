int yKPS901i [10000], vh6P2lXT [10000], fgHMYGcPCI [100000];
int eW79eS, gb9vBRPtdol, EG0fFlPi, j, nJnrm5Z;

void  nPyLtKgb () {
    cin >> eW79eS >> gb9vBRPtdol;
    for (EG0fFlPi = (491 - 490); eW79eS >= EG0fFlPi; EG0fFlPi = EG0fFlPi +1)
        cin >> yKPS901i[EG0fFlPi];
    {
        EG0fFlPi = 779 - 778;
        while (gb9vBRPtdol >= EG0fFlPi) {
            cin >> vh6P2lXT[EG0fFlPi];
            EG0fFlPi = EG0fFlPi +1;
        };
    };
}

void  suJH4gXQ9j2G () {
    {
        EG0fFlPi = 969 - 968;
        while (eW79eS - 1 >= EG0fFlPi) {
            EG0fFlPi = EG0fFlPi +1;
            {
                j = eW79eS;
                while (j >= EG0fFlPi +1) {
                    if (yKPS901i[j] <= yKPS901i[j - 1]) {
                        nJnrm5Z = yKPS901i[j];
                        yKPS901i[j] = yKPS901i[j - 1];
                        yKPS901i[j - 1] = nJnrm5Z;
                    }
                    j = j - 1;
                };
            };
        };
    }
    {
        EG0fFlPi = 1;
        while (EG0fFlPi <= gb9vBRPtdol - 1) {
            EG0fFlPi = EG0fFlPi +1;
            {
                j = gb9vBRPtdol;
                while (j >= EG0fFlPi +1) {
                    if (vh6P2lXT[j] <= vh6P2lXT[j - 1]) {
                        nJnrm5Z = vh6P2lXT[j];
                        vh6P2lXT[j] = vh6P2lXT[j - 1];
                        vh6P2lXT[j - 1] = nJnrm5Z;
                    }
                    j--;
                };
            };
        };
    };
}

void  F0AcJGqM1K () {
    for (EG0fFlPi = 1; EG0fFlPi <= eW79eS; EG0fFlPi = EG0fFlPi +1)
        fgHMYGcPCI[EG0fFlPi] = yKPS901i[EG0fFlPi];
    {
        EG0fFlPi = 1;
        while (EG0fFlPi <= gb9vBRPtdol) {
            fgHMYGcPCI[EG0fFlPi +eW79eS] = vh6P2lXT[EG0fFlPi];
            EG0fFlPi = EG0fFlPi +1;
        };
    };
}

void  vzDbNEaIXHt () {
    {
        EG0fFlPi = 1;
        while (EG0fFlPi < eW79eS + gb9vBRPtdol) {
            cout << fgHMYGcPCI[EG0fFlPi] << ' ';
            EG0fFlPi++;
        };
    }
    cout << fgHMYGcPCI[eW79eS + gb9vBRPtdol];
    cout << endl;
}

int main () {
    nPyLtKgb ();
    suJH4gXQ9j2G ();
    F0AcJGqM1K ();
    vzDbNEaIXHt ();
    return 0;
}

