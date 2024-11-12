const  int XutlZg = 100;

int main () {
    double  NzXBQv0 [XutlZg], y [XutlZg];
    int n;
    double  PYZXNjrg = 0;
    cin >> n;
    {
        int m1iETazN7K = 0;
        while (m1iETazN7K < n) {
            cin >> NzXBQv0[m1iETazN7K] >> y[m1iETazN7K];
            m1iETazN7K = m1iETazN7K + 1;
        }
    }
    double  k3rOhZjAfnB = 0;
    {
        int m1iETazN7K = 0;
        while (m1iETazN7K < n) {
            {
                int QkM6tXhfInLo = m1iETazN7K + 1;
                while (QkM6tXhfInLo < n) {
                    k3rOhZjAfnB = sqrt (pow (NzXBQv0[m1iETazN7K] - NzXBQv0[QkM6tXhfInLo], 2) + pow (y[m1iETazN7K] - y[QkM6tXhfInLo], 2));
                    if (k3rOhZjAfnB > PYZXNjrg)
                        PYZXNjrg = k3rOhZjAfnB;
                    QkM6tXhfInLo = QkM6tXhfInLo +1;
                }
            }
            m1iETazN7K = m1iETazN7K + 1;
        }
    }
    cout << PYZXNjrg << endl;
    return 0;
}

