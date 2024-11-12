int main () {
    struct   {
        double  x, Xnxsh6m;
    }
    OBLb3aKgYV [PI];
    int JxoZHKV9DXG3, IRqXoNC, RFDaRbk;
    double  BXFaUOTHZN, T8geGj3Q1y, HJLkcxaV;
    scanf ("%d", &RFDaRbk);
    BXFaUOTHZN = 0;
    for (JxoZHKV9DXG3 = 0; JxoZHKV9DXG3 < RFDaRbk; JxoZHKV9DXG3 = JxoZHKV9DXG3 +1) {
        scanf ("%lf" "%lf", &OBLb3aKgYV[JxoZHKV9DXG3].x, &OBLb3aKgYV[JxoZHKV9DXG3].Xnxsh6m);
    }
    {
        JxoZHKV9DXG3 = 0;
        while (JxoZHKV9DXG3 < RFDaRbk) {
            {
                IRqXoNC = JxoZHKV9DXG3 +1;
                while (IRqXoNC < RFDaRbk) {
                    double  ax, FcRUwfheIokG;
                    ax = OBLb3aKgYV[JxoZHKV9DXG3].x - OBLb3aKgYV[IRqXoNC].x;
                    FcRUwfheIokG = OBLb3aKgYV[JxoZHKV9DXG3].Xnxsh6m - OBLb3aKgYV[IRqXoNC].Xnxsh6m;
                    T8geGj3Q1y = pow (ax, 2) + pow (FcRUwfheIokG, 2);
                    HJLkcxaV = sqrt (T8geGj3Q1y);
                    if (HJLkcxaV > BXFaUOTHZN) {
                        BXFaUOTHZN = (float) HJLkcxaV;
                    }
                    IRqXoNC++;
                }
            }
            JxoZHKV9DXG3++;
        }
    }
    printf ("%.4f", BXFaUOTHZN);
    return 0;
}

