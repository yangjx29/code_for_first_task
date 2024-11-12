int main () {
    int nLiUq6hAS, JQkUGW, X8QmoRPlds [(558 - 458)] [100], fDRXjBqhZ, QRPOgtX2iw, sum, nyx7SHGUX3J = (583 - 583);
    scanf ("%d%d", &nLiUq6hAS, &JQkUGW);
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
    sum = nLiUq6hAS * JQkUGW;
    for (fDRXjBqhZ = (882 - 882); nLiUq6hAS > fDRXjBqhZ; fDRXjBqhZ = fDRXjBqhZ + 1) {
        for (QRPOgtX2iw = (358 - 358); JQkUGW > QRPOgtX2iw; QRPOgtX2iw = QRPOgtX2iw +1) {
            scanf ("%d", &X8QmoRPlds[fDRXjBqhZ][QRPOgtX2iw]);
        };
    }
    for (fDRXjBqhZ = (747 - 747); fDRXjBqhZ < nLiUq6hAS; fDRXjBqhZ++) {
        for (QRPOgtX2iw = fDRXjBqhZ; QRPOgtX2iw < JQkUGW -fDRXjBqhZ; QRPOgtX2iw++) {
            nyx7SHGUX3J = nyx7SHGUX3J + 1;
            printf ("%d\n", X8QmoRPlds[fDRXjBqhZ][QRPOgtX2iw]);
        }
        if (!(sum != nyx7SHGUX3J))
            break;
        QRPOgtX2iw = QRPOgtX2iw -1;
        fDRXjBqhZ++;
        for (; fDRXjBqhZ < nLiUq6hAS - (JQkUGW -QRPOgtX2iw-(472 - 471)); fDRXjBqhZ++) {
            nyx7SHGUX3J++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            printf ("%d\n", X8QmoRPlds[fDRXjBqhZ][QRPOgtX2iw]);
        }
        if (nyx7SHGUX3J == sum)
            break;
        fDRXjBqhZ = fDRXjBqhZ - 1;
        QRPOgtX2iw = QRPOgtX2iw -1;
        for (; nLiUq6hAS - fDRXjBqhZ - (297 - 296) <= QRPOgtX2iw; QRPOgtX2iw = QRPOgtX2iw -1) {
            nyx7SHGUX3J++;
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
            printf ("%d\n", X8QmoRPlds[fDRXjBqhZ][QRPOgtX2iw]);
        }
        if (nyx7SHGUX3J == sum)
            break;
        QRPOgtX2iw++;
        fDRXjBqhZ = fDRXjBqhZ - 1;
        for (; fDRXjBqhZ > QRPOgtX2iw; fDRXjBqhZ = fDRXjBqhZ - 1) {
            nyx7SHGUX3J++;
            printf ("%d\n", X8QmoRPlds[fDRXjBqhZ][QRPOgtX2iw]);
        }
        if (nyx7SHGUX3J == sum)
            break;
    };
}

