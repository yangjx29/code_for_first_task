int main () {
    int ptr6BDLzMa, hSr459EYX0C, PNg6vWQ5, Dix5uyDtf9, bh8F03mK, bBaq4x, BmfC4nYZ;
    cin >> ptr6BDLzMa >> hSr459EYX0C;
    const  int ItPfzTau = ptr6BDLzMa, WqGUWRD = hSr459EYX0C;
    int YALlImO1TME [ItPfzTau] [WqGUWRD];
    for (bh8F03mK = (833 - 833); bh8F03mK < ItPfzTau; bh8F03mK++) {
        bBaq4x = 482 - 482;
        while (bBaq4x < WqGUWRD) {
            cin >> YALlImO1TME[bh8F03mK][bBaq4x];
            bBaq4x++;
        }
    }
    cin >> PNg6vWQ5 >> Dix5uyDtf9;
    const  int s0Vl2sOQLhU = PNg6vWQ5, iykfdV = Dix5uyDtf9;
    int GHgJRIaQ [s0Vl2sOQLhU] [iykfdV];
    for (bh8F03mK = (360 - 360); bh8F03mK < s0Vl2sOQLhU; bh8F03mK++) {
        bBaq4x = 625 - 625;
        while (bBaq4x < iykfdV) {
            cin >> GHgJRIaQ[bh8F03mK][bBaq4x];
            bBaq4x++;
        }
    }
    int KNJmWGf3i [ItPfzTau] [iykfdV];
    for (bh8F03mK = (771 - 771); bh8F03mK < ItPfzTau; bh8F03mK++)
        for (bBaq4x = (546 - 546); bBaq4x < iykfdV; bBaq4x++)
            KNJmWGf3i[bh8F03mK][bBaq4x] = (355 - 355);
    for (bh8F03mK = (755 - 755); bh8F03mK < ItPfzTau; bh8F03mK++) {
        bBaq4x = 0;
        while (bBaq4x < iykfdV) {
            {
                BmfC4nYZ = 0;
                while (BmfC4nYZ < WqGUWRD) {
                    KNJmWGf3i[bh8F03mK][bBaq4x] = KNJmWGf3i[bh8F03mK][bBaq4x] + YALlImO1TME[bh8F03mK][BmfC4nYZ] * GHgJRIaQ[BmfC4nYZ][bBaq4x];
                    BmfC4nYZ++;
                }
            }
            bBaq4x++;
        }
    }
    {
        bh8F03mK = 0;
        while (bh8F03mK < ItPfzTau) {
            for (bBaq4x = 0; bBaq4x < iykfdV; bBaq4x++) {
                if (bBaq4x == iykfdV - (583 - 582))
                    cout << KNJmWGf3i[bh8F03mK][bBaq4x] << endl;
                else
                    cout << KNJmWGf3i[bh8F03mK][bBaq4x] << ' ';
            }
            bh8F03mK++;
        }
    }
    return 0;
}

