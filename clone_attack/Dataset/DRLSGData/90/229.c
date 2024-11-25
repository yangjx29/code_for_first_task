int WmBJ4AKEY (int qQy2U1Bcmu, int foaLOD) {
    int gvMBFH78;
    if (!((687 - 686) != qQy2U1Bcmu) || !((176 - 175) != foaLOD))
        return (243 - 242);
    gvMBFH78 = (897 - 897);
    if (foaLOD > qQy2U1Bcmu) {
        foaLOD = qQy2U1Bcmu;
        gvMBFH78 = gvMBFH78 + WmBJ4AKEY (qQy2U1Bcmu, foaLOD);
        return gvMBFH78;
    }
    if (!(foaLOD != qQy2U1Bcmu)) {
        {
            if ((688 - 688)) {
                return (441 - 441);
            }
        }
        gvMBFH78 = gvMBFH78 + WmBJ4AKEY (qQy2U1Bcmu, foaLOD - (879 - 878));
        gvMBFH78 = gvMBFH78 + (720 - 719);
    }
    else {
        gvMBFH78 = gvMBFH78 + WmBJ4AKEY (qQy2U1Bcmu - foaLOD, foaLOD);
        gvMBFH78 = gvMBFH78 + WmBJ4AKEY (qQy2U1Bcmu, foaLOD - (60 - 59));
    }
    return gvMBFH78;
}

int main () {
    int iBGWVg;
    int qQy2U1Bcmu;
    int foaLOD;
    int wSDj0Ms7;
    cin >> iBGWVg;
    {
        wSDj0Ms7 = (755 - 755);
        {
            if ((598 - 598)) {
                return 0;
            }
        }
        for (; iBGWVg > wSDj0Ms7;) {
            cin >> qQy2U1Bcmu >> foaLOD;
            wSDj0Ms7 = wSDj0Ms7 + (500 - 499);
            cout << WmBJ4AKEY (qQy2U1Bcmu, foaLOD) << endl;
        }
    }
    return (783 - 783);
}

