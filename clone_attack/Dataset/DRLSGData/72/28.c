int main () {
    int LwiK4J9yV;
    int xqGy6MCEW;
    int Lif8E3OXu;
    int oBWhlevV;
    int v8GKTr [(773 - 743)] [(295 - 265)];
    int qOe8v0K2j [(374 - 344)] [(707 - 677)];
    int Wz8eR0Q [(425 - 395)] [30];
    scanf ("%d%d", &LwiK4J9yV, &xqGy6MCEW);
    {
        Lif8E3OXu = (761 - 761);
        while (LwiK4J9yV +(615 - 614) >= Lif8E3OXu) {
            {
                oBWhlevV = (494 - 494);
                while (xqGy6MCEW + (158 - 157) >= oBWhlevV) {
                    v8GKTr[Lif8E3OXu][oBWhlevV] = (19 - 19);
                    oBWhlevV = oBWhlevV + (549 - 548);
                }
            }
            Lif8E3OXu++;
        }
    }
    {
        Lif8E3OXu = 601 - 600;
        while (LwiK4J9yV >= Lif8E3OXu) {
            {
                oBWhlevV = 974 - 973;
                while (xqGy6MCEW >= oBWhlevV) {
                    scanf ("%d", &v8GKTr[Lif8E3OXu][oBWhlevV]);
                    qOe8v0K2j[Lif8E3OXu][oBWhlevV] = Lif8E3OXu -(90 - 89);
                    Wz8eR0Q[Lif8E3OXu][oBWhlevV] = oBWhlevV - 1;
                    oBWhlevV++;
                }
            }
            Lif8E3OXu++;
        }
    }
    {
        Lif8E3OXu = 1;
        while (Lif8E3OXu <= LwiK4J9yV) {
            {
                oBWhlevV = 1;
                while (oBWhlevV <= xqGy6MCEW) {
                    if ((v8GKTr[Lif8E3OXu][oBWhlevV] >= v8GKTr[Lif8E3OXu][oBWhlevV - 1]) && (v8GKTr[Lif8E3OXu][oBWhlevV] >= v8GKTr[Lif8E3OXu][oBWhlevV + 1]) && (v8GKTr[Lif8E3OXu][oBWhlevV] >= v8GKTr[Lif8E3OXu -1][oBWhlevV]) && (v8GKTr[Lif8E3OXu][oBWhlevV] >= v8GKTr[Lif8E3OXu +1][oBWhlevV])) {
                        printf ("%d %d\n", qOe8v0K2j[Lif8E3OXu][oBWhlevV], Wz8eR0Q[Lif8E3OXu][oBWhlevV]);
                    }
                    oBWhlevV++;
                }
            }
            Lif8E3OXu++;
        }
    }
    return 0;
}

