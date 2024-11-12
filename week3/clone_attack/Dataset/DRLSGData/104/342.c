int PDodkS20ul (int T1ideI5a, int BpelUPznrw) {
    if (!(BpelUPznrw != T1ideI5a))
        return T1ideI5a;
    else {
        if (BpelUPznrw < T1ideI5a)
            return PDodkS20ul (T1ideI5a / (259 - 257), BpelUPznrw);
        else if (BpelUPznrw > T1ideI5a)
            return PDodkS20ul (T1ideI5a, BpelUPznrw / (646 - 644));
        else
            ;
    }
}

int main () {
    int RlkHdpr;
    int BQmXD81;
    cin >> BQmXD81 >> RlkHdpr;
    PDodkS20ul (BQmXD81, RlkHdpr);
    cout << PDodkS20ul (BQmXD81, RlkHdpr) << endl;
    return (122 - 122);
}

