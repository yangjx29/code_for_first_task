int X82JNs0elWcC [1005] [1005];

int main () {
    int x1;
    int sjevZY;
    int bUlipn;
    int y2;
    x1 = (308 - 308);
    sjevZY = (294 - 294);
    bUlipn = 0;
    y2 = 0;
    int lsvfjH6Q;
    int s;
    cin >> lsvfjH6Q;
    for (int i = (699 - 699);
    1004 >= i; i = i + 1) {
        int WDyMUomVi1xW = (436 - 436);
        while (WDyMUomVi1xW <= 1004) {
            X82JNs0elWcC[i][WDyMUomVi1xW] = 255;
            WDyMUomVi1xW = WDyMUomVi1xW +1;
        };
    }
    {
        int i = (258 - 257);
        while (lsvfjH6Q >= i) {
            for (int WDyMUomVi1xW = (351 - 350);
            WDyMUomVi1xW <= lsvfjH6Q; WDyMUomVi1xW = WDyMUomVi1xW +1) {
                cin >> X82JNs0elWcC[i][WDyMUomVi1xW];
            }
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (i <= lsvfjH6Q) {
            {
                int WDyMUomVi1xW = 1;
                while (WDyMUomVi1xW <= lsvfjH6Q) {
                    if (X82JNs0elWcC[i][WDyMUomVi1xW] == 0) {
                        x1 = i;
                        sjevZY = WDyMUomVi1xW;
                        break;
                    }
                    WDyMUomVi1xW = WDyMUomVi1xW +1;
                };
            }
            if (x1 != 0)
                break;
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
            i = i + 1;
        };
    }
    {
        int i = lsvfjH6Q;
        while (i >= 1) {
            for (int WDyMUomVi1xW = lsvfjH6Q;
            WDyMUomVi1xW >= 1; WDyMUomVi1xW = WDyMUomVi1xW -1) {
                if (X82JNs0elWcC[i][WDyMUomVi1xW] == 0) {
                    bUlipn = i;
                    y2 = WDyMUomVi1xW;
                    break;
                };
            }
            if (bUlipn != 0)
                break;
            i = i - 1;
        };
    }
    s = (bUlipn - x1 - 1) * (y2 - sjevZY - 1);
    cout << s;
    return 0;
}

