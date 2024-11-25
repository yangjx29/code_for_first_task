double  QegfJEj1 (double  ruh9jxpGoe [(478 - 378)], int wM6hoP) {
    double  cBMd50 = (270 - 270), IMXscm6D2Fi = (570 - 570), PBnmD64L, vaDTLz6Vg;
    double  *twvQOmpJ4F79;
    for (twvQOmpJ4F79 = ruh9jxpGoe; ruh9jxpGoe + wM6hoP > twvQOmpJ4F79; twvQOmpJ4F79++) {
        cBMd50 = cBMd50 + *twvQOmpJ4F79;
    }
    PBnmD64L = cBMd50 / wM6hoP;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (twvQOmpJ4F79 = ruh9jxpGoe; ruh9jxpGoe + wM6hoP > twvQOmpJ4F79; twvQOmpJ4F79++) {
        IMXscm6D2Fi = IMXscm6D2Fi +(*twvQOmpJ4F79 - PBnmD64L) * (*twvQOmpJ4F79 - PBnmD64L);
    }
    vaDTLz6Vg = IMXscm6D2Fi / wM6hoP;
    return (sqrt (vaDTLz6Vg));
}

int main () {
    int i;
    int j;
    double  ruh9jxpGoe [100];
    int wM6hoP, rKAku2JGa;
    cin >> wM6hoP;
    for (i = (932 - 932); i < wM6hoP; i++) {
        cin >> rKAku2JGa;
        for (j = 0; rKAku2JGa > j; j++)
            cin >> ruh9jxpGoe[j];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%.5f\n", QegfJEj1 (ruh9jxpGoe, rKAku2JGa));
    }
    return 0;
}

