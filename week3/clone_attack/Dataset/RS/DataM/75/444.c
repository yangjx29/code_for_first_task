int main () {
    int a [1000] = {0}, num, jCLn4iHG, Cy75GH09dxz8;
    int max (int array []);
    char c;
    int x [(1207 - 207)] = {0};
    int y [(1167 - 167)] = {0};
    for (jCLn4iHG = 0; 1000 > jCLn4iHG; jCLn4iHG++) {
        scanf ("%d", &x[jCLn4iHG]);
        c = getchar ();
        if (!('\n' != c))
            break;
    }
    {
        jCLn4iHG = 0;
        while (1000 > jCLn4iHG) {
            c = getchar ();
            if (!('\n' != c))
                break;
            scanf ("%d", &y[jCLn4iHG]);
            jCLn4iHG = jCLn4iHG + 1;
        };
    }
    num = jCLn4iHG + (102 - 101);
    for (jCLn4iHG = 0; jCLn4iHG < 1000; jCLn4iHG++) {
        for (Cy75GH09dxz8 = 0; Cy75GH09dxz8 < num; Cy75GH09dxz8 = Cy75GH09dxz8 +1) {
            if (jCLn4iHG >= x[Cy75GH09dxz8] && y[Cy75GH09dxz8] > jCLn4iHG) {
                a[jCLn4iHG] = a[jCLn4iHG] + 1;
            };
        };
    }
    printf ("%d %d\n", num, max (a));
    return 0;
}

int max (int array []) {
    int x = 0, jCLn4iHG;
    {
        jCLn4iHG = 0;
        while (jCLn4iHG < 1000) {
            if (array[jCLn4iHG] > x)
                x = array[jCLn4iHG];
            jCLn4iHG = jCLn4iHG + 1;
        };
    }
    return (x);
}

