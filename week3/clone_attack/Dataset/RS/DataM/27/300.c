int main () {
    int n, Hy4EuSIlNBA;
    float zVBvs8S;
    float b;
    float reDFq7x;
    double  hXE1ubU48r;
    double  rUekOz6bvD;
    double  TsqHWfS8BTw;
    double  cnrkSE;
    double  tfwdxF0po;
    cin >> n;
    for (Hy4EuSIlNBA = n; 1 <= Hy4EuSIlNBA; Hy4EuSIlNBA = Hy4EuSIlNBA -1) {
        cin >> zVBvs8S >> b >> reDFq7x;
        hXE1ubU48r = b * b - 4 * zVBvs8S * reDFq7x;
        if (hXE1ubU48r > 0) {
            cnrkSE = (0 - b + sqrt (hXE1ubU48r)) / (2 * zVBvs8S);
            tfwdxF0po = (0 - b - sqrt (hXE1ubU48r)) / (2 * zVBvs8S);
            cout << fixed << setprecision (5) << "x1=" << cnrkSE << ';' << "x2=" << tfwdxF0po << endl;
        }
        if (hXE1ubU48r == 0) {
            cnrkSE = (0 - b) / (2 * zVBvs8S);
            cout << fixed << setprecision (5) << "x1=x2=" << cnrkSE << endl;
        }
        if (hXE1ubU48r < 0) {
            rUekOz6bvD = (sqrt (-hXE1ubU48r)) / (2 * zVBvs8S);
            TsqHWfS8BTw = (0 - b) / (2 * zVBvs8S);
            cout << fixed << setprecision (5) << "x1=" << TsqHWfS8BTw << "+" << rUekOz6bvD << "i" << ";" << "x2=" << TsqHWfS8BTw << -rUekOz6bvD << "i" << endl;
        };
    }
    return 0;
}

