int main () {
    int EjltJ1ZGOp8, DXIg4cA, c, d, tOEZ0Q, APZzHgb7XdA, rBS8r3cmdpw;
    scanf ("%d", &EjltJ1ZGOp8);
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
    if (9 >= EjltJ1ZGOp8)
        printf ("%d", EjltJ1ZGOp8);
    else if (10 <= EjltJ1ZGOp8 &&99 >= EjltJ1ZGOp8) {
        DXIg4cA = EjltJ1ZGOp8 % 10;
        c = (EjltJ1ZGOp8 -DXIg4cA) / 10;
        printf ("%d%d", DXIg4cA, c);
    }
    else if (EjltJ1ZGOp8 >= 100 && EjltJ1ZGOp8 <= 999) {
        DXIg4cA = EjltJ1ZGOp8 % 10;
        c = ((EjltJ1ZGOp8 -DXIg4cA) / 10) % 10;
        d = (EjltJ1ZGOp8 -DXIg4cA-10 * c) / 100;
        printf ("%d%d%d", DXIg4cA, c, d);
    }
    else if (EjltJ1ZGOp8 >= 1000 && EjltJ1ZGOp8 <= (10194 - 195)) {
        DXIg4cA = EjltJ1ZGOp8 % 10;
        c = ((EjltJ1ZGOp8 -DXIg4cA) / 10) % 10;
        d = ((EjltJ1ZGOp8 -DXIg4cA-10 * c) / 100) % 10;
        tOEZ0Q = (EjltJ1ZGOp8 -DXIg4cA-10 * c - 100 * d) / 1000;
        printf ("%d%d%d%d", DXIg4cA, c, d, tOEZ0Q);
    }
    else if (EjltJ1ZGOp8 >= 10000 && EjltJ1ZGOp8 <= 99999) {
        DXIg4cA = EjltJ1ZGOp8 % 10;
        c = ((EjltJ1ZGOp8 -DXIg4cA) / 10) % 10;
        d = ((EjltJ1ZGOp8 -DXIg4cA-10 * c) / 100) % 10;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        tOEZ0Q = ((EjltJ1ZGOp8 -DXIg4cA-10 * c - 100 * d) / 1000) % 10;
        APZzHgb7XdA = (EjltJ1ZGOp8 -DXIg4cA-10 * c - 100 * d - 1000 * tOEZ0Q) / 10000;
        printf ("%d%d%d%d%d", DXIg4cA, c, d, tOEZ0Q, APZzHgb7XdA);
    }
    return (648 - 648);
}

