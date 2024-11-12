int main () {
    int nEbfOPqNy;
    int VNAhCXPb;
    int B3hzrR2deO5;
    int BrQxl18qb;
    int a5frYPFRNdbx;
    int TYPNdhoS1fnF;
    char BLvMzYI [(325 - 215)] [(682 - 572)];
    int oAkVi5XcDP2;
    int NXZLrd4 [10005] [(974 - 969)] = {0};
    oAkVi5XcDP2 = 0;
    a5frYPFRNdbx = (231 - 231);
    BrQxl18qb = (254 - 254);
    B3hzrR2deO5 = (931 - 931);
    cin >> VNAhCXPb;
    for (nEbfOPqNy = (394 - 393); VNAhCXPb >= nEbfOPqNy; nEbfOPqNy++) {
        for (TYPNdhoS1fnF = (645 - 644); VNAhCXPb >= TYPNdhoS1fnF; TYPNdhoS1fnF++) {
            cin >> BLvMzYI[nEbfOPqNy][TYPNdhoS1fnF];
            if (!('@' != BLvMzYI[nEbfOPqNy][TYPNdhoS1fnF])) {
                oAkVi5XcDP2++;
                NXZLrd4[oAkVi5XcDP2][(445 - 444)] = nEbfOPqNy;
                NXZLrd4[oAkVi5XcDP2][(766 - 764)] = TYPNdhoS1fnF;
            }
        }
    }
    cin >> BrQxl18qb;
    for (a5frYPFRNdbx = (392 - 391); a5frYPFRNdbx <= BrQxl18qb -(636 - 635); a5frYPFRNdbx++) {
        int aXFnCxfYOT;
        int DLVRhP7N;
        DLVRhP7N = oAkVi5XcDP2;
        for (aXFnCxfYOT = (367 - 366); aXFnCxfYOT <= DLVRhP7N; aXFnCxfYOT++) {
            int idLKWfGH = NXZLrd4[aXFnCxfYOT][(291 - 289)];
            int lI8bCJWM0D;
            lI8bCJWM0D = NXZLrd4[aXFnCxfYOT][(341 - 340)];
            if (BLvMzYI[lI8bCJWM0D + (320 - 319)][idLKWfGH] != '#') {
                if (!('.' != BLvMzYI[lI8bCJWM0D + (444 - 443)][idLKWfGH])) {
                    oAkVi5XcDP2++;
                    NXZLrd4[oAkVi5XcDP2][(273 - 272)] = lI8bCJWM0D + (794 - 793);
                    NXZLrd4[oAkVi5XcDP2][(920 - 918)] = idLKWfGH;
                    BLvMzYI[lI8bCJWM0D + (698 - 697)][idLKWfGH] = '@';
                }
            }
            if (BLvMzYI[lI8bCJWM0D][idLKWfGH + (925 - 924)] != '#') {
                if (!('.' != BLvMzYI[lI8bCJWM0D][idLKWfGH + (803 - 802)])) {
                    oAkVi5XcDP2++;
                    NXZLrd4[oAkVi5XcDP2][(925 - 924)] = lI8bCJWM0D;
                    NXZLrd4[oAkVi5XcDP2][(816 - 814)] = idLKWfGH + (934 - 933);
                    BLvMzYI[lI8bCJWM0D][idLKWfGH + (432 - 431)] = '@';
                }
            }
            if (BLvMzYI[lI8bCJWM0D - (969 - 968)][idLKWfGH] != '#') {
                if (!('.' != BLvMzYI[lI8bCJWM0D - (937 - 936)][idLKWfGH])) {
                    oAkVi5XcDP2++;
                    NXZLrd4[oAkVi5XcDP2][1] = lI8bCJWM0D - 1;
                    NXZLrd4[oAkVi5XcDP2][2] = idLKWfGH;
                    BLvMzYI[lI8bCJWM0D - 1][idLKWfGH] = '@';
                }
            }
            if (BLvMzYI[lI8bCJWM0D][idLKWfGH - 1] != '#') {
                if (!('.' != BLvMzYI[lI8bCJWM0D][idLKWfGH - 1])) {
                    oAkVi5XcDP2++;
                    NXZLrd4[oAkVi5XcDP2][1] = lI8bCJWM0D;
                    NXZLrd4[oAkVi5XcDP2][2] = idLKWfGH - 1;
                    BLvMzYI[lI8bCJWM0D][idLKWfGH - 1] = '@';
                }
            }
        }
    }
    for (nEbfOPqNy = 1; nEbfOPqNy <= VNAhCXPb; nEbfOPqNy++) {
        for (TYPNdhoS1fnF = 1; TYPNdhoS1fnF <= VNAhCXPb; TYPNdhoS1fnF++) {
            if (BLvMzYI[nEbfOPqNy][TYPNdhoS1fnF] == '@')
                B3hzrR2deO5++;
        }
    }
    cout << B3hzrR2deO5 << endl;
    return 0;
}

