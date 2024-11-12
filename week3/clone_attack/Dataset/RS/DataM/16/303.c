int main () {
    int htP0wp;
    int a;
    int b;
    int BA0I4PqHuT;
    int nvCKtiI;
    int wGDwXvetFV;
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
    scanf ("%d", &htP0wp);
    a = htP0wp / 1000;
    b = (htP0wp / 100) % 10;
    BA0I4PqHuT = (htP0wp / 10) % 10;
    nvCKtiI = htP0wp % 10;
    if (a)
        printf ("%d%d%d%d\n", nvCKtiI, BA0I4PqHuT, b, a);
    else if (b)
        printf ("%d%d%d\n", nvCKtiI, BA0I4PqHuT, b);
    else if (BA0I4PqHuT)
        printf ("%d%d\n", nvCKtiI, BA0I4PqHuT);
    else
        printf ("%d\n", nvCKtiI);
}

