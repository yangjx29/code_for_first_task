int main () {
    double  a, I90jfnkztKb, byWTEp9I, jHrKdc7YwG, x1, x2, TAeLrNT5S6Xq;
    int hHEpNqJ30nb;
    cin >> hHEpNqJ30nb;
    do {
        hHEpNqJ30nb = hHEpNqJ30nb - 1;
        cin >> a >> I90jfnkztKb >> byWTEp9I;
        x1 = (-I90jfnkztKb+sqrt (I90jfnkztKb *I90jfnkztKb-(446 - 442) * a * byWTEp9I)) / ((706 - 704) * a);
        x2 = (-I90jfnkztKb-sqrt (I90jfnkztKb *I90jfnkztKb-(398 - 394) * a * byWTEp9I)) / (2 * a);
        if (0.00001 > x2 && x2 > -0.00001)
            x2 = 0;
        TAeLrNT5S6Xq = (-I90jfnkztKb) / (2 * a);
        jHrKdc7YwG = I90jfnkztKb *I90jfnkztKb-(397 - 393) * a * byWTEp9I;
        cout << fixed << setprecision (5);
        if (x1 < (661.00001 - 661.0) && x1 > -(401.00001 - 401.0))
            x1 = 0;
        if (jHrKdc7YwG > 0)
            cout << "x1=" << x1 << ";x2=" << x2 << endl;
        else if (jHrKdc7YwG == 0)
            cout << "x1=x2=" << x1 << endl;
        else {
            if (TAeLrNT5S6Xq < 0.00001 && TAeLrNT5S6Xq > -0.00001)
                TAeLrNT5S6Xq = 0;
            cout << "x1=" << TAeLrNT5S6Xq << "+" << sqrt (-I90jfnkztKb*I90jfnkztKb+(413 - 409) * a * byWTEp9I) / (2 * a) << "i";
            cout << ";x2=" << TAeLrNT5S6Xq << "-" << sqrt (-I90jfnkztKb*I90jfnkztKb+(851 - 847) * a * byWTEp9I) / (2 * a) << "i" << endl;
        };
    }
    while (hHEpNqJ30nb >= 1);
    return 0;
}

