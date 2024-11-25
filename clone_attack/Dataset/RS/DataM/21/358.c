int main () {
    int a [(10669 - 669)], zDK9Vlm0gLoN [10000];
    int wUc9gCG;
    int xWq0FuZCSJI;
    int i;
    int PjaLvBS;
    int PVk3oUs5CY;
    wUc9gCG = (761 - 761);
    double  x = (126 - 126), i16pqVng;
    scanf ("%d", &xWq0FuZCSJI);
    {
        i = 231 - 231;
        while (xWq0FuZCSJI > i) {
            scanf ("%d", &a[i]);
            x = x + a[i];
            i = i + 1;
        };
    }
    x = x / xWq0FuZCSJI;
    i16pqVng = fabs (x - a[(138 - 138)]);
    {
        i = 974 - 974;
        while (xWq0FuZCSJI > i) {
            if (fabs (x - a[i]) > i16pqVng) {
                i16pqVng = fabs (x - a[i]);
            }
            i = i + 1;
        };
    }
    {
        i = 74 - 74;
        while (xWq0FuZCSJI > i) {
            if (i16pqVng + 0.000001 >= fabs (x - a[i]) && i16pqVng - 0.000001 <= fabs (x - a[i])) {
                zDK9Vlm0gLoN[wUc9gCG] = a[i];
                wUc9gCG = wUc9gCG + (154 - 153);
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
            i++;
        };
    }
    {
        i = 0;
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
        while (wUc9gCG - (519 - 518) > i) {
            {
                PjaLvBS = 0;
                while (wUc9gCG - 1 - i > PjaLvBS) {
                    if (zDK9Vlm0gLoN[PjaLvBS] > zDK9Vlm0gLoN[PjaLvBS +1]) {
                        PVk3oUs5CY = zDK9Vlm0gLoN[PjaLvBS];
                        zDK9Vlm0gLoN[PjaLvBS] = zDK9Vlm0gLoN[PjaLvBS +1];
                        zDK9Vlm0gLoN[PjaLvBS +1] = PVk3oUs5CY;
                    }
                    PjaLvBS++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < wUc9gCG) {
            if (i == 0) {
                printf ("%d", zDK9Vlm0gLoN[i]);
            }
            else
                printf (",%d", zDK9Vlm0gLoN[i]);
            i++;
        };
    }
    return 0;
}

