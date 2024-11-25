int main () {
    double  QNoyzgH8, Y6XhdLQ, eqrXsQ = 0, gCHq8Kwk0 = 0;
    int ZcIQNCeYgo [302], pNk4d0C, AwsoZqu = 0;
    cin >> Y6XhdLQ;
    for (pNk4d0C = 1; Y6XhdLQ >= pNk4d0C; pNk4d0C++) {
        cin >> ZcIQNCeYgo[pNk4d0C];
        eqrXsQ = eqrXsQ + ZcIQNCeYgo[pNk4d0C];
    }
    QNoyzgH8 = eqrXsQ / Y6XhdLQ;
    for (pNk4d0C = 1; pNk4d0C <= Y6XhdLQ; pNk4d0C++) {
        if (fabs (ZcIQNCeYgo[pNk4d0C] - QNoyzgH8) > gCHq8Kwk0)
            gCHq8Kwk0 = fabs (ZcIQNCeYgo[pNk4d0C] - QNoyzgH8);
    }
    for (pNk4d0C = 1; pNk4d0C <= Y6XhdLQ; pNk4d0C++) {
        if (fabs (QNoyzgH8 -ZcIQNCeYgo[pNk4d0C] - gCHq8Kwk0) < 0.0001) {
            cout << ZcIQNCeYgo[pNk4d0C];
            AwsoZqu++;
        }
        if (fabs (ZcIQNCeYgo[pNk4d0C] - QNoyzgH8 -gCHq8Kwk0) < 0.0001) {
            if (AwsoZqu == 1)
                cout << "," << ZcIQNCeYgo[pNk4d0C] << endl;
            else
                cout << ZcIQNCeYgo[pNk4d0C] << endl;
        }
    }
    return 0;
}

