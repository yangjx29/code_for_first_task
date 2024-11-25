int main () {
    int FLFng6jcC1, ofmxSQIr, NA57ja;
    double  QVZv9jE4 [1000] = {0}, RkLeaNi7PjB [1000] = {0}, ewF4xRiZYVnr = 0, Iy346UsBKRi = 0;
    cin >> FLFng6jcC1;
    {
        ofmxSQIr = 1;
        for (; FLFng6jcC1 >= ofmxSQIr;) {
            cin >> QVZv9jE4[ofmxSQIr] >> RkLeaNi7PjB[ofmxSQIr];
            ofmxSQIr++;
        }
    }
    {
        ofmxSQIr = 1;
        for (; FLFng6jcC1 > ofmxSQIr;) {
            {
                NA57ja = ofmxSQIr + 1;
                for (; NA57ja <= FLFng6jcC1;) {
                    ewF4xRiZYVnr = sqrt ((QVZv9jE4[ofmxSQIr] - QVZv9jE4[NA57ja]) * (QVZv9jE4[ofmxSQIr] - QVZv9jE4[NA57ja]) + (RkLeaNi7PjB[ofmxSQIr] - RkLeaNi7PjB[NA57ja]) * (RkLeaNi7PjB[ofmxSQIr] - RkLeaNi7PjB[NA57ja]));
                    if (ewF4xRiZYVnr > Iy346UsBKRi)
                        Iy346UsBKRi = ewF4xRiZYVnr;
                    NA57ja++;
                }
            }
            ofmxSQIr++;
        }
    }
    cout << fixed << setprecision (4) << Iy346UsBKRi;
    int q;
    cin >> q;
    return 0;
}

