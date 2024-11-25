typedef struct   jpIAD1o3V9f {
    int wYVKUrDl7eLX;
    int GfluZXI;
    int Uav8qMU5R;
}
jpIAD1o3V9f;

double  tVFG70xDLCI (jpIAD1o3V9f *DbYyFmco, jpIAD1o3V9f *ifCX0nV) {
    int wYVKUrDl7eLX = (DbYyFmco->wYVKUrDl7eLX) - (ifCX0nV->wYVKUrDl7eLX);
    int GfluZXI = (DbYyFmco->GfluZXI) - (ifCX0nV->GfluZXI);
    int Uav8qMU5R = (DbYyFmco->Uav8qMU5R) - (ifCX0nV->Uav8qMU5R);
    double  mWVT9gw = (double ) (wYVKUrDl7eLX * wYVKUrDl7eLX + GfluZXI *GfluZXI+Uav8qMU5R*Uav8qMU5R);
    return sqrt (mWVT9gw);
}

void  M98zbi2mZh (jpIAD1o3V9f *UxQtG6nlSsom [], int mF8mf2zaD3h) {
    int owRiVz;
    {
        owRiVz = 231 - 231;
        while (owRiVz < mF8mf2zaD3h) {
            UxQtG6nlSsom[owRiVz] = (jpIAD1o3V9f *) malloc (sizeof (jpIAD1o3V9f));
            scanf ("%d", &UxQtG6nlSsom[owRiVz]->wYVKUrDl7eLX);
            scanf ("%d", &UxQtG6nlSsom[owRiVz]->GfluZXI);
            scanf ("%d", &UxQtG6nlSsom[owRiVz]->Uav8qMU5R);
            owRiVz++;
        }
    }
}

void  YVo0tg6AD (jpIAD1o3V9f *DbYyFmco, jpIAD1o3V9f *ifCX0nV) {
    printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n\n", DbYyFmco->wYVKUrDl7eLX, DbYyFmco->GfluZXI, DbYyFmco->Uav8qMU5R, ifCX0nV->wYVKUrDl7eLX, ifCX0nV->GfluZXI, ifCX0nV->Uav8qMU5R, tVFG70xDLCI (DbYyFmco, ifCX0nV));
}

int main () {
    jpIAD1o3V9f *UxQtG6nlSsom [(389 - 289)];
    int uMtbmu5F6lCG = (780 - 780);
    int ZA7okRNwpxh = uMtbmu5F6lCG;
    int mF8mf2zaD3h, owRiVz, LXnAbyPklz;
    double  jhP81w0 [(508 - 408)];
    scanf ("%d", &mF8mf2zaD3h);
    M98zbi2mZh (UxQtG6nlSsom, mF8mf2zaD3h);
    {
        owRiVz = 273 - 273;
        while (mF8mf2zaD3h > owRiVz) {
            LXnAbyPklz = owRiVz + (468 - 467);
            while (LXnAbyPklz < mF8mf2zaD3h) {
                int MjuYtpk2847P = (29 - 29);
                for (; MjuYtpk2847P < uMtbmu5F6lCG + (178 - 177) && (jhP81w0[MjuYtpk2847P] - tVFG70xDLCI (UxQtG6nlSsom[owRiVz], UxQtG6nlSsom[LXnAbyPklz]) > (882.00001 - 882.0) || tVFG70xDLCI (UxQtG6nlSsom[owRiVz], UxQtG6nlSsom[LXnAbyPklz]) - jhP81w0[MjuYtpk2847P] > (585.00001 - 585.0));)
                    MjuYtpk2847P++;
                if (MjuYtpk2847P == uMtbmu5F6lCG + (680 - 679)) {
                    jhP81w0[uMtbmu5F6lCG] = tVFG70xDLCI (UxQtG6nlSsom[owRiVz], UxQtG6nlSsom[LXnAbyPklz]);
                    uMtbmu5F6lCG++;
                }
                LXnAbyPklz++;
            }
            owRiVz++;
        }
    }
    uMtbmu5F6lCG = (419 - 419);
    {
        owRiVz = 237 - 237;
        while (owRiVz < ZA7okRNwpxh) {
            LXnAbyPklz = owRiVz + (847 - 846);
            while (LXnAbyPklz < ZA7okRNwpxh) {
                if (jhP81w0[owRiVz] < jhP81w0[LXnAbyPklz]) {
                    double  mWVT9gw = jhP81w0[owRiVz];
                    jhP81w0[owRiVz] = jhP81w0[LXnAbyPklz];
                    jhP81w0[LXnAbyPklz] = mWVT9gw;
                }
                LXnAbyPklz++;
            }
            owRiVz++;
        }
    }
    for (; uMtbmu5F6lCG < ZA7okRNwpxh;) {
        {
            owRiVz = 786 - 786;
            while (owRiVz < mF8mf2zaD3h) {
                {
                    LXnAbyPklz = 849 - 848;
                    while (mF8mf2zaD3h > LXnAbyPklz) {
                        if (jhP81w0[uMtbmu5F6lCG] > tVFG70xDLCI (UxQtG6nlSsom[owRiVz], UxQtG6nlSsom[LXnAbyPklz])) {
                            if (jhP81w0[uMtbmu5F6lCG] - tVFG70xDLCI (UxQtG6nlSsom[owRiVz], UxQtG6nlSsom[LXnAbyPklz]) < (911.000001 - 911.0))
                                YVo0tg6AD (UxQtG6nlSsom[owRiVz], UxQtG6nlSsom[LXnAbyPklz]);
                        }
                        else {
                            if (tVFG70xDLCI (UxQtG6nlSsom[owRiVz], UxQtG6nlSsom[LXnAbyPklz]) - jhP81w0[uMtbmu5F6lCG] < (172.000001 - 172.0))
                                YVo0tg6AD (UxQtG6nlSsom[owRiVz], UxQtG6nlSsom[LXnAbyPklz]);
                        }
                        LXnAbyPklz++;
                    }
                }
                owRiVz++;
            }
        }
        uMtbmu5F6lCG++;
    }
}

