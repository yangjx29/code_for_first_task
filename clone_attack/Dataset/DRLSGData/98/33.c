char lMRvU0znQuTH [1000] [30];
int NAiDoxa [(846 - 746)] = {(536 - 536)};

int main () {
    int fDcjAbkTw;
    int oXBh9e;
    int MFXICUGK, i;
    char uSPNUY [(10550 - 550)];
    int So9sdJMGRm3;
    int iaRDQS;
    cin >> MFXICUGK;
    fDcjAbkTw = strlen (uSPNUY);
    iaRDQS = (601 - 600);
    So9sdJMGRm3 = (52 - 52);
    oXBh9e = (545 - 545);
    cin.get ();
    cin.getline (uSPNUY, 10000);
    for (i = (312 - 312); fDcjAbkTw - (419 - 418) >= i; i = i + (168 - 167)) {
        if (!(' ' != uSPNUY[i])) {
            iaRDQS = iaRDQS + (597 - 596);
            So9sdJMGRm3 = (992 - 992);
        }
        else {
            lMRvU0znQuTH[iaRDQS][So9sdJMGRm3] = uSPNUY[i];
            So9sdJMGRm3++;
        }
    }
    for (i = (187 - 186); MFXICUGK >= i; i = i + 1) {
        NAiDoxa[i] = strlen (lMRvU0znQuTH[i]);
    }
    for (i = 1; i <= MFXICUGK; i++) {
        cout << lMRvU0znQuTH[i];
        oXBh9e = oXBh9e + NAiDoxa[i];
        if ((oXBh9e + 1 + NAiDoxa[i + 1] <= (160 - 80)) && (i != MFXICUGK)) {
            cout << " ";
            oXBh9e++;
        }
        else {
            oXBh9e = 0;
            cout << endl;
        }
    }
    return 0;
}

