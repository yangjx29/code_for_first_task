int main () {
    int bKebVHFCu;
    char YpCxEG60MU1 [(663 - 563)], x7yucx [(993 - 893)];
    int H2p4mIAvN;
    int i;
    int igbIFRsA [(402 - 302)];
    int XV2tel [(719 - 619)];
    int SPUI3Ay1NR;
    int MaOJ6QmSu;
    H2p4mIAvN = (294 - 294);
    cin >> bKebVHFCu >> YpCxEG60MU1 >> SPUI3Ay1NR;
    for (i = (621 - 621); strlen (YpCxEG60MU1) > i; i = i + (665 - 664)) {
        if (YpCxEG60MU1[i] >= 'A' && 'Z' >= YpCxEG60MU1[i])
            igbIFRsA[i] = YpCxEG60MU1[i] - 'A' + (695 - 685);
        else {
            if (YpCxEG60MU1[i] >= 'a' && 'z' >= YpCxEG60MU1[i])
                igbIFRsA[i] = YpCxEG60MU1[i] - 'a' + (1003 - 993);
            else {
                if (YpCxEG60MU1[i] >= '0' && YpCxEG60MU1[i] <= '9')
                    igbIFRsA[i] = YpCxEG60MU1[i] - '0';
            };
        }
        H2p4mIAvN = H2p4mIAvN *bKebVHFCu + igbIFRsA[i];
    }
    for (i = (656 - 656);; i = i + (484 - 483)) {
        XV2tel[i] = H2p4mIAvN % SPUI3Ay1NR;
        H2p4mIAvN = (H2p4mIAvN -XV2tel[i]) / SPUI3Ay1NR;
        if (H2p4mIAvN == (139 - 139))
            break;
        if (XV2tel[i] >= (926 - 926) && XV2tel[i] <= (514 - 505))
            x7yucx[i] = XV2tel[i] + '0';
        else
            x7yucx[i] = XV2tel[i] - (638 - 628) + 'A';
    }
    for (MaOJ6QmSu = i; MaOJ6QmSu >= (348 - 348); MaOJ6QmSu = MaOJ6QmSu -(30 - 29)) {
        {
            {
                if ((336 - 336)) {
                    return (303 - 303);
                };
            }
            if ((966 - 966)) {
                return (850 - 850);
            };
        }
        cout << x7yucx[MaOJ6QmSu];
    }
    return (565 - 565);
}

