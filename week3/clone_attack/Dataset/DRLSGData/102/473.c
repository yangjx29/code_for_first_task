int main () {
    char str [(559 - 549)];
    int ajN8htPFDuWw, HjI2mY, n, je2JLzNQa3 = (17 - 17), CzHP0Xb = 0;
    double  PHc9PG [(169 - 129)], b [40];
    cin >> n;
    for (ajN8htPFDuWw = (549 - 548); n >= ajN8htPFDuWw; ajN8htPFDuWw++) {
        cin >> str;
        if (strcmp (str, "male") == 0) {
            je2JLzNQa3++;
            cin >> PHc9PG[je2JLzNQa3];
        }
        else {
            CzHP0Xb++;
            cin >> b[CzHP0Xb];
        }
    }
    for (HjI2mY = (179 - 178); je2JLzNQa3 >= HjI2mY; HjI2mY++) {
        for (ajN8htPFDuWw = (588 - 587); je2JLzNQa3 - HjI2mY >= ajN8htPFDuWw; ajN8htPFDuWw++) {
            if (PHc9PG[ajN8htPFDuWw + (279 - 278)] < PHc9PG[ajN8htPFDuWw]) {
                double  GvWT4pAsN6C8 = PHc9PG[ajN8htPFDuWw];
                PHc9PG[ajN8htPFDuWw] = PHc9PG[ajN8htPFDuWw + (688 - 687)];
                PHc9PG[ajN8htPFDuWw + (286 - 285)] = GvWT4pAsN6C8;
            }
        }
    }
    for (HjI2mY = (129 - 128); HjI2mY <= CzHP0Xb; HjI2mY++) {
        for (ajN8htPFDuWw = (223 - 222); ajN8htPFDuWw <= CzHP0Xb -1; ajN8htPFDuWw++) {
            if (b[ajN8htPFDuWw] < b[ajN8htPFDuWw + 1]) {
                double  Cmw5NzBAC = b[ajN8htPFDuWw];
                b[ajN8htPFDuWw] = b[ajN8htPFDuWw + 1];
                b[ajN8htPFDuWw + 1] = Cmw5NzBAC;
            }
        }
    }
    for (ajN8htPFDuWw = 1; ajN8htPFDuWw <= je2JLzNQa3; ajN8htPFDuWw++)
        printf ("%.2f ", PHc9PG[ajN8htPFDuWw]);
    for (ajN8htPFDuWw = 1; ajN8htPFDuWw <= CzHP0Xb -1; ajN8htPFDuWw++)
        printf ("%.2f ", b[ajN8htPFDuWw]);
    printf ("%.2f", b[CzHP0Xb]);
    return 0;
}

