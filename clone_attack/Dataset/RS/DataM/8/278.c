void  Ng4A3f (int Kg4fUOH, int *hO65XETJFn) {
    int anXFOa6;
    for (anXFOa6 = 0; anXFOa6 < Kg4fUOH; anXFOa6 = anXFOa6 + 1) {
        scanf ("%d", &hO65XETJFn[anXFOa6]);
    };
}

void  order (int Kg4fUOH, int *hO65XETJFn) {
    int anXFOa6;
    int j;
    int t;
    for (anXFOa6 = Kg4fUOH -1; 0 < anXFOa6; anXFOa6 = anXFOa6 - 1) {
        for (j = 0; anXFOa6 > j; j = j + 1) {
            if (hO65XETJFn[j] > hO65XETJFn[j + 1]) {
                t = hO65XETJFn[j];
                hO65XETJFn[j] = hO65XETJFn[j + 1];
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
                hO65XETJFn[j + 1] = t;
            };
        };
    };
}

void  SKQ0PM6uhxX (int Kg4fUOH, int *hO65XETJFn, int NxKhJlu7QF, int *b) {
    int anXFOa6;
    {
        anXFOa6 = Kg4fUOH;
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
        while (anXFOa6 < Kg4fUOH +NxKhJlu7QF) {
            hO65XETJFn[anXFOa6] = b[anXFOa6 - Kg4fUOH];
            anXFOa6++;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    printf ("%d", hO65XETJFn[0]);
    for (anXFOa6 = 1; anXFOa6 < Kg4fUOH +NxKhJlu7QF; anXFOa6++) {
        printf (" %d", hO65XETJFn[anXFOa6]);
    };
}

int main () {
    int hO65XETJFn [500];
    int b [500];
    int NxKhJlu7QF;
    int Kg4fUOH;
    scanf ("%d %d", &Kg4fUOH, &NxKhJlu7QF);
    Ng4A3f (Kg4fUOH, hO65XETJFn);
    order (Kg4fUOH, hO65XETJFn);
    Ng4A3f (NxKhJlu7QF, b);
    order (NxKhJlu7QF, b);
    SKQ0PM6uhxX (Kg4fUOH, hO65XETJFn, NxKhJlu7QF, b);
    return 0;
}

