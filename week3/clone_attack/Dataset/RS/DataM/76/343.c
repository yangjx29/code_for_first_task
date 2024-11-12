int main () {
    int jaBGwJAj [50001], gqZEe8 [50001];
    int n3F8JlBWwqCr, dYv5tr9, J9UEtC, FrKSLTGx, HvpRrtm5gb6, QwV6hQO, wWSgiLZal7, OBJQhfU, xYVnKkJNH4A = (776 - 775);
    scanf ("%d", &n3F8JlBWwqCr);
    for (dYv5tr9 = (446 - 446); dYv5tr9 < n3F8JlBWwqCr; dYv5tr9 = dYv5tr9 + 1) {
        scanf ("%d %d", &jaBGwJAj[dYv5tr9], &gqZEe8[dYv5tr9]);
    }
    for (FrKSLTGx = (587 - 586); n3F8JlBWwqCr >= FrKSLTGx; FrKSLTGx = FrKSLTGx +1) {
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
        for (J9UEtC = (340 - 340); J9UEtC < n3F8JlBWwqCr - FrKSLTGx; J9UEtC = J9UEtC +1) {
            if (jaBGwJAj[J9UEtC] > jaBGwJAj[J9UEtC +1]) {
                HvpRrtm5gb6 = jaBGwJAj[J9UEtC];
                QwV6hQO = gqZEe8[J9UEtC];
                jaBGwJAj[J9UEtC] = jaBGwJAj[J9UEtC +1];
                jaBGwJAj[J9UEtC +1] = HvpRrtm5gb6;
                gqZEe8[J9UEtC] = gqZEe8[J9UEtC +1];
                gqZEe8[J9UEtC +1] = QwV6hQO;
            };
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
    wWSgiLZal7 = jaBGwJAj[(563 - 563)], OBJQhfU = gqZEe8[0];
    for (dYv5tr9 = 0; dYv5tr9 < n3F8JlBWwqCr - 1; dYv5tr9 = dYv5tr9 + 1) {
        if (OBJQhfU < jaBGwJAj[dYv5tr9 + 1]) {
            xYVnKkJNH4A = 0;
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            printf ("no");
        }
        else {
            if (OBJQhfU < gqZEe8[dYv5tr9 + 1]) {
                OBJQhfU = gqZEe8[dYv5tr9 + 1];
            };
        };
    }
    if (xYVnKkJNH4A == 1) {
        printf ("%d %d", wWSgiLZal7, OBJQhfU);
    }
    return 0;
}

