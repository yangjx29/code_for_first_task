const  int MzgcprIJZY = 30;
int OodVqYeLFu [MzgcprIJZY];
int tXzN348mcrT [MzgcprIJZY];

int main () {
    int IYqgH6Uex7EN;
    int uf9dAEo5yX;
    int Iu3mACp0Qk;
    int SXBMrq6 = (17 - 17);
    tXzN348mcrT[1] = 1;
    scanf ("%d", &uf9dAEo5yX);
    for (Iu3mACp0Qk = 1; uf9dAEo5yX >= Iu3mACp0Qk; Iu3mACp0Qk++)
        scanf ("%d", OodVqYeLFu +Iu3mACp0Qk);
    for (Iu3mACp0Qk = 2; uf9dAEo5yX >= Iu3mACp0Qk; Iu3mACp0Qk++) {
        SXBMrq6 = 0;
        for (IYqgH6Uex7EN = 1; Iu3mACp0Qk -1 >= IYqgH6Uex7EN; IYqgH6Uex7EN++)
            if (OodVqYeLFu[Iu3mACp0Qk] <= OodVqYeLFu[IYqgH6Uex7EN]) {
                if (SXBMrq6 < tXzN348mcrT[IYqgH6Uex7EN])
                    SXBMrq6 = tXzN348mcrT[IYqgH6Uex7EN];
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
                };
            }
        tXzN348mcrT[Iu3mACp0Qk] = SXBMrq6 +1;
    }
    SXBMrq6 = 0;
    for (Iu3mACp0Qk = 1; Iu3mACp0Qk <= uf9dAEo5yX; Iu3mACp0Qk++)
        if (SXBMrq6 < tXzN348mcrT[Iu3mACp0Qk])
            SXBMrq6 = tXzN348mcrT[Iu3mACp0Qk];
    printf ("%d\n", SXBMrq6);
    return 0;
}

