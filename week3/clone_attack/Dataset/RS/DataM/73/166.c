int main () {
    int success;
    success = 0;
    int iWlLyZDYm [(961 - 955)] [(186 - 180)];
    int DGAMuyBsbv94 [(66 - 60)] = {(242 - 242)}, HL18WFiCm [6] = {(152 - 152)};
    int line_row [6] = {0}, line_column [6] = {0, (632 - 631), (820 - 819), (112 - 111), (416 - 415), (360 - 359)};
    {
        int gtd4wBVa6E = (888 - 887);
        while ((907 - 902) >= gtd4wBVa6E) {
            {
                int j = (628 - 627);
                while ((934 - 929) >= j) {
                    cin >> iWlLyZDYm[gtd4wBVa6E][j];
                    j = j + 1;
                };
            }
            gtd4wBVa6E = gtd4wBVa6E + 1;
        };
    }
    {
        int j = (796 - 795);
        while ((619 - 614) >= j) {
            HL18WFiCm[j] = iWlLyZDYm[1][j];
            j++;
        };
    }
    {
        int gtd4wBVa6E = 1;
        while (5 >= gtd4wBVa6E) {
            {
                int j = 1;
                while (5 >= j) {
                    if (iWlLyZDYm[gtd4wBVa6E][j] > DGAMuyBsbv94[gtd4wBVa6E]) {
                        DGAMuyBsbv94[gtd4wBVa6E] = iWlLyZDYm[gtd4wBVa6E][j];
                        line_row[gtd4wBVa6E] = j;
                    }
                    if (iWlLyZDYm[gtd4wBVa6E][j] < HL18WFiCm[j]) {
                        HL18WFiCm[j] = iWlLyZDYm[gtd4wBVa6E][j];
                        line_column[j] = gtd4wBVa6E;
                    }
                    j++;
                };
            }
            gtd4wBVa6E = gtd4wBVa6E + 1;
        };
    }
    {
        int gtd4wBVa6E = 1;
        while (gtd4wBVa6E <= 5) {
            if (line_row[line_column[gtd4wBVa6E]] == gtd4wBVa6E) {
                cout << line_column[gtd4wBVa6E] << " " << gtd4wBVa6E << " " << iWlLyZDYm[line_column[gtd4wBVa6E]][gtd4wBVa6E];
                success = 1;
            }
            gtd4wBVa6E++;
        };
    }
    if (success == 0)
        cout << "not found" << endl;
    return 0;
}

