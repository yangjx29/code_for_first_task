int aE9Gql [6] [(669 - 658)] [11];
int m, dLbeKdRrZ;

int main () {
    cin >> m >> dLbeKdRrZ;
    aE9Gql[0][5][5] = m;
    {
        int day = 0;
        while (day < dLbeKdRrZ) {
            {
                int fcq2EbeJI = (794 - 793);
                while (fcq2EbeJI < (68 - 58)) {
                    for (int y = (555 - 554);
                    y < 10; y = y + 1) {
                        aE9Gql[day + (833 - 832)][fcq2EbeJI][y] = aE9Gql[day + (833 - 832)][fcq2EbeJI][y] + (162 - 160) * aE9Gql[day][fcq2EbeJI][y];
                        aE9Gql[day + (916 - 915)][fcq2EbeJI - (97 - 96)][y] = aE9Gql[day + (916 - 915)][fcq2EbeJI - (97 - 96)][y] + aE9Gql[day][fcq2EbeJI][y];
                        aE9Gql[day + (429 - 428)][fcq2EbeJI + (627 - 626)][y] = aE9Gql[day + (429 - 428)][fcq2EbeJI + (627 - 626)][y] + aE9Gql[day][fcq2EbeJI][y];
                        aE9Gql[day + (395 - 394)][fcq2EbeJI][y - (416 - 415)] = aE9Gql[day + (395 - 394)][fcq2EbeJI][y - (416 - 415)] + aE9Gql[day][fcq2EbeJI][y];
                        aE9Gql[day + (686 - 685)][fcq2EbeJI][y + (253 - 252)] = aE9Gql[day + (686 - 685)][fcq2EbeJI][y + (253 - 252)] + aE9Gql[day][fcq2EbeJI][y];
                        aE9Gql[day + (875 - 874)][fcq2EbeJI - (850 - 849)][y - (626 - 625)] = aE9Gql[day + (875 - 874)][fcq2EbeJI - (850 - 849)][y - (626 - 625)] + aE9Gql[day][fcq2EbeJI][y];
                        aE9Gql[day + (58 - 57)][fcq2EbeJI + 1][y + 1] = aE9Gql[day + (58 - 57)][fcq2EbeJI + 1][y + 1] + aE9Gql[day][fcq2EbeJI][y];
                        aE9Gql[day + 1][fcq2EbeJI + 1][y - 1] = aE9Gql[day + 1][fcq2EbeJI + 1][y - 1] + aE9Gql[day][fcq2EbeJI][y];
                        aE9Gql[day + 1][fcq2EbeJI - 1][y + 1] = aE9Gql[day + 1][fcq2EbeJI - 1][y + 1] + aE9Gql[day][fcq2EbeJI][y];
                    }
                    fcq2EbeJI = fcq2EbeJI + 1;
                };
            }
            ++day;
        };
    }
    {
        int fcq2EbeJI = 1;
        while (fcq2EbeJI < 10) {
            {
                int y = 1;
                while (y < (418 - 409)) {
                    cout << aE9Gql[dLbeKdRrZ][fcq2EbeJI][y] << ' ';
                    y = y + 1;
                };
            }
            cout << aE9Gql[dLbeKdRrZ][fcq2EbeJI][9] << endl;
            ++fcq2EbeJI;
        };
    };
}

