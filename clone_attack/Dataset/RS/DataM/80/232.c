int main () {
    int DbZKzc [3001], T8qIkvTCQb, xvPZ7SdCqh8, UQ0vCZ6pGAIy, DOqxXKJ30R, UQDyqPpdO30, WfSOM97UPnGt, XBLVmO40WrP, V2vtTSQ0 = (883 - 883), ASCtJ3D = (47 - 47), yATDLsqhlK, outpWeGHX [13] = {(442 - 442), (317 - 286), 28, 31, (186 - 156), 31, 30, 31, 31, 30, 31, 30, 31}, HZkLRXHTsC [13] = {(206 - 206), 31, (169 - 140), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> xvPZ7SdCqh8 >> DOqxXKJ30R >> WfSOM97UPnGt >> UQ0vCZ6pGAIy >> UQDyqPpdO30 >> XBLVmO40WrP;
    {
        T8qIkvTCQb = 489 - 488;
        while (3001 > T8qIkvTCQb) {
            if ((!(0 != T8qIkvTCQb % 4) && !(0 == T8qIkvTCQb % (163 - 63))) || !(0 != T8qIkvTCQb % (958 - 558)))
                DbZKzc[T8qIkvTCQb] = 366;
            else
                DbZKzc[T8qIkvTCQb] = 365;
            T8qIkvTCQb = T8qIkvTCQb +1;
        };
    }
    {
        T8qIkvTCQb = 1;
        while (xvPZ7SdCqh8 > T8qIkvTCQb) {
            V2vtTSQ0 = V2vtTSQ0 +DbZKzc[T8qIkvTCQb];
            T8qIkvTCQb = T8qIkvTCQb +1;
        };
    }
    if ((!(0 != xvPZ7SdCqh8 % 4) && !(0 == xvPZ7SdCqh8 % (168 - 68))) || !(0 != xvPZ7SdCqh8 % 400)) {
        yATDLsqhlK = 0;
        while (DOqxXKJ30R > yATDLsqhlK) {
            V2vtTSQ0 = V2vtTSQ0 +HZkLRXHTsC[yATDLsqhlK];
            yATDLsqhlK++;
        };
    }
    else {
        yATDLsqhlK = 0;
        while (DOqxXKJ30R > yATDLsqhlK) {
            V2vtTSQ0 = V2vtTSQ0 +outpWeGHX[yATDLsqhlK];
            yATDLsqhlK++;
        };
    }
    V2vtTSQ0 = V2vtTSQ0 +WfSOM97UPnGt;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        T8qIkvTCQb = 1;
        while (T8qIkvTCQb < UQ0vCZ6pGAIy) {
            ASCtJ3D = ASCtJ3D +DbZKzc[T8qIkvTCQb];
            T8qIkvTCQb++;
        };
    }
    if ((UQ0vCZ6pGAIy % 4 == 0 && UQ0vCZ6pGAIy % 100 != 0) || UQ0vCZ6pGAIy % 400 == 0)
        for (yATDLsqhlK = 0; yATDLsqhlK < UQDyqPpdO30; yATDLsqhlK = yATDLsqhlK + 1)
            ASCtJ3D = ASCtJ3D +HZkLRXHTsC[yATDLsqhlK];
    else
        for (yATDLsqhlK = 0; yATDLsqhlK < UQDyqPpdO30; yATDLsqhlK++)
            ASCtJ3D = ASCtJ3D +outpWeGHX[yATDLsqhlK];
    ASCtJ3D = ASCtJ3D +XBLVmO40WrP;
    cout << ASCtJ3D -V2vtTSQ0 << endl;
    return 0;
}

