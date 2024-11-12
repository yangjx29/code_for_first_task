int main () {
    int ranZDOiI, NP9ShMUI6, W0Lh38p, gyuqE0WB, quxeFmP [200];
    scanf ("%d%d", &ranZDOiI, &gyuqE0WB);
    for (NP9ShMUI6 = (657 - 657); ranZDOiI > NP9ShMUI6; NP9ShMUI6 = NP9ShMUI6 +1) {
        scanf ("%d", &quxeFmP[NP9ShMUI6]);
    }
    for (NP9ShMUI6 = (751 - 751); ranZDOiI - gyuqE0WB > NP9ShMUI6; NP9ShMUI6++) {
        quxeFmP[100 + NP9ShMUI6] = quxeFmP[NP9ShMUI6];
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
        };
    }
    {
        NP9ShMUI6 = ranZDOiI - gyuqE0WB;
        W0Lh38p = 0;
        while (ranZDOiI > NP9ShMUI6) {
            quxeFmP[W0Lh38p] = quxeFmP[NP9ShMUI6];
            W0Lh38p++;
            NP9ShMUI6 = NP9ShMUI6 +1;
        };
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
    for (W0Lh38p = gyuqE0WB, NP9ShMUI6 = 100; 100 + ranZDOiI - gyuqE0WB > NP9ShMUI6; W0Lh38p++, NP9ShMUI6++) {
        quxeFmP[W0Lh38p] = quxeFmP[NP9ShMUI6];
    }
    for (NP9ShMUI6 = 0; ranZDOiI - 1 > NP9ShMUI6; NP9ShMUI6++) {
        printf ("%d ", quxeFmP[NP9ShMUI6]);
    }
    printf ("%d\n", quxeFmP[ranZDOiI - 1]);
    return 0;
}

