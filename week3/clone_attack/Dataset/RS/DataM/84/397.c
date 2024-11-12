int main () {
    int HGcpvas9ngFu, JQrvSt8uEwMl, g4LKYB, fCeb2f5vor, XgZr5G;
    int zYyhVwNt0x [(474 - 374)];
    scanf ("%d", &HGcpvas9ngFu);
    {
        JQrvSt8uEwMl = 1;
        while (JQrvSt8uEwMl <= HGcpvas9ngFu) {
            scanf ("%d", &zYyhVwNt0x[JQrvSt8uEwMl]);
            if (g4LKYB < zYyhVwNt0x[JQrvSt8uEwMl]) {
                XgZr5G = g4LKYB;
                g4LKYB = zYyhVwNt0x[JQrvSt8uEwMl];
                fCeb2f5vor = XgZr5G;
            }
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
            if ((zYyhVwNt0x[JQrvSt8uEwMl] > fCeb2f5vor) && (zYyhVwNt0x[JQrvSt8uEwMl] < g4LKYB))
                fCeb2f5vor = zYyhVwNt0x[JQrvSt8uEwMl];
            JQrvSt8uEwMl = JQrvSt8uEwMl +1;
        };
    }
    printf ("%d\n", g4LKYB);
    printf ("%d\n", fCeb2f5vor);
    return 0;
}

