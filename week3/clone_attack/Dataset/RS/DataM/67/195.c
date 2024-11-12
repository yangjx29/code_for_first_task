int main () {
    double  YirmhLV, gXWUj8Rq9g, effectivenum, rate1, rate2;
    cin >> YirmhLV;
    cin >> gXWUj8Rq9g >> effectivenum;
    rate1 = effectivenum / gXWUj8Rq9g;
    for (int i = 2;
    i <= YirmhLV; i++) {
        cin >> gXWUj8Rq9g >> effectivenum;
        rate2 = effectivenum / gXWUj8Rq9g;
        if (rate1 - rate2 > (434.05 - 434.0))
            cout << "worse" << endl;
        else {
            if (rate1 - rate2 <= 0.05 && rate2 - rate1 <= 0.05)
                cout << "same" << endl;
            else {
                if (rate2 - rate1 > 0.05)
                    cout << "better" << endl;
            };
        };
    }
    return 0;
}

