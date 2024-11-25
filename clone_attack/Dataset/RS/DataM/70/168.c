int main () {
    int t7ox9Yim;
    int ff8ke7V95X;
    int J98cWYIz4A;
    double  c16VWw4Sh02y [1000];
    double  EqOC2uivtxl [1000];
    double  d [1000] [1000];
    double  JKZWeGYQ2;
    cout << fixed;
    cin >> t7ox9Yim;
    JKZWeGYQ2 = 0;
    {
        ff8ke7V95X = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t7ox9Yim > ff8ke7V95X) {
            cin >> c16VWw4Sh02y[ff8ke7V95X] >> EqOC2uivtxl[ff8ke7V95X];
            ff8ke7V95X = ff8ke7V95X + 1;
        };
    }
    {
        ff8ke7V95X = 0;
        while (t7ox9Yim - 1 > ff8ke7V95X) {
            {
                J98cWYIz4A = ff8ke7V95X + 1;
                while (J98cWYIz4A < t7ox9Yim) {
                    d[ff8ke7V95X][J98cWYIz4A] = sqrt ((c16VWw4Sh02y[J98cWYIz4A] - c16VWw4Sh02y[ff8ke7V95X]) * (c16VWw4Sh02y[J98cWYIz4A] - c16VWw4Sh02y[ff8ke7V95X]) + (EqOC2uivtxl[J98cWYIz4A] - EqOC2uivtxl[ff8ke7V95X]) * (EqOC2uivtxl[J98cWYIz4A] - EqOC2uivtxl[ff8ke7V95X]));
                    if (d[ff8ke7V95X][J98cWYIz4A] > JKZWeGYQ2)
                        JKZWeGYQ2 = d[ff8ke7V95X][J98cWYIz4A];
                    J98cWYIz4A = J98cWYIz4A +1;
                };
            }
            ff8ke7V95X = ff8ke7V95X + 1;
        };
    }
    cout << setprecision (4) << JKZWeGYQ2 << endl;
    return 0;
}

