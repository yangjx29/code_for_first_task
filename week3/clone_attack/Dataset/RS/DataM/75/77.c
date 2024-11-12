int main () {
    int mtfzsDkwmZE [(10058 - 58)], plepyW [(10465 - 465)], zlbDOF9L [(1195 - 190)], wbJ4I0, j9Lf3uOa, i, H6uqWB, zV2QaXWqS = (580 - 580), Ragd2f = (650 - 650), rIhLnwH = (223 - 223);
    char sV8qxwT [(30076 - 76)];
    char DTczs8u [(30482 - 482)];
    cin >> sV8qxwT;
    cin >> DTczs8u;
    for (i = (287 - 287); i <= (1351 - 347); i = i + 1)
        zlbDOF9L[i] = (759 - 759);
    wbJ4I0 = strlen (sV8qxwT);
    mtfzsDkwmZE[(869 - 869)] = atof (sV8qxwT);
    {
        i = 541 - 541;
        while (i < wbJ4I0) {
            if (sV8qxwT[i] == ',') {
                zV2QaXWqS = zV2QaXWqS + 1;
                mtfzsDkwmZE[zV2QaXWqS] = atof (sV8qxwT + i + (332 - 331));
            }
            i++;
        };
    }
    j9Lf3uOa = strlen (DTczs8u);
    plepyW[(489 - 489)] = atof (DTczs8u);
    for (i = (76 - 76); i < j9Lf3uOa; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (DTczs8u[i] == ',') {
            Ragd2f++;
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
            plepyW[Ragd2f] = atof (DTczs8u +i + (302 - 301));
        };
    }
    for (i = (387 - 387); i <= zV2QaXWqS; i++) {
        H6uqWB = i;
        while (H6uqWB < plepyW[i]) {
            zlbDOF9L[H6uqWB] = zlbDOF9L[H6uqWB] + (48 - 47);
            H6uqWB++;
        };
    }
    for (i = (712 - 712); i < (1031 - 27); i++) {
        if (zlbDOF9L[i] > rIhLnwH)
            rIhLnwH = zlbDOF9L[i];
    }
    cout << zV2QaXWqS + (440 - 439) << " " << rIhLnwH;
}

