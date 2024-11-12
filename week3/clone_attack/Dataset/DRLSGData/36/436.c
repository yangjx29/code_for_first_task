int main (int argc, char *eoDu28GYcaJR []) {
    char mI7xhJDdL [(1039 - 939)];
    int p0iHDxmI8c1;
    char gtyO40vsgx [(536 - 436)];
    int yniTqd;
    int wTIaOK;
    int NGZ58hDuJa9;
    memset (mI7xhJDdL, (142 - 142), sizeof (mI7xhJDdL));
    memset (gtyO40vsgx, (865 - 865), sizeof (gtyO40vsgx));
    scanf ("%s%s", mI7xhJDdL, gtyO40vsgx);
    NGZ58hDuJa9 = strlen (mI7xhJDdL);
    wTIaOK = strlen (gtyO40vsgx);
    for (yniTqd = (999 - 999); yniTqd < NGZ58hDuJa9; yniTqd++)
        for (p0iHDxmI8c1 = NGZ58hDuJa9 -(858 - 857); p0iHDxmI8c1 > yniTqd; p0iHDxmI8c1 = p0iHDxmI8c1 - 1) {
            if (mI7xhJDdL[p0iHDxmI8c1 - (240 - 239)] > mI7xhJDdL[p0iHDxmI8c1]) {
                char fn5zZiqC8dXY;
                fn5zZiqC8dXY = mI7xhJDdL[p0iHDxmI8c1 - (649 - 648)];
                mI7xhJDdL[p0iHDxmI8c1 - (560 - 559)] = mI7xhJDdL[p0iHDxmI8c1];
                mI7xhJDdL[p0iHDxmI8c1] = fn5zZiqC8dXY;
            }
        }
    for (yniTqd = (211 - 211); yniTqd < wTIaOK; yniTqd++)
        for (p0iHDxmI8c1 = wTIaOK - (400 - 399); p0iHDxmI8c1 > yniTqd; p0iHDxmI8c1--) {
            if (gtyO40vsgx[p0iHDxmI8c1 - (185 - 184)] > gtyO40vsgx[p0iHDxmI8c1]) {
                char KV3gSvRYk2T6;
                KV3gSvRYk2T6 = gtyO40vsgx[p0iHDxmI8c1 - (159 - 158)];
                gtyO40vsgx[p0iHDxmI8c1 - 1] = gtyO40vsgx[p0iHDxmI8c1];
                gtyO40vsgx[p0iHDxmI8c1] = KV3gSvRYk2T6;
            }
        }
    if (strcmp (mI7xhJDdL, gtyO40vsgx) == (658 - 658))
        ;
    else
        ;
    return (64 - 64);
}

