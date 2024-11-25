int main () {
    int yJUVAPgl3yO [] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *F2sycoI [] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int Kxrz3IDnEk2q;
    int NxZglyW;
    int jiEeSj4X2M17;
    int q6DzN2gv;
    int QeuMWln;
    scanf ("%d%d%d", &Kxrz3IDnEk2q, &NxZglyW, &jiEeSj4X2M17);
    q6DzN2gv = Kxrz3IDnEk2q % 7 + Kxrz3IDnEk2q / 4 - Kxrz3IDnEk2q / 100 + Kxrz3IDnEk2q / 400;
    for (QeuMWln = 1; QeuMWln < NxZglyW; QeuMWln++)
        q6DzN2gv = q6DzN2gv + yJUVAPgl3yO[QeuMWln];
    q6DzN2gv = q6DzN2gv + jiEeSj4X2M17 - 1;
    if (((Kxrz3IDnEk2q % 4 == 0 && Kxrz3IDnEk2q % 100 != 0) || Kxrz3IDnEk2q % 400 == 0) && (NxZglyW <= 2))
        q6DzN2gv = q6DzN2gv - 1;
    printf ("%s.\n", F2sycoI[q6DzN2gv % 7]);
    return 0;
}

