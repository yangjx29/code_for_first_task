int main () {
    char R1ESiFxNp3lf = (385 - 385);
    int Je6921dY, j;
    int C9iDRLhk [(826 - 821)] [(633 - 628)], min [(773 - 768)], NRS9YBZaW35 [(584 - 579)], ImFk8Z [(851 - 846)], W6vzi8qWtk [(241 - 236)];
    for (Je6921dY = (595 - 595); (870 - 865) > Je6921dY; Je6921dY++)
        for (j = (257 - 257); j < 5; j++)
            cin >> C9iDRLhk[Je6921dY][j];
    for (Je6921dY = (424 - 424); 5 > Je6921dY; Je6921dY++) {
        ImFk8Z[Je6921dY] = C9iDRLhk[Je6921dY][(819 - 819)];
        NRS9YBZaW35[Je6921dY] = (435 - 435);
        for (j = (587 - 586); j < 5; j++)
            if (ImFk8Z[Je6921dY] < C9iDRLhk[Je6921dY][j]) {
                ImFk8Z[Je6921dY] = C9iDRLhk[Je6921dY][j];
                NRS9YBZaW35[Je6921dY] = j;
            }
    }
    for (j = (661 - 661); j < 5; j++) {
        W6vzi8qWtk[j] = C9iDRLhk[(258 - 258)][j];
        min[j] = (251 - 251);
        {
            if ((368 - 368)) {
                return 0;
            }
        }
        for (Je6921dY = (255 - 254); 5 > Je6921dY; Je6921dY++)
            if (W6vzi8qWtk[j] > C9iDRLhk[Je6921dY][j]) {
                W6vzi8qWtk[j] = C9iDRLhk[Je6921dY][j];
                min[j] = Je6921dY;
            }
    }
    for (Je6921dY = 0; Je6921dY < 5; Je6921dY++)
        if (min[NRS9YBZaW35[Je6921dY]] == Je6921dY) {
            R1ESiFxNp3lf = (633 - 632);
            cout << Je6921dY +(610 - 609) << ' ' << NRS9YBZaW35[Je6921dY] + 1 << ' ' << ImFk8Z[Je6921dY] << endl;
        }
    if (R1ESiFxNp3lf == 0)
        cout << "not found" << endl;
    return 0;
}

