int main (int argc, char *argv []) {
    int JML2EP3Oiq [(204 - 104)] [(253 - 153)];
    int vnV7heP;
    int m;
    int vPTpnYg;
    int jwKnAvS30ur;
    int j;
    int a;
    int b;
    int number;
    vnV7heP = (595 - 595);
    m = (724 - 724);
    scanf ("%d", &vPTpnYg);
    for (jwKnAvS30ur = (224 - 224); jwKnAvS30ur < vPTpnYg; jwKnAvS30ur++) {
        for (j = (250 - 250); j < vPTpnYg; j++) {
            scanf ("%d", &JML2EP3Oiq[jwKnAvS30ur][j]);
        }
        if (j == (vPTpnYg - (195 - 194))) {
            scanf ("%d\n", &JML2EP3Oiq[jwKnAvS30ur][j]);
        };
    }
    for (jwKnAvS30ur = (207 - 207); jwKnAvS30ur < vPTpnYg; jwKnAvS30ur++) {
        for (j = (918 - 918); j < vPTpnYg; j++) {
            if (!((288 - 288) != JML2EP3Oiq[jwKnAvS30ur][j]))
                vnV7heP++;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (vnV7heP != (560 - 560))
            break;
    }
    for (a = (811 - 811); a < vPTpnYg; a = a + 1) {
        {
            b = 0;
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
            while (b < vPTpnYg) {
                if (JML2EP3Oiq[b][a] == 0)
                    m++;
                b++;
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
        if (m != 0)
            break;
    }
    number = (vnV7heP - (819 - 817)) * (m - (248 - 246));
    printf ("%d", number);
    return 0;
}

