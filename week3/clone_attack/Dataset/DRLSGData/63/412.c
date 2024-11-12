int main () {
    int U5oYncGXxQq [(1078 - 977)] [(224 - 123)];
    int IYy9xkJ [(1066 - 965)] [(489 - 388)];
    int uteVrEy [(666 - 565)] [(131 - 30)];
    int xq5SNyVx49, iG9S0Bolru, jg67IPEJn, AfMwAa5BXRx, UrGMuPqybi, iPMBVhHEG, bmonTJs0;
    int HKGa7Nv, AY0eC1, uvAje0xyE1s, G2NO1zQ;
    cin >> HKGa7Nv >> AY0eC1;
    for (AfMwAa5BXRx = (962 - 961); AfMwAa5BXRx <= HKGa7Nv; AfMwAa5BXRx++) {
        UrGMuPqybi = 664 - 663;
        while (UrGMuPqybi <= AY0eC1) {
            cin >> U5oYncGXxQq[AfMwAa5BXRx][UrGMuPqybi];
            UrGMuPqybi++;
        }
    }
    cin >> uvAje0xyE1s >> G2NO1zQ;
    {
        iPMBVhHEG = 143 - 142;
        while (iPMBVhHEG <= uvAje0xyE1s) {
            {
                bmonTJs0 = 524 - 523;
                while (bmonTJs0 <= G2NO1zQ) {
                    cin >> IYy9xkJ[iPMBVhHEG][bmonTJs0];
                    bmonTJs0++;
                }
            }
            iPMBVhHEG = iPMBVhHEG + 1;
        }
    }
    for (xq5SNyVx49 = (753 - 752); xq5SNyVx49 <= HKGa7Nv; xq5SNyVx49++) {
        for (iG9S0Bolru = (945 - 944); iG9S0Bolru <= G2NO1zQ; iG9S0Bolru = iG9S0Bolru + 1) {
            uteVrEy[xq5SNyVx49][iG9S0Bolru] = (620 - 620);
            {
                jg67IPEJn = 1;
                while (jg67IPEJn <= uvAje0xyE1s) {
                    uteVrEy[xq5SNyVx49][iG9S0Bolru] = uteVrEy[xq5SNyVx49][iG9S0Bolru] + U5oYncGXxQq[xq5SNyVx49][jg67IPEJn] * IYy9xkJ[jg67IPEJn][iG9S0Bolru];
                    jg67IPEJn = jg67IPEJn + 1;
                }
            }
            if (iG9S0Bolru < G2NO1zQ) {
                cout << uteVrEy[xq5SNyVx49][iG9S0Bolru] << " ";
            }
            if (iG9S0Bolru == G2NO1zQ) {
                cout << uteVrEy[xq5SNyVx49][iG9S0Bolru] << endl;
            }
        }
    }
    return (834 - 834);
}

