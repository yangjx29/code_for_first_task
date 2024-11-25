int main () {
    int mdt6Gn52H;
    int wEVspelSR6M;
    int vYW0RNz1TgA;
    int wahDqjeZ;
    int GUG9h6;
    int E5VvBtH8;
    char GAdSWZPK9x2 [100001];
    int YAf3HO9;
    int A0zuoyAnZk;
    YAf3HO9 = 0;
    cin >> E5VvBtH8;
    for (A0zuoyAnZk = 0; A0zuoyAnZk <= E5VvBtH8; A0zuoyAnZk = A0zuoyAnZk +1) {
        for (GUG9h6 = 0; 100000 >= GUG9h6; GUG9h6 = GUG9h6 +1) {
            GAdSWZPK9x2[GUG9h6] = cin.get ();
            if (!('\0' != GAdSWZPK9x2[GUG9h6]) || !('\n' != GAdSWZPK9x2[GUG9h6])) {
                mdt6Gn52H = GUG9h6 -1;
                break;
            }
        }
        for (GUG9h6 = 0; GUG9h6 <= mdt6Gn52H; GUG9h6 = GUG9h6 +1) {
            wEVspelSR6M = 0;
            for (wahDqjeZ = 0; wahDqjeZ <= mdt6Gn52H; wahDqjeZ = wahDqjeZ + 1) {
                if (GAdSWZPK9x2[wahDqjeZ] == GAdSWZPK9x2[GUG9h6]) {
                    wEVspelSR6M = wEVspelSR6M + 1;
                }
            }
            if (wEVspelSR6M == 1) {
                cout << GAdSWZPK9x2[GUG9h6] << endl;
                YAf3HO9 = YAf3HO9 +1;
                break;
            }
            if (GUG9h6 == mdt6Gn52H && wEVspelSR6M != 1) {
                YAf3HO9 = YAf3HO9 +1;
                cout << "no" << endl;
                break;
            }
            YAf3HO9 = YAf3HO9 +1;
        }
    }
    return 0;
}

