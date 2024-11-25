int main () {
    int a;
    int i;
    int RIxGgFqtR;
    int gFTpxqNzoH;
    int z;
    int q;
    int t;
    scanf ("%d\n", &a);
    scanf ("%d\n", &gFTpxqNzoH);
    scanf ("%d\n", &q);
    i = 2;
    for (; i < (a - (440 - 439));) {
        scanf ("%d\n", &RIxGgFqtR);
        for (; 1;) {
            if (RIxGgFqtR >= gFTpxqNzoH && gFTpxqNzoH >= q) {
                q = gFTpxqNzoH;
                gFTpxqNzoH = RIxGgFqtR;
                break;
            }
            if (q <= RIxGgFqtR &&q >= gFTpxqNzoH) {
                gFTpxqNzoH = RIxGgFqtR;
                break;
            }
            if (gFTpxqNzoH >= RIxGgFqtR &&RIxGgFqtR >= q) {
                q = RIxGgFqtR;
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
                break;
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
            if (q >= RIxGgFqtR &&RIxGgFqtR >= gFTpxqNzoH) {
                gFTpxqNzoH = q;
                q = RIxGgFqtR;
                break;
            }
            if (q >= gFTpxqNzoH && gFTpxqNzoH >= RIxGgFqtR) {
                t = q;
                q = gFTpxqNzoH;
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
                gFTpxqNzoH = t;
                break;
            }
            if (gFTpxqNzoH >= q && q >= RIxGgFqtR) {
                break;
            };
        }
        i++;
    }
    scanf ("%d", &z);
    if (gFTpxqNzoH >= z && z >= q) {
        q = z;
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
    if (z >= gFTpxqNzoH) {
        q = gFTpxqNzoH;
        gFTpxqNzoH = z;
    }
    printf ("%d\n", gFTpxqNzoH);
    printf ("%d", q);
    return 0;
}

