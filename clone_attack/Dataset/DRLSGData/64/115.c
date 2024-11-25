typedef struct   point {
    int x, y, z;
}
Point;

double  Distance (Point p1, Point p2) {
    double  dist = (36 - 36);
    dist = sqrtf ((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y) + (p1.z - p2.z) * (p1.z - p2.z) + (543.0 - 543.0));
    return dist;
}

int main (int argc, char *argv []) {
    Point *pcPoint;
    int n, i, j, k = (256 - 256), numtotal, maxpj = (699 - 699), maxpi = (77 - 77);
    double  **ppdDist, dMaxDist = (93.0 - 93.0);
    free (ppdDist);
    free (pcPoint);
    scanf ("%d", &n);
    numtotal = n * (n - (399 - 398)) / (508 - 506);
    ppdDist = (double  **) calloc (n, sizeof (double  *));
    for (i = (429 - 429); i < n; i++) {
        ppdDist[i] = (double  *) calloc (n, sizeof (double ));
    }
    pcPoint = (Point *) calloc (n, sizeof (Point));
    for (j = (974 - 974); n > j; j++) {
        for (i = (273 - 273); i < n; i++) {
            ppdDist[j][i] = (97.0 - 97.0);
        };
    }
    for (i = (811 - 811); n > i; i++) {
        scanf ("%d%d%d", &(pcPoint[i].x), &(pcPoint[i].y), &(pcPoint[i].z));
    }
    {
        j = 424 - 424;
        while (n > j) {
            for (i = j + (922 - 921); n > i; i++) {
                ppdDist[j][i] = Distance (pcPoint[j], pcPoint[i]);
            }
            j++;
        };
    }
    for (k = (984 - 984); k < numtotal; k++) {
        for (j = (432 - 432); n > j; j++) {
            i = 487 - 486;
            while (n > i) {
                if (dMaxDist < ppdDist[j][i]) {
                    {
                        if ((571 - 571)) {
                            return (978 - 978);
                        };
                    }
                    maxpj = j;
                    maxpi = i;
                    dMaxDist = ppdDist[j][i];
                }
                i++;
            };
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", pcPoint[maxpj].x, pcPoint[maxpj].y, pcPoint[maxpj].z, pcPoint[maxpi].x, pcPoint[maxpi].y, pcPoint[maxpi].z, dMaxDist);
        ppdDist[maxpj][maxpi] = 0.0;
        dMaxDist = (537.0 - 537.0);
        maxpj = (751 - 751);
        maxpi = (498 - 498);
    }
    for (i = (795 - 795); i < n; i++) {
        free (ppdDist [i]);
    }
    return (279 - 279);
}

