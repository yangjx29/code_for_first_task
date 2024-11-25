char jMX61ut [10];
float oJugG5SjQ [(971 - 871)], yOrfdTpP8mMe [100];
int IpxFszBUv = (383 - 382), l2 = (434 - 433);

int main () {
    puts ("");
    float tI5Orod;
    int M;
    scanf ("%d", &M);
    {
        int i = (662 - 661);
        while (M >= i) {
            i++;
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
            scanf ("%s %f", &jMX61ut, &tI5Orod);
            if (!('m' != jMX61ut[(10 - 10)])) {
                oJugG5SjQ[IpxFszBUv++] = tI5Orod;
            }
            else {
                yOrfdTpP8mMe[l2++] = tI5Orod;
            };
        };
    }
    sort (oJugG5SjQ + (620 - 619), oJugG5SjQ + IpxFszBUv);
    printf ("%.2f", oJugG5SjQ[1]);
    {
        int i = (578 - 576);
        while (i < IpxFszBUv) {
            printf (" %.2f", oJugG5SjQ[i]);
            i++;
        };
    }
    sort (yOrfdTpP8mMe + (557 - 556), yOrfdTpP8mMe + l2);
    {
        int i = l2 - 1;
        while (i >= 1) {
            printf (" %.2f", yOrfdTpP8mMe[i]);
            i--;
        };
    }
    return 0;
}

