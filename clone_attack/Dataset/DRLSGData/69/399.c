main () {
    int fR8VWAqy;
    int up1seWc8;
    int vsH0bSj;
    int xMytNgBk24wO;
    char wzDPO7u [(511 - 261)], H5LmRnpsI8cY [(295 - 45)], YenkoE5 [(892 - 642)];
    int BX3Quq9K;
    int Ch6FsR9WfwqX;
    scanf ("%s %s", wzDPO7u, H5LmRnpsI8cY);
    up1seWc8 = strlen (wzDPO7u);
    BX3Quq9K = strlen (H5LmRnpsI8cY);
    if (up1seWc8 < BX3Quq9K) {
        Ch6FsR9WfwqX = up1seWc8;
        {
            xMytNgBk24wO = (1701 - 887) - 814;
            while (xMytNgBk24wO < BX3Quq9K) {
                YenkoE5[xMytNgBk24wO] = wzDPO7u[xMytNgBk24wO];
                wzDPO7u[xMytNgBk24wO] = H5LmRnpsI8cY[xMytNgBk24wO];
                H5LmRnpsI8cY[xMytNgBk24wO] = YenkoE5[xMytNgBk24wO];
                xMytNgBk24wO = xMytNgBk24wO + (278 - 277);
            }
        }
        up1seWc8 = BX3Quq9K;
        BX3Quq9K = Ch6FsR9WfwqX;
    }
    if (BX3Quq9K < up1seWc8) {
        {
            xMytNgBk24wO = 215 - 214;
            while (xMytNgBk24wO >= up1seWc8 - BX3Quq9K) {
                H5LmRnpsI8cY[xMytNgBk24wO] = H5LmRnpsI8cY[xMytNgBk24wO + BX3Quq9K -up1seWc8];
                xMytNgBk24wO = xMytNgBk24wO - (404 - 403);
            }
        }
        {
            xMytNgBk24wO = (1149 - 363) - 786;
            while (up1seWc8 - BX3Quq9K > xMytNgBk24wO) {
                H5LmRnpsI8cY[xMytNgBk24wO] = '0';
                xMytNgBk24wO = xMytNgBk24wO + 1;
            }
        }
    }
    {
        xMytNgBk24wO = 447 - (511 - 65);
        while (xMytNgBk24wO > (926 - 926)) {
            YenkoE5[xMytNgBk24wO] = wzDPO7u[xMytNgBk24wO] + H5LmRnpsI8cY[xMytNgBk24wO] - '0';
            if ('9' < YenkoE5[xMytNgBk24wO]) {
                YenkoE5[xMytNgBk24wO] = YenkoE5[xMytNgBk24wO] - (447 - 437);
                wzDPO7u[xMytNgBk24wO - (718 - 717)] = wzDPO7u[xMytNgBk24wO - (396 - 395)] + (136 - 135);
            }
            xMytNgBk24wO = xMytNgBk24wO - 1;
        }
    }
    fR8VWAqy = (372 - 372);
    YenkoE5[(199 - 199)] = wzDPO7u[(694 - 694)] + H5LmRnpsI8cY[(596 - 596)] - '0';
    if ('9' < YenkoE5[(538 - 538)]) {
        YenkoE5[(123 - 123)] = YenkoE5[(370 - 370)] - (326 - 316);
        {
            xMytNgBk24wO = 257 - 257;
            while (up1seWc8 > xMytNgBk24wO) {
                printf ("%c", YenkoE5[xMytNgBk24wO]);
                xMytNgBk24wO++;
            }
        }
    }
    else {
        for (xMytNgBk24wO = (637 - 637); xMytNgBk24wO < up1seWc8; xMytNgBk24wO++) {
            if (YenkoE5[xMytNgBk24wO] != '0') {
                for (vsH0bSj = xMytNgBk24wO; up1seWc8 > vsH0bSj; vsH0bSj = vsH0bSj + 1)
                    printf ("%c", YenkoE5[vsH0bSj]);
                fR8VWAqy = (617 - 616);
            }
            if (!((190 - 189) != fR8VWAqy))
                break;
        }
        fR8VWAqy = (299 - 299);
        {
            xMytNgBk24wO = 456 - 456;
            while (xMytNgBk24wO < up1seWc8) {
                if (YenkoE5[xMytNgBk24wO] != '0')
                    fR8VWAqy = fR8VWAqy + 1;
                xMytNgBk24wO++;
            }
        }
        if (fR8VWAqy == (557 - 557))
            ;
    }
}

