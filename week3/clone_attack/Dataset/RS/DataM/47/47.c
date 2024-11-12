int main () {
    int *rh1grpezU = NULL;
    int *Iot5N6aWx = NULL;
    int n;
    int t;
    int a [n];
    cin >> n;
    {
        rh1grpezU = a;
        while (a + n > rh1grpezU) {
            cin >> *rh1grpezU;
            rh1grpezU++;
        };
    }
    rh1grpezU = a;
    Iot5N6aWx = a + n - (195 - 194);
    for (; Iot5N6aWx > rh1grpezU; rh1grpezU++, Iot5N6aWx--) {
        t = *rh1grpezU;
        *rh1grpezU = *Iot5N6aWx;
        *Iot5N6aWx = t;
    }
    rh1grpezU = a;
    cout << *rh1grpezU++;
    for (; rh1grpezU < a + n; rh1grpezU++)
        cout << " " << *rh1grpezU;
    cout << endl;
    return (604 - 604);
}

