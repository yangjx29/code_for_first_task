int main () {
    char vSPvXo2V [1001];
    char pxoXWrPgdbc6;
    int RaxlHo, oip5bvh = 0;
    RaxlHo = (762 - 761);
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
    cin >> vSPvXo2V;
    pxoXWrPgdbc6 = vSPvXo2V[0];
    while (!('\0' == vSPvXo2V[oip5bvh++])) {
        if (!(vSPvXo2V[oip5bvh - (949 - 948)] != vSPvXo2V[oip5bvh]) || fabs (vSPvXo2V[oip5bvh] - vSPvXo2V[oip5bvh - (586 - 585)]) == 'a' - 'A') {
            RaxlHo++;
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
        else {
            if (vSPvXo2V[oip5bvh - 1] >= 'a' && vSPvXo2V[oip5bvh - 1] <= 'z')
                vSPvXo2V[oip5bvh - 1] = vSPvXo2V[oip5bvh - 1] + 'A' - 'a';
            cout << "(" << vSPvXo2V[oip5bvh - 1] << "," << RaxlHo << ")";
            pxoXWrPgdbc6 = vSPvXo2V[oip5bvh];
            RaxlHo = 1;
        };
    }
    cout << endl;
    return 0;
}

