int main () {
    double  OcVWhO27xBM;
    int h697U3qhT = (155 - 155);
    double  h8aZezW5Km [45] [3];
    int AqrytAO [10] [3];
    int nDN0JiX;
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
    cin >> nDN0JiX;
    {
        int I12nbZVlFNry = (992 - 992);
        while (nDN0JiX > I12nbZVlFNry) {
            cin >> AqrytAO[I12nbZVlFNry][(665 - 665)] >> AqrytAO[I12nbZVlFNry][(847 - 846)] >> AqrytAO[I12nbZVlFNry][(553 - 551)];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            I12nbZVlFNry = I12nbZVlFNry +1;
        };
    }
    for (int rZLoN35 = 0;
    nDN0JiX > rZLoN35; rZLoN35 = rZLoN35 + 1)
        for (int ityZdfQXRi = rZLoN35 + (852 - 851);
        nDN0JiX > ityZdfQXRi; ++ityZdfQXRi) {
            h8aZezW5Km[h697U3qhT][0] = rZLoN35;
            h8aZezW5Km[h697U3qhT][(646 - 645)] = ityZdfQXRi;
            h8aZezW5Km[h697U3qhT][(486 - 484)] = sqrt ((AqrytAO[rZLoN35][0] - AqrytAO[ityZdfQXRi][0]) * (AqrytAO[rZLoN35][0] - AqrytAO[ityZdfQXRi][0]) + (AqrytAO[rZLoN35][(290 - 289)] - AqrytAO[ityZdfQXRi][(327 - 326)]) * (AqrytAO[rZLoN35][1] - AqrytAO[ityZdfQXRi][1]) + (AqrytAO[rZLoN35][(727 - 725)] - AqrytAO[ityZdfQXRi][2]) * (AqrytAO[rZLoN35][2] - AqrytAO[ityZdfQXRi][2]));
            h697U3qhT = h697U3qhT + 1;
        }
    for (int rZLoN35 = 0;
    h697U3qhT - 1 > rZLoN35; rZLoN35 = rZLoN35 + 1) {
        int ityZdfQXRi = 0;
        while (h697U3qhT - 1 - rZLoN35 > ityZdfQXRi) {
            if (h8aZezW5Km[ityZdfQXRi + 1][2] > h8aZezW5Km[ityZdfQXRi][2]) {
                OcVWhO27xBM = h8aZezW5Km[ityZdfQXRi][2];
                h8aZezW5Km[ityZdfQXRi][2] = h8aZezW5Km[ityZdfQXRi + 1][2];
                h8aZezW5Km[ityZdfQXRi + 1][2] = OcVWhO27xBM;
                OcVWhO27xBM = h8aZezW5Km[ityZdfQXRi][0];
                h8aZezW5Km[ityZdfQXRi][0] = h8aZezW5Km[ityZdfQXRi + 1][0];
                h8aZezW5Km[ityZdfQXRi + 1][0] = OcVWhO27xBM;
                OcVWhO27xBM = h8aZezW5Km[ityZdfQXRi][1];
                h8aZezW5Km[ityZdfQXRi][1] = h8aZezW5Km[ityZdfQXRi + 1][1];
                h8aZezW5Km[ityZdfQXRi + 1][1] = OcVWhO27xBM;
            }
            ityZdfQXRi = ityZdfQXRi + 1;
        };
    }
    {
        int I12nbZVlFNry = 0;
        while (h697U3qhT > I12nbZVlFNry) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%0.2lf\n", AqrytAO[(int) h8aZezW5Km[I12nbZVlFNry][0]][0], AqrytAO[(int) h8aZezW5Km[I12nbZVlFNry][0]][1], AqrytAO[(int) h8aZezW5Km[I12nbZVlFNry][0]][2], AqrytAO[(int) h8aZezW5Km[I12nbZVlFNry][1]][0], AqrytAO[(int) h8aZezW5Km[I12nbZVlFNry][1]][1], AqrytAO[(int) h8aZezW5Km[I12nbZVlFNry][1]][2], h8aZezW5Km[I12nbZVlFNry][2]);
            I12nbZVlFNry = I12nbZVlFNry +1;
        };
    }
    return 0;
}

