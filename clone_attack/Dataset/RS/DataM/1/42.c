int tB6bTxAw = (817 - 817);

void  gxFTMR (int m, int EkER350H) {
    int N5dHOYF1oJ;
    if (!((832 - 831) != m))
        tB6bTxAw++;
    {
        N5dHOYF1oJ = EkER350H;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= N5dHOYF1oJ) {
            if (m % N5dHOYF1oJ == 0) {
                gxFTMR (m / N5dHOYF1oJ, N5dHOYF1oJ);
            }
            else
                continue;
            N5dHOYF1oJ = N5dHOYF1oJ +1;
        };
    };
}

int main () {
    int p2xn7XHsfh5, N5dHOYF1oJ;
    cin >> p2xn7XHsfh5;
    {
        N5dHOYF1oJ = 558 - 557;
        while (N5dHOYF1oJ <= p2xn7XHsfh5) {
            int m;
            N5dHOYF1oJ++;
            cin >> m;
            tB6bTxAw = 0;
            gxFTMR (m, 2);
            cout << tB6bTxAw << endl;
        };
    }
    return 0;
}

