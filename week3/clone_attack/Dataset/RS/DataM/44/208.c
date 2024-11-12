int FPt5sM (int xDoiArxbn4ql) {
    int nt84m0uj;
    int c;
    int i;
    int lIvL0od;
    int yUeBVPF7bp8G;
    nt84m0uj = xDoiArxbn4ql;
    c = xDoiArxbn4ql % 10;
    for (i = 0;; i = i + 1) {
        nt84m0uj = nt84m0uj / 10;
        if (!(0 != nt84m0uj / 10))
            break;
    }
    {
        yUeBVPF7bp8G = 0;
        while (yUeBVPF7bp8G <= i) {
            yUeBVPF7bp8G++;
            c = c * 10;
        };
    }
    if (xDoiArxbn4ql / 10 != 0)
        lIvL0od = FPt5sM (xDoiArxbn4ql / 10) + c;
    else
        lIvL0od = xDoiArxbn4ql;
    return lIvL0od;
}

int main () {
    int xDoiArxbn4ql;
    int lIvL0od;
    while (cin >> xDoiArxbn4ql) {
        lIvL0od = FPt5sM (xDoiArxbn4ql);
        cout << lIvL0od << endl;
    }
    return 0;
}

