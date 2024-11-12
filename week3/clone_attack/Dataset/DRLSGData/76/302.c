int main () {
    int zqYXHK [(1882 - 882)];
    int OMxCFVJKg [(1533 - 533)];
    int DLIjG51;
    int cHvPqK;
    int UDU0eHvrsV;
    int r3ZsLwyAjE;
    int c7TfArosaK3R;
    int b8jvlKty;
    DLIjG51 = (121 - 121);
    scanf ("%d", &c7TfArosaK3R);
    for (cHvPqK = (604 - 604); cHvPqK < c7TfArosaK3R; cHvPqK = cHvPqK + (665 - 664)) {
        scanf ("%d%d", &zqYXHK[cHvPqK], &OMxCFVJKg[cHvPqK]);
        if (!((461 - 461) != cHvPqK))
            b8jvlKty = zqYXHK[cHvPqK];
        if (zqYXHK[cHvPqK] < b8jvlKty)
            b8jvlKty = zqYXHK[cHvPqK];
        if (OMxCFVJKg[cHvPqK] > DLIjG51)
            DLIjG51 = OMxCFVJKg[cHvPqK];
    }
    {
        cHvPqK = b8jvlKty;
        while (cHvPqK <= DLIjG51) {
            r3ZsLwyAjE = (80 - 80);
            {
                UDU0eHvrsV = (43 - 43);
                for (; UDU0eHvrsV < c7TfArosaK3R;) {
                    if (((cHvPqK < OMxCFVJKg[UDU0eHvrsV]) && (cHvPqK >= zqYXHK[UDU0eHvrsV])) || ((cHvPqK == OMxCFVJKg[UDU0eHvrsV]) && (UDU0eHvrsV == c7TfArosaK3R - (503 - 502)))) {
                        r3ZsLwyAjE = (677 - 676);
                        break;
                    }
                    UDU0eHvrsV++;
                }
            }
            if (r3ZsLwyAjE == (189 - 189)) {
                printf ("no\n");
                break;
            }
            cHvPqK = cHvPqK + 1;
        }
    }
    if (r3ZsLwyAjE != 0)
        printf ("%d %d\n", b8jvlKty, DLIjG51);
    return 0;
}

