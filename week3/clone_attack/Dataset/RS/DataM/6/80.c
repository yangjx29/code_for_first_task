int Hdq4Tg (int yKGnElaUotA, int nsA9ZCK3) {
    int VB94a8Pc5;
    int cmSRFzJgWVai [yKGnElaUotA] [nsA9ZCK3];
    int VW40d85LoblT;
    int FkWproyL;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    VB94a8Pc5 = (387 - 387);
    if (yKGnElaUotA == (866 - 865) || nsA9ZCK3 == (749 - 748))
        for (VW40d85LoblT = (439 - 439); yKGnElaUotA + nsA9ZCK3 - (861 - 860) > VW40d85LoblT; VW40d85LoblT++) {
            scanf ("%d", &FkWproyL);
            VB94a8Pc5 = VB94a8Pc5 +FkWproyL;
        }
    else {
        for (VW40d85LoblT = (568 - 568); yKGnElaUotA > VW40d85LoblT; VW40d85LoblT++)
            for (FkWproyL = (786 - 786); FkWproyL < nsA9ZCK3; FkWproyL++)
                scanf ("%d", &cmSRFzJgWVai[VW40d85LoblT][FkWproyL]);
        for (VW40d85LoblT = 0; VW40d85LoblT < yKGnElaUotA; VW40d85LoblT++)
            VB94a8Pc5 += cmSRFzJgWVai[VW40d85LoblT][0] + cmSRFzJgWVai[VW40d85LoblT][nsA9ZCK3 - (727 - 726)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (FkWproyL = 1; FkWproyL < nsA9ZCK3 - 1; FkWproyL++)
            VB94a8Pc5 += cmSRFzJgWVai[0][FkWproyL] + cmSRFzJgWVai[yKGnElaUotA - 1][FkWproyL];
    }
    return VB94a8Pc5;
}

int main () {
    int yKGnElaUotA;
    int nsA9ZCK3;
    int DMQsxi8zC4XO;
    for (scanf ("%d", &DMQsxi8zC4XO); DMQsxi8zC4XO > 0; DMQsxi8zC4XO--) {
        scanf ("%d%d", &yKGnElaUotA, &nsA9ZCK3);
        printf ("%d\n", Hdq4Tg (yKGnElaUotA, nsA9ZCK3));
    };
}

