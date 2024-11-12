int main () {
    int vo7rnVQw52 [(27 - 16)] [11];
    int mwS0GUpD [11] [11];
    int d953vluTAM;
    int cFKZw2;
    int uWxDzoL7S3;
    int duHYgD1whKzd;
    int wEPfVs6yBkC;
    {
        d953vluTAM = (17 - 17);
        for (; (742 - 732) >= d953vluTAM;) {
            {
                cFKZw2 = (612 - 612);
                for (; cFKZw2 <= 10;) {
                    vo7rnVQw52[d953vluTAM][cFKZw2] = (304 - 304);
                    mwS0GUpD[d953vluTAM][cFKZw2] = 0;
                    cFKZw2 = cFKZw2 + (495 - 494);
                }
            }
            d953vluTAM = d953vluTAM + (549 - 548);
        }
    }
    cin >> duHYgD1whKzd >> wEPfVs6yBkC;
    vo7rnVQw52[(548 - 543)][5] = mwS0GUpD[5][5] = duHYgD1whKzd;
    {
        d953vluTAM = (796 - 795);
        for (; wEPfVs6yBkC >= d953vluTAM;) {
            {
                cFKZw2 = (992 - 991);
                while (cFKZw2 <= 9) {
                    for (uWxDzoL7S3 = 1; uWxDzoL7S3 <= 9; uWxDzoL7S3++) {
                        mwS0GUpD[cFKZw2][uWxDzoL7S3] = mwS0GUpD[cFKZw2][uWxDzoL7S3] + vo7rnVQw52[cFKZw2][uWxDzoL7S3];
                        mwS0GUpD[cFKZw2 - 1][uWxDzoL7S3] = mwS0GUpD[cFKZw2 - 1][uWxDzoL7S3] + vo7rnVQw52[cFKZw2][uWxDzoL7S3];
                        mwS0GUpD[cFKZw2 - 1][uWxDzoL7S3 - 1] += vo7rnVQw52[cFKZw2][uWxDzoL7S3];
                        mwS0GUpD[cFKZw2 - 1][uWxDzoL7S3 + 1] += vo7rnVQw52[cFKZw2][uWxDzoL7S3];
                        mwS0GUpD[cFKZw2][uWxDzoL7S3 - 1] += vo7rnVQw52[cFKZw2][uWxDzoL7S3];
                        mwS0GUpD[cFKZw2][uWxDzoL7S3 + 1] += vo7rnVQw52[cFKZw2][uWxDzoL7S3];
                        mwS0GUpD[cFKZw2 + 1][uWxDzoL7S3 - 1] = mwS0GUpD[cFKZw2 + 1][uWxDzoL7S3 - 1] + vo7rnVQw52[cFKZw2][uWxDzoL7S3];
                        mwS0GUpD[cFKZw2 + 1][uWxDzoL7S3] = mwS0GUpD[cFKZw2 + 1][uWxDzoL7S3] + vo7rnVQw52[cFKZw2][uWxDzoL7S3];
                        mwS0GUpD[cFKZw2 + 1][uWxDzoL7S3 + 1] = mwS0GUpD[cFKZw2 + 1][uWxDzoL7S3 + 1] + vo7rnVQw52[cFKZw2][uWxDzoL7S3];
                    }
                    cFKZw2++;
                }
            }
            for (cFKZw2 = 1; cFKZw2 <= 9; cFKZw2++) {
                uWxDzoL7S3 = 1;
                for (; uWxDzoL7S3 <= 9;) {
                    vo7rnVQw52[cFKZw2][uWxDzoL7S3] = mwS0GUpD[cFKZw2][uWxDzoL7S3];
                    uWxDzoL7S3 = uWxDzoL7S3 + 1;
                }
            }
            d953vluTAM = d953vluTAM + 1;
        }
    }
    {
        d953vluTAM = 1;
        while (d953vluTAM <= 9) {
            {
                cFKZw2 = 1;
                for (; cFKZw2 <= (275 - 267);) {
                    cout << vo7rnVQw52[d953vluTAM][cFKZw2] << " ";
                    cFKZw2++;
                }
            }
            cout << vo7rnVQw52[d953vluTAM][9] << endl;
            d953vluTAM++;
        }
    }
    return 0;
}

