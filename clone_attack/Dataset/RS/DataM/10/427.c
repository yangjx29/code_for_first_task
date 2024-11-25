int main () {
    int BTdQMF [25];
    int qq3PtMb;
    int OkHEjS [25];
    int UkWqrIyd6x;
    UkWqrIyd6x = 0;
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
    scanf ("%d", &qq3PtMb);
    for (int i = 0;
    i <= qq3PtMb - 1; i++) {
        if (i == 0) {
            scanf ("%d", &BTdQMF[i]);
        }
        else {
            scanf (" %d", &BTdQMF[i]);
        };
    }
    OkHEjS[qq3PtMb - 1] = 1;
    for (int i = qq3PtMb - 2;
    i >= 0; i--) {
        int UkWqrIyd6x = 0;
        for (int pfdPGnD = qq3PtMb - 1;
        pfdPGnD > i; pfdPGnD = pfdPGnD - 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (BTdQMF[i] >= BTdQMF[pfdPGnD] && UkWqrIyd6x < OkHEjS[pfdPGnD]) {
                UkWqrIyd6x = OkHEjS[pfdPGnD];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        OkHEjS[i] = UkWqrIyd6x +1;
    }
    for (int i = 0;
    i <= qq3PtMb - 1; i++) {
        UkWqrIyd6x = UkWqrIyd6x > OkHEjS[i] ? UkWqrIyd6x : OkHEjS[i];
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
    }
    printf ("%d", UkWqrIyd6x);
    return 0;
}

