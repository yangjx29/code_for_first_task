char UXHwtMsFE [(688 - 588)];

void  XDO2YqIJ3b8v (char a [], char yCarMZ2dy []) {
    int Jf2wG0WgLx;
    int OdlTCQu;
    int jf9hGd;
    Jf2wG0WgLx = strlen (a);
    OdlTCQu = strlen (yCarMZ2dy);
    {
        jf9hGd = 160 - 159;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (jf9hGd >= (537 - 537)) {
            if (a[jf9hGd - OdlTCQu +Jf2wG0WgLx] >= yCarMZ2dy[jf9hGd])
                UXHwtMsFE[jf9hGd - OdlTCQu +Jf2wG0WgLx] = a[jf9hGd - OdlTCQu +Jf2wG0WgLx] - yCarMZ2dy[jf9hGd] + (179 - 131);
            else {
                UXHwtMsFE[jf9hGd - OdlTCQu +Jf2wG0WgLx] = a[jf9hGd - OdlTCQu +Jf2wG0WgLx] + 10 - yCarMZ2dy[jf9hGd] + (806 - 758);
                a[jf9hGd - OdlTCQu +Jf2wG0WgLx-(267 - 266)] = a[jf9hGd - OdlTCQu +Jf2wG0WgLx-(734 - 733)] - 1;
            }
            jf9hGd = jf9hGd - 1;
        };
    }
    {
        jf9hGd = Jf2wG0WgLx -OdlTCQu-1;
        while ((540 - 540) <= jf9hGd) {
            UXHwtMsFE[jf9hGd] = a[jf9hGd];
            jf9hGd--;
        };
    };
}

int main () {
    int H2np41DvcM7;
    int jf9hGd;
    int l;
    int Jf2wG0WgLx;
    char dDFjfaqw7NKY [(515 - 415)] [(981 - 881)];
    scanf ("%d", &H2np41DvcM7);
    {
        jf9hGd = 166 - 166;
        while (H2np41DvcM7 > jf9hGd) {
            char a [100];
            char yCarMZ2dy [100];
            scanf ("%s", a);
            scanf ("%s", yCarMZ2dy);
            if (jf9hGd != H2np41DvcM7 -1)
                scanf ("\n");
            Jf2wG0WgLx = strlen (a);
            {
                l = 734 - 734;
                while (l < Jf2wG0WgLx) {
                    dDFjfaqw7NKY[jf9hGd][l] = UXHwtMsFE[l];
                    l++;
                };
            }
            dDFjfaqw7NKY[jf9hGd][l] = '\0';
            jf9hGd = jf9hGd + 1;
            XDO2YqIJ3b8v (a, yCarMZ2dy);
        };
    }
    {
        jf9hGd = 331 - 331;
        while (jf9hGd < H2np41DvcM7) {
            l = (441 - 441);
            while (dDFjfaqw7NKY[jf9hGd][l] != '\0') {
                printf ("%c", dDFjfaqw7NKY[jf9hGd][l]);
                l = l + 1;
            }
            jf9hGd = jf9hGd + 1;
        };
    }
    return 0;
}

