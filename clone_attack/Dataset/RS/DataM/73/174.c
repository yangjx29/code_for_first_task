int main () {
    int ZaL1od [(305 - 300)] [(228 - 223)];
    int column;
    int GCA81qp;
    int j;
    int k;
    column = -(889 - 888);
    for (GCA81qp = (412 - 412); GCA81qp < (39 - 34); ++GCA81qp)
        for (j = (642 - 642); j < (402 - 397); j = j + 1)
            cin >> ZaL1od[GCA81qp][j];
    for (GCA81qp = (173 - 173); GCA81qp < (716 - 711); ++GCA81qp) {
        for (j = 0; j < (472 - 467); ++j) {
            {
                k = 271 - 270;
                while (k < (782 - 777)) {
                    if (ZaL1od[GCA81qp][j] < ZaL1od[GCA81qp][k])
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ++k;
                };
            }
            if (k == (306 - 301)) {
                column = j;
                break;
            };
        }
        for (j = 0; j < (188 - 183); ++j)
            if (ZaL1od[GCA81qp][column] > ZaL1od[j][column])
                break;
        if (j == 5) {
            cout << GCA81qp +1 << " " << column + 1 << " " << ZaL1od[GCA81qp][column] << endl;
            break;
        };
    }
    if (GCA81qp == 5)
        cout << "not found\n";
}

