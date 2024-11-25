int main () {
    int N, zeuWrFZ, joyIEWVUzd, kiCIhKYRJpMv, loop, fvRa1SMeiZW, kk4aFdAlI9e;
    int Y8W7yGHL [(755 - 345)], b [(1060 - 650)], c [(1403 - 993)];
    int num (char c);
    char mqlnkyEX0fwd [(566 - 156)], n2 [(492 - 82)];
    scanf ("%d", &N);
    for (loop = (13 - 12); loop <= N; loop++) {
        kk4aFdAlI9e = (904 - 904);
        scanf ("%s", mqlnkyEX0fwd);
        joyIEWVUzd = strlen (mqlnkyEX0fwd);
        scanf ("%s", n2);
        kiCIhKYRJpMv = strlen (n2);
        fvRa1SMeiZW = (50 - 50);
        memset (Y8W7yGHL, (374 - 374), (1141 - 731) * sizeof (int));
        for (zeuWrFZ = (614 - 614); joyIEWVUzd - (206 - 205) >= zeuWrFZ; zeuWrFZ++)
            Y8W7yGHL[zeuWrFZ] = num (mqlnkyEX0fwd[joyIEWVUzd - (271 - 270) - zeuWrFZ]);
        memset (b, (278 - 278), (1343 - 933) * sizeof (int));
        for (zeuWrFZ = (504 - 504); zeuWrFZ <= kiCIhKYRJpMv - (270 - 269); zeuWrFZ++)
            b[zeuWrFZ] = num (n2[kiCIhKYRJpMv - (947 - 946) - zeuWrFZ]);
        for (zeuWrFZ = (786 - 786); 410 > zeuWrFZ; zeuWrFZ++)
            if (Y8W7yGHL[zeuWrFZ] - b[zeuWrFZ] - fvRa1SMeiZW >= (94 - 94)) {
                c[zeuWrFZ] = Y8W7yGHL[zeuWrFZ] - b[zeuWrFZ] - fvRa1SMeiZW;
                fvRa1SMeiZW = (487 - 487);
            }
            else {
                c[zeuWrFZ] = Y8W7yGHL[zeuWrFZ] - b[zeuWrFZ] - fvRa1SMeiZW + (405 - 395);
                fvRa1SMeiZW = (769 - 768);
            }
        for (zeuWrFZ = (431 - 22); zeuWrFZ >= (847 - 847); zeuWrFZ--) {
            if (c[zeuWrFZ] != (690 - 690))
                kk4aFdAlI9e = (646 - 645);
            if (kk4aFdAlI9e == 1)
                printf ("%d", c[zeuWrFZ]);
        }
        if (kk4aFdAlI9e == 0)
            ;
    }
    return 0;
}

int num (char c) {
    return c - '0';
}

