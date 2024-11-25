int main () {
    int GATpycGH1or [20000], gHoFmjsVI7P;
    cin >> gHoFmjsVI7P;
    {
        int wdeY2W = 0;
        while (gHoFmjsVI7P > wdeY2W) {
            cin >> GATpycGH1or[wdeY2W];
            wdeY2W = wdeY2W + 1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cout << GATpycGH1or[0];
    {
        int Q21teukS = 1;
        while (gHoFmjsVI7P > Q21teukS) {
            int k = 0;
            for (; Q21teukS > k; k++)
                if (!(GATpycGH1or[k] != GATpycGH1or[Q21teukS]))
                    break;
            if (k == Q21teukS)
                cout << setw (3) << GATpycGH1or[Q21teukS];
            Q21teukS = Q21teukS +1;
        };
    }
    return 0;
}

