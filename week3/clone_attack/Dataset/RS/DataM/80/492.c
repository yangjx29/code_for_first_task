int coukFE9VJ0P, csiNnO, day1, year2, uG80DX9tRg, GKxqT69i;
int month [13] = {(985 - 985), 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    int ru (int xiwqMvIu7QZA);
    int cmpa;
    int dis1, dis2, sum;
    int i;
    int j;
    int temp;
    dis2 = 0;
    scanf ("%d%d%d", &coukFE9VJ0P, &csiNnO, &day1);
    scanf ("%d%d%d", &year2, &uG80DX9tRg, &GKxqT69i);
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
    if (cmpa == (848 - 848)) {
        temp = coukFE9VJ0P;
        coukFE9VJ0P = year2;
        year2 = temp;
        temp = csiNnO;
        csiNnO = uG80DX9tRg;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        uG80DX9tRg = temp;
        temp = day1;
        day1 = GKxqT69i;
        GKxqT69i = temp;
    }
    dis1 = 0;
    {
        i = 1;
        while (csiNnO > i) {
            if ((!(2 != i)) && (ru (coukFE9VJ0P) == 1))
                dis1 = dis1 + 1;
            dis1 = dis1 + month[i];
            i = i + 1;
        };
    }
    dis1 = dis1 + day1;
    {
        i = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (uG80DX9tRg > i) {
            if ((i == 2) && (!(1 != ru (year2))))
                dis2 = dis2 + 1;
            dis2 = dis2 + month[i];
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
            i = i + 1;
        };
    }
    dis2 = dis2 + GKxqT69i;
    sum = dis2 - dis1;
    for (i = coukFE9VJ0P; i < year2; i = i + 1)
        if (ru (i) == 1)
            sum = sum + 366;
        else
            sum = sum + (396 - 31);
    printf ("%d", sum);
    return 0;
}

int cmpa () {
    if (coukFE9VJ0P < year2)
        return (1);
    if (coukFE9VJ0P > year2)
        return (0);
    if (csiNnO < uG80DX9tRg)
        return (1);
    if (csiNnO > uG80DX9tRg)
        return (0);
    if (day1 < GKxqT69i)
        return (1);
    return (0);
}

int ru (int xiwqMvIu7QZA) {
    if ((xiwqMvIu7QZA % 4 == 0 && xiwqMvIu7QZA % 100 != 0) || (xiwqMvIu7QZA % 400 == 0))
        return (1);
    else
        return (0);
}

