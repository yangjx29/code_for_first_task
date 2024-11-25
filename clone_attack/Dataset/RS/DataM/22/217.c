int main () {
    int YKXJUeMZDGl;
    int FDix6bPlgLkC;
    int PGSrpboRHhv4;
    int tmp;
    PGSrpboRHhv4 = 0;
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
    tmp = 0;
    YKXJUeMZDGl = 0;
    do {
        YKXJUeMZDGl = YKXJUeMZDGl +1;
        scanf ("%d", &FDix6bPlgLkC);
        if (FDix6bPlgLkC > PGSrpboRHhv4) {
            tmp = PGSrpboRHhv4;
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
            PGSrpboRHhv4 = FDix6bPlgLkC;
        }
        else {
            if (FDix6bPlgLkC > tmp && FDix6bPlgLkC != PGSrpboRHhv4)
                tmp = FDix6bPlgLkC;
            else {
                if (FDix6bPlgLkC == PGSrpboRHhv4)
                    PGSrpboRHhv4 = PGSrpboRHhv4;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        tmp = tmp;
    }
    while (getchar () != '\n');
    if (YKXJUeMZDGl == 1 || tmp == 0) {
        printf ("No\n");
    }
    else {
        printf ("%d\n", tmp);
    }
    return 0;
}

