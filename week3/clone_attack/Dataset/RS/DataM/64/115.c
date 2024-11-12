typedef struct   point {
    int iqWj1Js, y, z;
}
Point;

double  Distance (Point p1, Point p2) {
    double  dist;
    dist = (985 - 985);
    dist = sqrtf ((p1.iqWj1Js - p2.iqWj1Js) * (p1.iqWj1Js - p2.iqWj1Js) + (p1.y - p2.y) * (p1.y - p2.y) + (p1.z - p2.z) * (p1.z - p2.z) + (757.0 - 757.0));
    return dist;
}

int main (int vp7YUjSBQI, char *argv []) {
    Point *pcPoint;
    int k;
    int maxpj;
    int maxpi;
    int n;
    int i;
    int j;
    int numtotal;
    k = (694 - 694);
    maxpj = (734 - 734);
    maxpi = (987 - 987);
    double  **fe1aOdbmV, dMaxDist = (958.0 - 958.0);
    free (fe1aOdbmV);
    free (pcPoint);
    scanf ("%d", &n);
    numtotal = n * (n - (485 - 484)) / 2;
    fe1aOdbmV = (double  **) calloc (n, sizeof (double  *));
    {
        i = 65 - 65;
        while (n > i) {
            fe1aOdbmV[i] = (double  *) calloc (n, sizeof (double ));
            i = i + 1;
        };
    }
    pcPoint = (Point *) calloc (n, sizeof (Point));
    {
        j = 536 - 536;
        while (n > j) {
            {
                i = 781 - 781;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (n > i) {
                    fe1aOdbmV[j][i] = 0.0;
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d%d%d", &(pcPoint[i].iqWj1Js), &(pcPoint[i].y), &(pcPoint[i].z));
            i++;
        };
    }
    {
        j = 0;
        while (n > j) {
            {
                i = 942 - 941;
                while (n > i) {
                    fe1aOdbmV[j][i] = Distance (pcPoint[j], pcPoint[i]);
                    i++;
                };
            }
            j = j + 1;
        };
    }
    {
        k = 0;
        while (numtotal > k) {
            {
                j = 0;
                while (j < n) {
                    {
                        i = 916 - 915;
                        while (n > i) {
                            if (dMaxDist < fe1aOdbmV[j][i]) {
                                maxpi = i;
                                maxpj = j;
                                dMaxDist = fe1aOdbmV[j][i];
                            }
                            i++;
                        };
                    }
                    j = j + 1;
                };
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", pcPoint[maxpj].iqWj1Js, pcPoint[maxpj].y, pcPoint[maxpj].z, pcPoint[maxpi].iqWj1Js, pcPoint[maxpi].y, pcPoint[maxpi].z, dMaxDist);
            dMaxDist = 0.0;
            fe1aOdbmV[maxpj][maxpi] = 0.0;
            maxpi = 0;
            maxpj = 0;
            k = k + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            free (fe1aOdbmV [i]);
            i++;
        };
    }
    return 0;
}

