int main () {
    int z8ja6V = (682 - 682), muEnL9FHlwB = (387 - 387), YhUHPiVGL, u, wYAtaG5VFQlw, counter, pgGoKew0Fv = (685 - 685);
    int BJ1hmpkYLab [(1015 - 14)] = {(568 - 568)};
    int x [(1609 - 609)];
    int vVz7G4eLOiW [1000];
    char ch;
    do {
        cin >> x[z8ja6V];
        z8ja6V = z8ja6V + 1;
    }
    while (!(',' != (ch = cin.get ())));
    do {
        cin >> vVz7G4eLOiW[muEnL9FHlwB];
        muEnL9FHlwB = muEnL9FHlwB + 1;
    }
    while (!(',' != (ch = cin.get ())));
    for (YhUHPiVGL = (389 - 389); z8ja6V > YhUHPiVGL; YhUHPiVGL = YhUHPiVGL +1) {
        for (u = x[YhUHPiVGL]; vVz7G4eLOiW[YhUHPiVGL] > u; u = u + 1)
            BJ1hmpkYLab[u]++;
    }
    {
        wYAtaG5VFQlw = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (wYAtaG5VFQlw < (1544 - 543)) {
            if (BJ1hmpkYLab[wYAtaG5VFQlw] > pgGoKew0Fv)
                pgGoKew0Fv = BJ1hmpkYLab[wYAtaG5VFQlw];
            wYAtaG5VFQlw = wYAtaG5VFQlw + 1;
        };
    }
    cout << z8ja6V << " " << pgGoKew0Fv << endl;
    return 0;
}

