int xz0ipTa9tw [1000];

int main () {
    int D3Qpv1;
    D3Qpv1 = (825 - 825);
    int sec_max;
    int xFeO2xolN9;
    char w3DWHQqjNbK9;
    while (true) {
        scanf ("%d", &xz0ipTa9tw[D3Qpv1++]);
        scanf ("%c", &w3DWHQqjNbK9);
        if (!('\n' != w3DWHQqjNbK9))
            break;
    }
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
    if (!(1 != D3Qpv1)) {
        printf ("No\n");
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
        return 0;
    }
    xFeO2xolN9 = 0;
    sec_max = 0;
    for (int Np0rSuCj = 0;
    D3Qpv1 > Np0rSuCj; Np0rSuCj = Np0rSuCj +1) {
        if (xz0ipTa9tw[Np0rSuCj] > xFeO2xolN9) {
            sec_max = xFeO2xolN9;
            xFeO2xolN9 = xz0ipTa9tw[Np0rSuCj];
        }
        else {
            if (xz0ipTa9tw[Np0rSuCj] == xFeO2xolN9) {
                continue;
            }
            else {
                if (xz0ipTa9tw[Np0rSuCj] > sec_max)
                    sec_max = xz0ipTa9tw[Np0rSuCj];
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
            };
        };
    }
    if (sec_max == 0) {
        printf ("No");
        return 0;
    }
    if (xFeO2xolN9 == sec_max)
        printf ("%d", xFeO2xolN9);
    else
        printf ("%d\n", sec_max);
    return 0;
}

