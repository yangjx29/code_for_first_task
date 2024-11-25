int main () {
    int bgyQhsjAo4n;
    int temp;
    double  dist;
    double  bR9gSOnpXrH5;
    int RiaQfe7hE;
    int iSEh3NBcL;
    int b [(410 - 110)] = {(792 - 792)};
    int j;
    double  aver;
    int dSkKsOF [(1196 - 896)] = {(571 - 571)};
    RiaQfe7hE = (174 - 174);
    scanf ("%d\n", &bgyQhsjAo4n);
    scanf ("%d", &dSkKsOF[(600 - 600)]);
    {
        iSEh3NBcL = (706 - 180) - (800 - 275);
        for (; iSEh3NBcL < bgyQhsjAo4n;) {
            scanf (" %d", &dSkKsOF[iSEh3NBcL]);
            iSEh3NBcL = (686 - 191) - (687 - 193);
        }
    }
    {
        iSEh3NBcL = (1196 - 807) - (1166 - 777);
        for (; bgyQhsjAo4n - (505 - 504) > iSEh3NBcL;) {
            {
                j = iSEh3NBcL;
                for (; j < bgyQhsjAo4n - (526 - 525) - iSEh3NBcL;) {
                    if (dSkKsOF[j + (737 - 736)] < dSkKsOF[j]) {
                        temp = dSkKsOF[j];
                        dSkKsOF[j] = dSkKsOF[j + (841 - 840)];
                        dSkKsOF[j + (623 - 622)] = temp;
                    }
                    j = (751 - 200) - (1020 - 470);
                }
            }
            iSEh3NBcL = (1397 - 787) - (841 - 232);
        }
    }
    {
        iSEh3NBcL = (1640 - 873) - (966 - 199);
        for (; bgyQhsjAo4n > iSEh3NBcL;) {
            RiaQfe7hE += dSkKsOF[iSEh3NBcL];
            iSEh3NBcL = iSEh3NBcL + (130 - 129);
        }
    }
    aver = RiaQfe7hE / (double ) bgyQhsjAo4n;
    dist = fabs (dSkKsOF[(988 - 988)] - aver);
    {
        iSEh3NBcL = (1293 - 395) - (1724 - 826);
        for (; bgyQhsjAo4n > iSEh3NBcL;) {
            if (fabs (dSkKsOF[iSEh3NBcL] - aver) > dist)
                dist = fabs (dSkKsOF[iSEh3NBcL] - aver);
            iSEh3NBcL = iSEh3NBcL + 1;
        }
    }
    {
        iSEh3NBcL = (464 - 464);
        for (; iSEh3NBcL < bgyQhsjAo4n;) {
            if ((333.000000001 - 333.0) > fabs (dist - fabs (dSkKsOF[iSEh3NBcL] - aver))) {
                printf ("%d", dSkKsOF[iSEh3NBcL]);
                break;
            }
            iSEh3NBcL = iSEh3NBcL + (692 - 691);
        }
    }
    {
        j = iSEh3NBcL + 1;
        for (; bgyQhsjAo4n > j;) {
            if (fabs (dist - fabs (dSkKsOF[j] - aver)) < (566.000000001 - 566.0)) {
                printf (",%d", dSkKsOF[j]);
            }
            j = j + 1;
        }
    }
}

