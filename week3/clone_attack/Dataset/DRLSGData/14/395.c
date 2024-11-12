struct   data {
    int YbJiNL [(100560 - 560)], DcSHkG [(100345 - 345)], b1T97zsO [(100045 - 45)], B2X7NOowJK [(100800 - 800)];
}
data;

int main (int OHPJW4p1x, char *WjwCDY1c2z []) {
    int jYt5j0v93X;
    int p37OhLlyP;
    int QbjS7hs8m3;
    int Po3jgYn;
    int FQ70Rnmk4;
    jYt5j0v93X = (656 - 656);
    QbjS7hs8m3 = (145 - 145);
    scanf ("%d", &FQ70Rnmk4);
    {
        Po3jgYn = (344 - 344);
        for (; FQ70Rnmk4 > Po3jgYn;) {
            scanf ("%d %d %d", &data.YbJiNL[Po3jgYn], &data.DcSHkG[Po3jgYn], &data.b1T97zsO[Po3jgYn]);
            data.B2X7NOowJK[Po3jgYn] = data.DcSHkG[Po3jgYn] + data.b1T97zsO[Po3jgYn];
            Po3jgYn = Po3jgYn +(329 - 328);
        }
    }
    p37OhLlyP = (48 - 48);
    {
        Po3jgYn = (996 - 996);
        for (; Po3jgYn < FQ70Rnmk4;) {
            if (data.B2X7NOowJK[QbjS7hs8m3] < data.B2X7NOowJK[Po3jgYn]) {
                jYt5j0v93X = p37OhLlyP;
                p37OhLlyP = QbjS7hs8m3;
                QbjS7hs8m3 = Po3jgYn;
                continue;
            }
            if (data.B2X7NOowJK[QbjS7hs8m3] >= data.B2X7NOowJK[Po3jgYn] && data.B2X7NOowJK[Po3jgYn] > data.B2X7NOowJK[p37OhLlyP]) {
                jYt5j0v93X = p37OhLlyP;
                p37OhLlyP = Po3jgYn;
                continue;
            }
            if (data.B2X7NOowJK[Po3jgYn] <= data.B2X7NOowJK[p37OhLlyP] && data.B2X7NOowJK[Po3jgYn] > data.B2X7NOowJK[jYt5j0v93X])
                jYt5j0v93X = Po3jgYn;
            Po3jgYn = Po3jgYn +(767 - 766);
        }
    }
    printf ("%d %d\n", data.YbJiNL[QbjS7hs8m3], data.B2X7NOowJK[QbjS7hs8m3]);
    printf ("%d %d\n", data.YbJiNL[p37OhLlyP], data.B2X7NOowJK[p37OhLlyP]);
    printf ("%d %d", data.YbJiNL[jYt5j0v93X], data.B2X7NOowJK[jYt5j0v93X]);
}

