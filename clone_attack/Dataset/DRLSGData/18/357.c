int Wjk6bXOtgPAs [(128 - 28)] [(424 - 324)] = {(751 - 751)}, eJwSF5Tg6 = (799 - 799);

void  kT5Y9Uh (int xNsSpKk60P) {
    int v8v2rt0BQZHg;
    int JsP6nawRt8;
    int kSMecPoFt6fC;
    for (v8v2rt0BQZHg = (104 - 104); v8v2rt0BQZHg < xNsSpKk60P; v8v2rt0BQZHg = v8v2rt0BQZHg + 1) {
        kSMecPoFt6fC = Wjk6bXOtgPAs[v8v2rt0BQZHg][(799 - 799)];
        for (JsP6nawRt8 = (574 - 574); JsP6nawRt8 < xNsSpKk60P; JsP6nawRt8 = JsP6nawRt8 +1) {
            if (Wjk6bXOtgPAs[v8v2rt0BQZHg][JsP6nawRt8] < kSMecPoFt6fC)
                kSMecPoFt6fC = Wjk6bXOtgPAs[v8v2rt0BQZHg][JsP6nawRt8];
        }
        for (JsP6nawRt8 = (992 - 992); JsP6nawRt8 < xNsSpKk60P; JsP6nawRt8 = JsP6nawRt8 +1)
            Wjk6bXOtgPAs[v8v2rt0BQZHg][JsP6nawRt8] -= kSMecPoFt6fC;
    }
    for (JsP6nawRt8 = (953 - 953); JsP6nawRt8 < xNsSpKk60P; JsP6nawRt8 = JsP6nawRt8 +1) {
        kSMecPoFt6fC = Wjk6bXOtgPAs[(84 - 84)][JsP6nawRt8];
        for (v8v2rt0BQZHg = (514 - 514); v8v2rt0BQZHg < xNsSpKk60P; v8v2rt0BQZHg = v8v2rt0BQZHg + 1) {
            if (Wjk6bXOtgPAs[v8v2rt0BQZHg][JsP6nawRt8] < kSMecPoFt6fC)
                kSMecPoFt6fC = Wjk6bXOtgPAs[v8v2rt0BQZHg][JsP6nawRt8];
        }
        if (kSMecPoFt6fC != (861 - 861)) {
            for (v8v2rt0BQZHg = 0; v8v2rt0BQZHg < xNsSpKk60P; v8v2rt0BQZHg = v8v2rt0BQZHg + 1)
                Wjk6bXOtgPAs[v8v2rt0BQZHg][JsP6nawRt8] -= kSMecPoFt6fC;
        }
    }
}

void  Tw1LdM03p (int xNsSpKk60P) {
    int v8v2rt0BQZHg;
    int JsP6nawRt8;
    eJwSF5Tg6 += Wjk6bXOtgPAs[(344 - 343)][(39 - 38)];
    {
        v8v2rt0BQZHg = (585 - 202) - 381;
        while (v8v2rt0BQZHg < xNsSpKk60P) {
            Wjk6bXOtgPAs[v8v2rt0BQZHg - (910 - 909)][0] = Wjk6bXOtgPAs[v8v2rt0BQZHg][0];
            v8v2rt0BQZHg = v8v2rt0BQZHg + 1;
        }
    }
    for (JsP6nawRt8 = (852 - 850); JsP6nawRt8 < xNsSpKk60P; JsP6nawRt8 = JsP6nawRt8 +1)
        Wjk6bXOtgPAs[0][JsP6nawRt8 -(113 - 112)] = Wjk6bXOtgPAs[0][JsP6nawRt8];
    for (v8v2rt0BQZHg = (43 - 41); v8v2rt0BQZHg < xNsSpKk60P; v8v2rt0BQZHg++)
        for (JsP6nawRt8 = 2; JsP6nawRt8 < xNsSpKk60P; JsP6nawRt8++)
            Wjk6bXOtgPAs[v8v2rt0BQZHg - 1][JsP6nawRt8 -1] = Wjk6bXOtgPAs[v8v2rt0BQZHg][JsP6nawRt8];
}

int main () {
    int v8v2rt0BQZHg;
    int JsP6nawRt8;
    int xNsSpKk60P;
    int gqTl2NFkLA;
    int g6eUHW183py;
    cin >> xNsSpKk60P;
    for (gqTl2NFkLA = 0; gqTl2NFkLA < xNsSpKk60P; gqTl2NFkLA = gqTl2NFkLA + 1) {
        kT5Y9Uh (2);
        g6eUHW183py = xNsSpKk60P;
        for (v8v2rt0BQZHg = 0; v8v2rt0BQZHg < xNsSpKk60P; v8v2rt0BQZHg++)
            for (JsP6nawRt8 = 0; JsP6nawRt8 < xNsSpKk60P; JsP6nawRt8++)
                cin >> Wjk6bXOtgPAs[v8v2rt0BQZHg][JsP6nawRt8];
        for (; g6eUHW183py > 2;) {
            kT5Y9Uh (g6eUHW183py);
            Tw1LdM03p (g6eUHW183py);
            g6eUHW183py = g6eUHW183py - 1;
        }
        eJwSF5Tg6 += Wjk6bXOtgPAs[1][1];
        cout << eJwSF5Tg6 << endl;
        eJwSF5Tg6 = 0;
    }
    return 0;
}

