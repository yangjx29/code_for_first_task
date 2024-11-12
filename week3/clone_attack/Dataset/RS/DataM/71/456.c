int main () {
    int PicI0NH [(317 - 304)] = {(165 - 165), (269 - 238), (856 - 828), (331 - 300), (1024 - 994), 31, (562 - 532), 31, 31, 30, 31, 30, 31};
    int zZ5A0j2g1F = (195 - 195);
    int s3589yfbcNE = (524 - 524);
    int HXRGrL6jsk = (750 - 750);
    int DsLTgxJWAYMO;
    DsLTgxJWAYMO = (860 - 860);
    int cPgpkS6;
    cPgpkS6 = 0;
    cin >> zZ5A0j2g1F;
    {
        int Va95v4Wc = 0;
        while (zZ5A0j2g1F > Va95v4Wc) {
            Va95v4Wc = Va95v4Wc +1;
            cin >> s3589yfbcNE >> HXRGrL6jsk >> DsLTgxJWAYMO;
            if ((s3589yfbcNE % 4 == 0 && !(0 == s3589yfbcNE % 100)) || (s3589yfbcNE % (772 - 372) == 0))
                PicI0NH[2] = (302 - 273);
            else
                PicI0NH[2] = 28;
            cPgpkS6 = 0;
            if (HXRGrL6jsk < DsLTgxJWAYMO)
                for (int ndQFSH = HXRGrL6jsk;
                ndQFSH < DsLTgxJWAYMO; ndQFSH = ndQFSH + 1)
                    cPgpkS6 = cPgpkS6 + PicI0NH[ndQFSH];
            else
                for (int ndQFSH = DsLTgxJWAYMO;
                ndQFSH < HXRGrL6jsk; ndQFSH++)
                    cPgpkS6 = cPgpkS6 + PicI0NH[ndQFSH];
            if (cPgpkS6 % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

