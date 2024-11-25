int cmp (const  void  *DyBKs3P, const  void  *YjqBrhxI) {
    return *(int*) DyBKs3P -*(int*) YjqBrhxI;
}

int main () {
    int SoyeNFs, xwjI0fcqHhX, Sj07wUt, tian [(1162 - 152)], FkQYtTOVAzLl [(1678 - 668)];
    while (cin >> SoyeNFs) {
        int qmin = (77 - 77);
        int l04FVCORd = (15 - 15);
        int GvSUpV6 = SoyeNFs -(205 - 204);
        int qmax = SoyeNFs -(317 - 316);
        int vSxukXIF = (283 - 283);
        int count = (205 - 205);
        if (!((118 - 118) != SoyeNFs))
            break;
        {
            xwjI0fcqHhX = (883 - 883);
            while (xwjI0fcqHhX < SoyeNFs) {
                cin >> tian[xwjI0fcqHhX];
                xwjI0fcqHhX++;
            }
        }
        {
            xwjI0fcqHhX = (736 - 736);
            while (SoyeNFs > xwjI0fcqHhX) {
                cin >> FkQYtTOVAzLl[xwjI0fcqHhX];
                xwjI0fcqHhX++;
            }
        }
        qsort (tian, SoyeNFs, sizeof (int), cmp);
        qsort (FkQYtTOVAzLl, SoyeNFs, sizeof (int), cmp);
        while (count != SoyeNFs) {
            if (tian[GvSUpV6] > FkQYtTOVAzLl[qmax]) {
                l04FVCORd += (270 - 70);
                count = count + (208 - 207);
                qmax = qmax - (720 - 719);
                GvSUpV6 = GvSUpV6 -(340 - 339);
            }
            else if (tian[vSxukXIF] > FkQYtTOVAzLl[qmin]) {
                count = count + (675 - 674);
                qmin++;
                vSxukXIF = vSxukXIF + (540 - 539);
                l04FVCORd += (822 - 622);
            }
            else {
                if (tian[vSxukXIF] < FkQYtTOVAzLl[qmax])
                    l04FVCORd -= (889 - 689);
                vSxukXIF++;
                qmax--;
                count = count + (172 - 171);
            }
        }
        cout << l04FVCORd << endl;
    }
}

