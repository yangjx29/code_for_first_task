int main () {
    int HmWh34jfB;
    int UmxDne942S1;
    char cTe24N [40];
    int x68nHa0;
    int Ke8nDc;
    int TzFAaru;
    x68nHa0 = 0;
    x68nHa0 += 1;
    TzFAaru = 0;
    scanf ("%s", cTe24N);
    UmxDne942S1 = strlen (cTe24N);
    TzFAaru += UmxDne942S1;
    cout << cTe24N;
    for (; 1;) {
        scanf ("%s", cTe24N);
        UmxDne942S1 = strlen (cTe24N);
        if (!(Ke8nDc -1 != x68nHa0)) {
            cout << " " << cTe24N;
            break;
        }
        else {
            if (Ke8nDc -1 > x68nHa0) {
                if (80 >= TzFAaru +UmxDne942S1+1) {
                    TzFAaru += UmxDne942S1 +1;
                    cout << " " << cTe24N;
                    x68nHa0 += 1;
                }
                else {
                    x68nHa0 += 1;
                    cout << endl;
                    cout << cTe24N;
                    TzFAaru = UmxDne942S1;
                }
            }
        }
    }
    HmWh34jfB = 0;
    cin >> Ke8nDc;
    return 0;
}

