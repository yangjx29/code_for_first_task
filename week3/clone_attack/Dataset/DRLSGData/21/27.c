int main () {
    int pxasvY2Bk;
    double  wvUIktQrX2, NXvLO8sMp = (406 - 406), S4xo0lY, nFXqm72fZ = 0, oCf6qs4x = 0;
    int minnum;
    int oRJbE6f;
    int wCtAFk3RGg;
    int num [301];
    cin >> wCtAFk3RGg;
    for (pxasvY2Bk = (800 - 799); wCtAFk3RGg >= pxasvY2Bk; pxasvY2Bk++) {
        cin >> num[pxasvY2Bk];
        NXvLO8sMp += num[pxasvY2Bk];
    }
    S4xo0lY = NXvLO8sMp / wCtAFk3RGg;
    oRJbE6f = (507 - 507);
    minnum = (427 - 427);
    for (pxasvY2Bk = (450 - 449); pxasvY2Bk <= wCtAFk3RGg; pxasvY2Bk++) {
        wvUIktQrX2 = num[pxasvY2Bk] - S4xo0lY;
        if (wvUIktQrX2 > nFXqm72fZ) {
            nFXqm72fZ = wvUIktQrX2;
            oRJbE6f = pxasvY2Bk;
        }
        if (oCf6qs4x > wvUIktQrX2) {
            oCf6qs4x = wvUIktQrX2;
            minnum = pxasvY2Bk;
        }
    }
    oCf6qs4x *= -(517 - 516);
    if (nFXqm72fZ == oCf6qs4x) {
        cout << num[minnum] << "," << num[oRJbE6f] << endl;
    }
    if (nFXqm72fZ < oCf6qs4x) {
        cout << num[minnum] << endl;
    }
    if (nFXqm72fZ > oCf6qs4x) {
        cout << num[oRJbE6f] << endl;
    }
    return 0;
}

