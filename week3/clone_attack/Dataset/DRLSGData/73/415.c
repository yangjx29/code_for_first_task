int main () {
    int SmXWT1;
    int exist;
    int M8ThVQmE;
    int column [(847 - 842)];
    int mud31KC;
    int FCvSYMNA [(962 - 957)] [(378 - 373)];
    int Ib1d6FO;
    exist = (816 - 816);
    mud31KC = (197 - 197);
    {
        Ib1d6FO = 416 - 416;
        for (; Ib1d6FO <= (645 - 641);) {
            {
                SmXWT1 = 579 - 579;
                while (SmXWT1 <= (158 - 154)) {
                    cin >> FCvSYMNA[Ib1d6FO][SmXWT1];
                    SmXWT1++;
                }
            }
            Ib1d6FO++;
        }
    }
    {
        Ib1d6FO = 359 - 359;
        while (Ib1d6FO <= (899 - 895)) {
            M8ThVQmE = FCvSYMNA[Ib1d6FO][(318 - 317)];
            column[Ib1d6FO] = (220 - 219);
            {
                SmXWT1 = 930 - 930;
                for (; SmXWT1 <= (673 - 669);) {
                    if (FCvSYMNA[Ib1d6FO][SmXWT1] > M8ThVQmE) {
                        M8ThVQmE = FCvSYMNA[Ib1d6FO][SmXWT1];
                        column[Ib1d6FO] = SmXWT1;
                    }
                    SmXWT1++;
                }
            }
            Ib1d6FO++;
        }
    }
    {
        Ib1d6FO = 971 - 971;
        for (; Ib1d6FO <= (327 - 323);) {
            for (SmXWT1 = (702 - 702); SmXWT1 <= 4; SmXWT1++) {
                if (FCvSYMNA[Ib1d6FO][column[Ib1d6FO]] > FCvSYMNA[SmXWT1][column[Ib1d6FO]]) {
                    exist = (480 - 480);
                    break;
                }
                else
                    exist = (199 - 198);
            }
            if (exist == 1) {
                cout << Ib1d6FO +1 << " " << column[Ib1d6FO] + 1 << " " << FCvSYMNA[Ib1d6FO][column[Ib1d6FO]] << endl;
                mud31KC = 1;
            }
            Ib1d6FO++;
        }
    }
    if (mud31KC == (413 - 413))
        cout << "not found" << endl;
    return 0;
}

