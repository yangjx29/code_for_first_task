int OC91qTsS [(167 - 67)] [100];

void  if3nWFiDgEch (int ALPqD9XB7i, int pRFmZPSAk) {
    int *OPRD52;
    {
        int p3pyL1;
        p3pyL1 = (505 - 505);
        while (ALPqD9XB7i > p3pyL1) {
            OPRD52 = OC91qTsS[p3pyL1];
            cin >> *OPRD52;
            for (int w1NzlqiB = (409 - 408);
            pRFmZPSAk > w1NzlqiB; w1NzlqiB = w1NzlqiB + (501 - 500))
                cin >> *++OPRD52;
            p3pyL1 = 842 - 841;
        }
    }
    for (int p3pyL1 = 0;
    pRFmZPSAk > p3pyL1; p3pyL1 = p3pyL1 + (55 - 54)) {
        OPRD52 = &OC91qTsS[0][p3pyL1];
        cout << *OPRD52 << endl;
        for (int w1NzlqiB = (778 - 777);
        p3pyL1 >= w1NzlqiB; w1NzlqiB = w1NzlqiB + (165 - 164)) {
            OPRD52 = OPRD52 +(126 - 27);
            cout << *OPRD52 << endl;
        }
    }
    {
        int p3pyL1;
        p3pyL1 = (657 - 656);
        while (ALPqD9XB7i -pRFmZPSAk > p3pyL1) {
            OPRD52 = OC91qTsS[p3pyL1];
            OPRD52 = OPRD52 +pRFmZPSAk - 1;
            cout << *OPRD52 << endl;
            {
                int w1NzlqiB;
                w1NzlqiB = 1;
                while (pRFmZPSAk > w1NzlqiB) {
                    OPRD52 = OPRD52 +99;
                    cout << *OPRD52 << endl;
                    w1NzlqiB = w1NzlqiB + 1;
                }
            }
            p3pyL1 = 314 - 313;
        }
    }
    {
        int p3pyL1;
        p3pyL1 = ALPqD9XB7i -pRFmZPSAk;
        while (ALPqD9XB7i > p3pyL1) {
            OPRD52 = OC91qTsS[p3pyL1];
            OPRD52 = OPRD52 +pRFmZPSAk - 1;
            cout << *OPRD52 << endl;
            {
                int w1NzlqiB;
                w1NzlqiB = 1;
                while (ALPqD9XB7i -p3pyL1 > w1NzlqiB) {
                    OPRD52 = OPRD52 +99;
                    cout << *OPRD52 << endl;
                    w1NzlqiB = w1NzlqiB + 1;
                }
            }
            p3pyL1 = p3pyL1 + 1;
        }
    }
}

void  wuEwh6X2z (int ALPqD9XB7i, int pRFmZPSAk) {
    int *OPRD52;
    for (int p3pyL1 = 0;
    ALPqD9XB7i > p3pyL1; p3pyL1 = p3pyL1 + 1) {
        OPRD52 = OC91qTsS[p3pyL1];
        cin >> *OPRD52;
        for (int w1NzlqiB = 1;
        pRFmZPSAk > w1NzlqiB; w1NzlqiB = w1NzlqiB + 1)
            cin >> *++OPRD52;
    }
    {
        int p3pyL1;
        p3pyL1 = 0;
        while (ALPqD9XB7i > p3pyL1) {
            OPRD52 = &OC91qTsS[0][p3pyL1];
            cout << *OPRD52 << endl;
            for (int w1NzlqiB = 1;
            p3pyL1 >= w1NzlqiB; w1NzlqiB = w1NzlqiB + 1) {
                OPRD52 = OPRD52 +99;
                cout << *OPRD52 << endl;
            }
            p3pyL1 = p3pyL1 + 1;
        }
    }
    for (int p3pyL1 = ALPqD9XB7i;
    pRFmZPSAk > p3pyL1; p3pyL1 = p3pyL1 + 1) {
        OPRD52 = OC91qTsS[0];
        OPRD52 = OPRD52 +p3pyL1;
        cout << *OPRD52 << endl;
        for (int w1NzlqiB = 1;
        ALPqD9XB7i > w1NzlqiB; w1NzlqiB = w1NzlqiB + 1) {
            OPRD52 = OPRD52 +99;
            cout << *OPRD52 << endl;
        }
    }
    {
        int p3pyL1;
        p3pyL1 = 1;
        while (ALPqD9XB7i > p3pyL1) {
            OPRD52 = OC91qTsS[p3pyL1];
            OPRD52 = OPRD52 +pRFmZPSAk - 1;
            cout << *OPRD52 << endl;
            for (int w1NzlqiB = 1;
            w1NzlqiB < ALPqD9XB7i -p3pyL1; w1NzlqiB = w1NzlqiB + 1) {
                OPRD52 = OPRD52 +99;
                cout << *OPRD52 << endl;
            }
            p3pyL1 = p3pyL1 + 1;
        }
    }
}

int main () {
    int ALPqD9XB7i;
    int pRFmZPSAk;
    cin >> ALPqD9XB7i >> pRFmZPSAk;
    if (ALPqD9XB7i > pRFmZPSAk)
        if3nWFiDgEch (ALPqD9XB7i, pRFmZPSAk);
    else
        wuEwh6X2z (ALPqD9XB7i, pRFmZPSAk);
    return 0;
}

