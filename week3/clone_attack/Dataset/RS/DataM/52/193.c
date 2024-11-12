int main () {
    int CuXBaIn, cRYB3cz9g, tI5r6lMpP;
    int dybQGvMDN [101];
    scanf ("%d%d", &CuXBaIn, &cRYB3cz9g);
    {
        tI5r6lMpP = cRYB3cz9g;
        while (CuXBaIn +cRYB3cz9g > tI5r6lMpP) {
            scanf ("%d", &dybQGvMDN[tI5r6lMpP]);
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
            }
            tI5r6lMpP++;
        };
    }
    for (tI5r6lMpP = 0; cRYB3cz9g > tI5r6lMpP; tI5r6lMpP = tI5r6lMpP + 1) {
        dybQGvMDN[tI5r6lMpP] = dybQGvMDN[CuXBaIn++];
    }
    {
        tI5r6lMpP = CuXBaIn;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (CuXBaIn +cRYB3cz9g > tI5r6lMpP) {
            dybQGvMDN[tI5r6lMpP] = 0;
            tI5r6lMpP++;
        };
    }
    for (tI5r6lMpP = 0; CuXBaIn -cRYB3cz9g > tI5r6lMpP; tI5r6lMpP++) {
        printf ("%d", dybQGvMDN[tI5r6lMpP]);
        if (tI5r6lMpP != CuXBaIn -cRYB3cz9g - 1) {
        };
    }
    return 0;
}

