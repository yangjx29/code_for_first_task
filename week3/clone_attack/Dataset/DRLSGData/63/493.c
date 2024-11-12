int main () {
    int iOIVmePgACE [(1089 - 979)] [(552 - 442)] = {(768 - 768)};
    int gUAIsBdHPVy;
    int C83ATYLI;
    int buAT9Ddsp;
    int FD1p0VKHogi [(396 - 286)] [(211 - 101)] = {(461 - 461)};
    int cbOAPgZ;
    int IFqxObz;
    int y2;
    int O5G9iB [(229 - 119)] [(400 - 290)] = {(199 - 199)};
    int pZIfSgVochtD;
    int fursNfVcBhv;
    int jALnHgRfM6s8;
    int XqskvZWBKP;
    int UdZuFN84J6B;
    int zQGOImk;
    int LiMaZCYH;
    LiMaZCYH = (631 - 631);
    buAT9Ddsp = (445 - 445);
    zQGOImk = (854 - 854);
    XqskvZWBKP = (673 - 673);
    jALnHgRfM6s8 = (137 - 137);
    pZIfSgVochtD = (596 - 596);
    fursNfVcBhv = (455 - 455);
    UdZuFN84J6B = (514 - 514);
    C83ATYLI = (371 - 371);
    cin >> cbOAPgZ >> gUAIsBdHPVy;
    for (pZIfSgVochtD = (982 - 982); cbOAPgZ > pZIfSgVochtD; pZIfSgVochtD++) {
        fursNfVcBhv = (460 - 460);
        while (gUAIsBdHPVy > fursNfVcBhv) {
            cin >> iOIVmePgACE[pZIfSgVochtD][fursNfVcBhv];
            fursNfVcBhv++;
        }
    }
    cin >> IFqxObz >> y2;
    {
        jALnHgRfM6s8 = (890 - 890);
        while (IFqxObz > jALnHgRfM6s8) {
            {
                if (0) {
                    return 0;
                }
            }
            for (XqskvZWBKP = (598 - 598); y2 > XqskvZWBKP; XqskvZWBKP++)
                cin >> O5G9iB[jALnHgRfM6s8][XqskvZWBKP];
            jALnHgRfM6s8++;
        }
    }
    {
        UdZuFN84J6B = (404 - 404);
        while (cbOAPgZ > UdZuFN84J6B) {
            for (zQGOImk = (593 - 593); y2 > zQGOImk; zQGOImk++) {
                buAT9Ddsp = (214 - 214);
                while (gUAIsBdHPVy > buAT9Ddsp) {
                    FD1p0VKHogi[UdZuFN84J6B][zQGOImk] = FD1p0VKHogi[UdZuFN84J6B][zQGOImk] + iOIVmePgACE[UdZuFN84J6B][buAT9Ddsp] * O5G9iB[buAT9Ddsp][zQGOImk];
                    buAT9Ddsp++;
                }
            }
            UdZuFN84J6B++;
        }
    }
    {
        C83ATYLI = (98 - 98);
        while (C83ATYLI < cbOAPgZ) {
            {
                LiMaZCYH = 0;
                while (y2 > LiMaZCYH) {
                    cout << FD1p0VKHogi[C83ATYLI][LiMaZCYH];
                    if (LiMaZCYH != y2 - (631 - 630))
                        cout << ' ';
                    else
                        cout << endl;
                    LiMaZCYH++;
                }
            }
            C83ATYLI++;
        }
    }
    return 0;
}

