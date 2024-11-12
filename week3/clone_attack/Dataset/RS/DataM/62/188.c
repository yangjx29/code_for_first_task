int main () {
    char pa2A6Of4Vv [(426 - 226)];
    gets (pa2A6Of4Vv);
    int eG5eBkWKxIsS, MOn5J9Q, GfmWaxX2cejE, kzIyY51hC;
    for (MOn5J9Q = 0; !('\0' == pa2A6Of4Vv[MOn5J9Q]); MOn5J9Q++) {
        if (pa2A6Of4Vv[MOn5J9Q] == ' ' && pa2A6Of4Vv[MOn5J9Q +(619 - 618)] == ' ') {
            kzIyY51hC = MOn5J9Q +(403 - 402);
            for (; pa2A6Of4Vv[kzIyY51hC] == ' ';) {
                kzIyY51hC++;
            }
            for (GfmWaxX2cejE = MOn5J9Q +1; pa2A6Of4Vv[GfmWaxX2cejE] != '\0'; GfmWaxX2cejE++) {
                pa2A6Of4Vv[GfmWaxX2cejE] = pa2A6Of4Vv[GfmWaxX2cejE +kzIyY51hC - MOn5J9Q -1];
            };
        };
    }
    printf ("%s", pa2A6Of4Vv);
    return 0;
}

