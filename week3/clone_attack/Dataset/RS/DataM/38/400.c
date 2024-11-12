int main () {
    double  MOvkWRGZ4;
    double  JSlWnxPd [128];
    double  sEj2SCZW4;
    int sh17SmQ9Ec;
    int JAm5CFt31Y4R;
    cin >> sh17SmQ9Ec;
    for (; sh17SmQ9Ec--;) {
        sEj2SCZW4 = 0.0;
        MOvkWRGZ4 = 0.0;
        cin >> JAm5CFt31Y4R;
        {
            int SJ6qLD5oGe = (161 - 161);
            while (JAm5CFt31Y4R > SJ6qLD5oGe) {
                cin >> *(JSlWnxPd +SJ6qLD5oGe);
                MOvkWRGZ4 = MOvkWRGZ4 +*(JSlWnxPd +SJ6qLD5oGe);
                ++SJ6qLD5oGe;
            };
        }
        MOvkWRGZ4 = MOvkWRGZ4 / JAm5CFt31Y4R;
        for (int SJ6qLD5oGe = 0;
        JAm5CFt31Y4R > SJ6qLD5oGe; ++SJ6qLD5oGe) {
            sEj2SCZW4 = sEj2SCZW4 + (*(JSlWnxPd +SJ6qLD5oGe) - MOvkWRGZ4) * (*(JSlWnxPd +SJ6qLD5oGe) - MOvkWRGZ4);
        }
        sEj2SCZW4 = sEj2SCZW4 / (JAm5CFt31Y4R);
        printf ("%.5lf\n", sqrt (sEj2SCZW4));
    };
}

