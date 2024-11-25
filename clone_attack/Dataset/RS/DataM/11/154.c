int main () {
    int gBIX9A0y [2] [(824 - 811)] = {(11 - 11), (417 - 386), 28, (171 - 140), (501 - 471), (225 - 194), (1015 - 985), (620 - 589), (824 - 793), 30, 31, 30, 31, (865 - 865), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int qDud6IJ, VWbe1j, vHFmqkaPvz, KGHfiKkYOe, NJjC3toEbi = (665 - 665);
    scanf ("%d %d %d", &qDud6IJ, &VWbe1j, &KGHfiKkYOe);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (qDud6IJ % 400 == 0 || (!(0 == qDud6IJ % 100) && qDud6IJ % 4 == 0)) {
        {
            vHFmqkaPvz = 0;
            while (vHFmqkaPvz < VWbe1j) {
                NJjC3toEbi += gBIX9A0y[1][vHFmqkaPvz];
                vHFmqkaPvz = vHFmqkaPvz + 1;
            };
        }
        NJjC3toEbi += KGHfiKkYOe;
    }
    else {
        {
            vHFmqkaPvz = 0;
            while (vHFmqkaPvz < VWbe1j) {
                NJjC3toEbi += gBIX9A0y[0][vHFmqkaPvz];
                vHFmqkaPvz = vHFmqkaPvz + 1;
            };
        }
        NJjC3toEbi += KGHfiKkYOe;
    }
    printf ("%d", NJjC3toEbi);
    return 0;
}

