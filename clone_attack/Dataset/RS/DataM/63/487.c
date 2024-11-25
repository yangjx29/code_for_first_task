int main () {
    int bpEbekHM;
    int EehxZiXV84Fw;
    int dwneW7S;
    int Ayuz0Rh;
    int xiu7fmOn [(262 - 161)] [101];
    int E31tFby [101] [101];
    int c [101] [101];
    int lItnR4cGSml;
    int Re9YijoO;
    int eUHkrXstNK;
    cin >> bpEbekHM >> EehxZiXV84Fw;
    {
        lItnR4cGSml = 1;
        while (lItnR4cGSml <= bpEbekHM) {
            {
                Re9YijoO = 1;
                while (Re9YijoO <= EehxZiXV84Fw) {
                    cin >> xiu7fmOn[lItnR4cGSml][Re9YijoO];
                    Re9YijoO++;
                };
            }
            lItnR4cGSml = lItnR4cGSml + 1;
        };
    }
    cin >> dwneW7S >> Ayuz0Rh;
    {
        lItnR4cGSml = 1;
        while (lItnR4cGSml <= dwneW7S) {
            {
                Re9YijoO = 1;
                while (Ayuz0Rh >= Re9YijoO) {
                    cin >> E31tFby[lItnR4cGSml][Re9YijoO];
                    Re9YijoO++;
                };
            }
            lItnR4cGSml++;
        };
    }
    for (lItnR4cGSml = 1; lItnR4cGSml <= bpEbekHM; lItnR4cGSml++) {
        Re9YijoO = 1;
        while (Re9YijoO <= Ayuz0Rh) {
            c[lItnR4cGSml][Re9YijoO] = 0;
            {
                eUHkrXstNK = 1;
                while (eUHkrXstNK <= EehxZiXV84Fw) {
                    c[lItnR4cGSml][Re9YijoO] = xiu7fmOn[lItnR4cGSml][eUHkrXstNK] * E31tFby[eUHkrXstNK][Re9YijoO] + c[lItnR4cGSml][Re9YijoO];
                    eUHkrXstNK++;
                };
            }
            Re9YijoO++;
        };
    }
    {
        lItnR4cGSml = 1;
        while (lItnR4cGSml <= bpEbekHM) {
            {
                Re9YijoO = 1;
                while (Re9YijoO < Ayuz0Rh) {
                    cout << c[lItnR4cGSml][Re9YijoO] << " ";
                    Re9YijoO++;
                };
            }
            cout << c[lItnR4cGSml][Ayuz0Rh] << endl;
            lItnR4cGSml++;
        };
    }
    return 0;
}

