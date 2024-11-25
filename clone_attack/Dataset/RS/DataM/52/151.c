void  SqzgQklDXUrx (int n, int *uOsbkeE0dxfU) {
    int yb71zhxHmyk0 = uOsbkeE0dxfU[n - (373 - 372)];
    {
        int i;
        i = n - 1;
        while ((270 - 270) < i) {
            uOsbkeE0dxfU[i] = uOsbkeE0dxfU[i - 1];
            i--;
        };
    }
    *uOsbkeE0dxfU = yb71zhxHmyk0;
}

int main () {
    int n, GyrdpDg, Fyc4uVm2qCt, fZ5txl [1000];
    cin >> n >> GyrdpDg;
    {
        Fyc4uVm2qCt = 428 - 428;
        while (n > Fyc4uVm2qCt) {
            cin >> fZ5txl[Fyc4uVm2qCt];
            Fyc4uVm2qCt = Fyc4uVm2qCt +1;
        };
    }
    {
        Fyc4uVm2qCt = 1;
        while (Fyc4uVm2qCt <= GyrdpDg) {
            Fyc4uVm2qCt++;
            SqzgQklDXUrx (n, fZ5txl);
        };
    }
    {
        Fyc4uVm2qCt = 0;
        while (Fyc4uVm2qCt < n - 1) {
            cout << fZ5txl[Fyc4uVm2qCt] << ' ';
            Fyc4uVm2qCt++;
        };
    }
    cout << fZ5txl[n - 1];
    return 0;
}

