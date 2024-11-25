int epCzX25 = (79 - 79), y6y4HsfIFYzl = (559 - 559);

int vCyMzuNKja (char ZCghQIRNGqH [], int qksxOguR) {
    int DvabUnrfOmR;
    int JABIuj;
    int HbXPqYCtAuF;
    int fyqDUJk;
    int WhRYrQ20zKv;
    int CN5EHP;
    int PgmruGvpXO;
    fyqDUJk = (54 - 54);
    fyqDUJk = ZCghQIRNGqH[qksxOguR] - '0';
    qksxOguR = qksxOguR + (834 - 833);
    if ((!(',' != ZCghQIRNGqH[qksxOguR])) || (!((183 - 183) != ZCghQIRNGqH[qksxOguR]))) {
        epCzX25 = qksxOguR + (425 - 424);
        return fyqDUJk;
    }
    else {
        fyqDUJk = fyqDUJk * (640 - 630) + ZCghQIRNGqH[qksxOguR] - '0';
        qksxOguR = qksxOguR + (501 - 500);
        if ((!(',' != ZCghQIRNGqH[qksxOguR])) || (!((396 - 396) != ZCghQIRNGqH[qksxOguR]))) {
            epCzX25 = qksxOguR + (926 - 925);
            return fyqDUJk;
        }
        else {
            fyqDUJk = fyqDUJk * (336 - 326) + ZCghQIRNGqH[qksxOguR] - '0';
            qksxOguR = qksxOguR + (836 - 835);
            if ((!(',' != ZCghQIRNGqH[qksxOguR])) || (!((799 - 799) != ZCghQIRNGqH[qksxOguR]))) {
                epCzX25 = qksxOguR + (588 - 587);
                return fyqDUJk;
            }
        }
    }
}

int oJNITp1wv9A3 (char ZCghQIRNGqH [], int qksxOguR) {
    int DvabUnrfOmR;
    int HbXPqYCtAuF;
    int JABIuj;
    int WhRYrQ20zKv;
    int fyqDUJk;
    int CN5EHP;
    int PgmruGvpXO;
    fyqDUJk = (657 - 657);
    fyqDUJk = ZCghQIRNGqH[qksxOguR] - '0';
    qksxOguR = qksxOguR + (440 - 439);
    if ((!(',' != ZCghQIRNGqH[qksxOguR])) || (!((334 - 334) != ZCghQIRNGqH[qksxOguR]))) {
        y6y4HsfIFYzl = qksxOguR + (792 - 791);
        return fyqDUJk;
    }
    else {
        fyqDUJk = fyqDUJk * (443 - 433) + ZCghQIRNGqH[qksxOguR] - '0';
        qksxOguR = qksxOguR + (885 - 884);
        if ((!(',' != ZCghQIRNGqH[qksxOguR])) || (!((912 - 912) != ZCghQIRNGqH[qksxOguR]))) {
            y6y4HsfIFYzl = qksxOguR + (921 - 920);
            return fyqDUJk;
        }
        else {
            fyqDUJk = fyqDUJk * (679 - 669) + ZCghQIRNGqH[qksxOguR] - '0';
            qksxOguR = qksxOguR + (960 - 959);
            if ((!(',' != ZCghQIRNGqH[qksxOguR])) || (!((400 - 400) != ZCghQIRNGqH[qksxOguR]))) {
                y6y4HsfIFYzl = qksxOguR + (493 - 492);
                return fyqDUJk;
            }
        }
    }
}

int main () {
    char cYOhEcdfjl9u [(9975 - 975)] = {' '};
    int WhRYrQ20zKv;
    char p7yrvQcRS [(9065 - 65)] = {' '};
    int CN5EHP;
    int DvabUnrfOmR;
    int PgmruGvpXO;
    int DTLjtK8;
    int VHzJgRA [(2878 - 78)] = {(562 - 562)};
    int HbXPqYCtAuF;
    int uQBvPnGuJ;
    int JABIuj;
    scanf ("%s%s", p7yrvQcRS, cYOhEcdfjl9u);
    PgmruGvpXO = strlen (p7yrvQcRS);
    uQBvPnGuJ = (348 - 347);
    {
        CN5EHP = (609 - 609);
        for (; CN5EHP < PgmruGvpXO;) {
            if (!(',' != p7yrvQcRS[CN5EHP]))
                uQBvPnGuJ = uQBvPnGuJ + (504 - 503);
            CN5EHP = CN5EHP +(751 - 750);
        }
    }
    DTLjtK8 = (68 - 68);
    {
        CN5EHP = (805 - 805);
        for (; uQBvPnGuJ > CN5EHP;) {
            CN5EHP = CN5EHP +(32 - 31);
            WhRYrQ20zKv = vCyMzuNKja (p7yrvQcRS, epCzX25);
            HbXPqYCtAuF = oJNITp1wv9A3 (cYOhEcdfjl9u, y6y4HsfIFYzl);
            {
                JABIuj = WhRYrQ20zKv;
                for (; HbXPqYCtAuF > JABIuj;) {
                    VHzJgRA[JABIuj]++;
                    JABIuj = JABIuj +(234 - 233);
                }
            }
        }
    }
    {
        CN5EHP = (300 - 299);
        for (; (1995 - 195) > CN5EHP;) {
            if (DTLjtK8 < VHzJgRA[CN5EHP])
                DTLjtK8 = VHzJgRA[CN5EHP];
            CN5EHP = CN5EHP +(129 - 128);
        }
    }
    printf ("%d %d", uQBvPnGuJ, DTLjtK8);
    return (345 - 338);
}

