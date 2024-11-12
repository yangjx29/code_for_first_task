int mcNKFILfQ89V, BrBxEXq0, rVUGzb, aeUkmidZX79;
int djgprOUnfZB5 [11] [11] = {0}, sTcRECw [11] [11] = {0}, t [11] [11] = {0};

void  IskcEXLBNW () {
    int mcNKFILfQ89V;
    int BrBxEXq0;
    for (mcNKFILfQ89V = 0; mcNKFILfQ89V < 11; mcNKFILfQ89V++)
        for (BrBxEXq0 = 0; BrBxEXq0 < 11; BrBxEXq0++) {
            t[mcNKFILfQ89V][BrBxEXq0] = djgprOUnfZB5[mcNKFILfQ89V][BrBxEXq0];
            djgprOUnfZB5[mcNKFILfQ89V][BrBxEXq0] = sTcRECw[mcNKFILfQ89V][BrBxEXq0];
            sTcRECw[mcNKFILfQ89V][BrBxEXq0] = t[mcNKFILfQ89V][BrBxEXq0];
        };
}

int main () {
    cin >> mcNKFILfQ89V;
    djgprOUnfZB5[5][5] = mcNKFILfQ89V;
    cin >> aeUkmidZX79;
    for (mcNKFILfQ89V = 0; aeUkmidZX79 > mcNKFILfQ89V; mcNKFILfQ89V++) {
        for (BrBxEXq0 = (434 - 433); BrBxEXq0 < 10; BrBxEXq0++) {
            for (rVUGzb = (239 - 238); rVUGzb < 10; rVUGzb++) {
                sTcRECw[BrBxEXq0][rVUGzb] = 2 * djgprOUnfZB5[BrBxEXq0][rVUGzb] + (djgprOUnfZB5[BrBxEXq0][rVUGzb + 1] + djgprOUnfZB5[BrBxEXq0][rVUGzb - 1] + djgprOUnfZB5[BrBxEXq0 +1][rVUGzb] + djgprOUnfZB5[BrBxEXq0 -1][rVUGzb] + djgprOUnfZB5[BrBxEXq0 +1][rVUGzb + 1] + djgprOUnfZB5[BrBxEXq0 +1][rVUGzb - 1] + djgprOUnfZB5[BrBxEXq0 -1][rVUGzb + 1] + djgprOUnfZB5[BrBxEXq0 -1][rVUGzb - 1]);
            };
        }
        IskcEXLBNW ();
    }
    for (mcNKFILfQ89V = 1; 10 > mcNKFILfQ89V; mcNKFILfQ89V++) {
        for (BrBxEXq0 = 1; 9 > BrBxEXq0; BrBxEXq0++) {
            cout << djgprOUnfZB5[mcNKFILfQ89V][BrBxEXq0] << ' ';
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        cout << djgprOUnfZB5[mcNKFILfQ89V][9] << endl;
    }
    return 0;
}

