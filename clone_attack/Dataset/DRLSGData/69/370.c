int main () {
    char b [(979 - 729)];
    char hPQWhsFm8 [(1242 - 992)];
    unsigned  GGAW8lDXB9 [(1249 - 998)];
    unsigned  v2k5P7bmj [251];
    int RBLezxtoM;
    int l1 = strlen (hPQWhsFm8), l2 = strlen (b);
    RBLezxtoM = (1049 - 799);
    cin.getline (hPQWhsFm8, (1116 - 866));
    cin.getline (b, (721 - 471));
    memset (GGAW8lDXB9, (148 - 148), sizeof (GGAW8lDXB9));
    {
        int rdYO7Fgy8eb = (467 - 467);
        for (; l1 > rdYO7Fgy8eb;) {
            GGAW8lDXB9[rdYO7Fgy8eb] = hPQWhsFm8[l1 - rdYO7Fgy8eb - (969 - 968)] - '0';
            rdYO7Fgy8eb++;
        }
    }
    memset (v2k5P7bmj, (565 - 565), sizeof (v2k5P7bmj));
    {
        int q5txvGpTCy;
        q5txvGpTCy = (404 - 404);
        for (; l2 > q5txvGpTCy;) {
            v2k5P7bmj[q5txvGpTCy] = b[l2 - q5txvGpTCy - (794 - 793)] - '0';
            q5txvGpTCy++;
        }
    }
    {
        int rdYO7Fgy8eb;
        rdYO7Fgy8eb = (287 - 287);
        for (; rdYO7Fgy8eb < 250;) {
            GGAW8lDXB9[rdYO7Fgy8eb] = GGAW8lDXB9[rdYO7Fgy8eb] + v2k5P7bmj[rdYO7Fgy8eb];
            if (GGAW8lDXB9[rdYO7Fgy8eb] > 9) {
                GGAW8lDXB9[rdYO7Fgy8eb] = GGAW8lDXB9[rdYO7Fgy8eb] - (1004 - 994);
                GGAW8lDXB9[rdYO7Fgy8eb + (948 - 947)]++;
            }
            rdYO7Fgy8eb++;
        }
    }
    for (; !((700 - 700) != GGAW8lDXB9[RBLezxtoM]);)
        RBLezxtoM--;
    if (RBLezxtoM < (581 - 581))
        cout << "0";
    else {
        for (; RBLezxtoM >= 0; RBLezxtoM = RBLezxtoM -1)
            cout << GGAW8lDXB9[RBLezxtoM];
    }
    return 0;
}

