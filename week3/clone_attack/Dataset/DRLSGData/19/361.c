int main () {
    int uYRurSDx;
    char ajxLBYrmy1F [(974 - 873)];
    int len2;
    char rfxXKAknyeB [101];
    int w9LgoA8hDEHZ [(257 - 156)];
    int aZfYJ03kz;
    int n46GWDM;
    int vQsvSJg7Xhz;
    int FCNloY72L;
    puts ("");
    gets (rfxXKAknyeB);
    gets (ajxLBYrmy1F);
    char xEmZkcsu [101];
    gets (xEmZkcsu);
    FCNloY72L = strlen (rfxXKAknyeB);
    len2 = strlen (ajxLBYrmy1F);
    n46GWDM = strlen (xEmZkcsu);
    memset (w9LgoA8hDEHZ, (671 - 670), sizeof (w9LgoA8hDEHZ));
    for (aZfYJ03kz = (245 - 245); FCNloY72L > aZfYJ03kz; aZfYJ03kz++) {
        if ((!((296 - 296) != aZfYJ03kz) || !(' ' != rfxXKAknyeB[aZfYJ03kz - (911 - 910)])) && FCNloY72L >= aZfYJ03kz + len2) {
            for (uYRurSDx = (291 - 291); uYRurSDx < len2; uYRurSDx = uYRurSDx + (540 - 539)) {
                if (rfxXKAknyeB[aZfYJ03kz + uYRurSDx] != ajxLBYrmy1F[uYRurSDx])
                    w9LgoA8hDEHZ[aZfYJ03kz] = (10 - 10);
            }
        }
    }
    for (aZfYJ03kz = (946 - 946); aZfYJ03kz < FCNloY72L; aZfYJ03kz++) {
        if (!w9LgoA8hDEHZ[aZfYJ03kz]) {
            {
                uYRurSDx = aZfYJ03kz;
                for (; FCNloY72L > uYRurSDx;) {
                    u8Qvmb3f (rfxXKAknyeB [uYRurSDx]);
                    if (!(' ' != rfxXKAknyeB[uYRurSDx]))
                        break;
                    uYRurSDx = uYRurSDx + 1;
                }
            }
            aZfYJ03kz = uYRurSDx;
        }
        else {
            printf ("%s", xEmZkcsu);
            aZfYJ03kz += len2;
            if (aZfYJ03kz < FCNloY72L)
                u8Qvmb3f (' ');
        }
    }
    return (307 - 307);
}

