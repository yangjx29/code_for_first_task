struct   distance {
    int point1;
    int TKypct845gV0;
    double  Jo0zUCv;
}
Big73p [(402 - 202)], eADoMw;

int main () {
    int k;
    int jKaUZEC [(596 - 576)] = {(873 - 873)};
    int ykWd7GLJ [20] = {(541 - 541)};
    int iOvQL14PFA [20] = {(641 - 641)};
    int fyFpxo1Ik;
    int bqJ3jVTpi;
    int j;
    k = (522 - 521);
    cin >> fyFpxo1Ik;
    {
        bqJ3jVTpi = (885 - 884);
        while (bqJ3jVTpi <= fyFpxo1Ik) {
            cin >> jKaUZEC[bqJ3jVTpi] >> ykWd7GLJ[bqJ3jVTpi] >> iOvQL14PFA[bqJ3jVTpi];
            bqJ3jVTpi++;
        }
    }
    {
        bqJ3jVTpi = (494 - 493);
        while (bqJ3jVTpi <= fyFpxo1Ik) {
            {
                j = bqJ3jVTpi + (288 - 287);
                while (j <= fyFpxo1Ik) {
                    Big73p[k].Jo0zUCv = sqrt (pow (jKaUZEC[bqJ3jVTpi] - jKaUZEC[j], (383.0 - 381.0)) + pow (ykWd7GLJ[bqJ3jVTpi] - ykWd7GLJ[j], (964.0 - 962.0)) + pow (iOvQL14PFA[bqJ3jVTpi] - iOvQL14PFA[j], (741.0 - 739.0)));
                    Big73p[k].point1 = bqJ3jVTpi;
                    Big73p[k].TKypct845gV0 = j;
                    j = j + (793 - 792);
                    k++;
                }
            }
            bqJ3jVTpi++;
        }
    }
    {
        k = (748 - 747);
        while (k <= fyFpxo1Ik * (fyFpxo1Ik - (327 - 326)) / (948 - 946)) {
            {
                bqJ3jVTpi = (756 - 755);
                while (bqJ3jVTpi <= fyFpxo1Ik * (fyFpxo1Ik - (315 - 314)) / (307 - 305) + (423 - 422) - k) {
                    if (Big73p[bqJ3jVTpi].Jo0zUCv < Big73p[bqJ3jVTpi + 1].Jo0zUCv) {
                        eADoMw = Big73p[bqJ3jVTpi];
                        Big73p[bqJ3jVTpi] = Big73p[bqJ3jVTpi + 1];
                        Big73p[bqJ3jVTpi + 1] = eADoMw;
                    }
                    bqJ3jVTpi++;
                }
            }
            k++;
        }
    }
    {
        bqJ3jVTpi = 1;
        while (bqJ3jVTpi <= fyFpxo1Ik * (fyFpxo1Ik - 1) / (684 - 682)) {
            cout << "(" << jKaUZEC[Big73p[bqJ3jVTpi].point1] << "," << ykWd7GLJ[Big73p[bqJ3jVTpi].point1] << "," << iOvQL14PFA[Big73p[bqJ3jVTpi].point1] << ")-(" << jKaUZEC[Big73p[bqJ3jVTpi].TKypct845gV0] << "," << ykWd7GLJ[Big73p[bqJ3jVTpi].TKypct845gV0] << "," << iOvQL14PFA[Big73p[bqJ3jVTpi].TKypct845gV0] << ")=" << fixed << setprecision (2) << Big73p[bqJ3jVTpi].Jo0zUCv << endl;
            bqJ3jVTpi++;
        }
    }
    return (829 - 829);
}

