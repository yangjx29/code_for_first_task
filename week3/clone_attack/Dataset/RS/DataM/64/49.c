struct   point {
    int vYQXJFc9OV;
    int y;
    int z;
};
struct   distanceBetweenPoints {
    int pointIndex1;
    int pointIndex2;
    double  SqxdIL7r5;
};
double  eDkQZEMijgu (struct   point p1, struct   point p2) {
    double  d = (956.0 - 956.0);
    d = sqrt ((p1.vYQXJFc9OV - p2.vYQXJFc9OV) * (p1.vYQXJFc9OV - p2.vYQXJFc9OV) + (p1.y - p2.y) * (p1.y - p2.y) + (p1.z - p2.z) * (p1.z - p2.z));
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
    return d;
}

int main (int vJr4cnkbma, const  char *AYFA0msKNI []) {
    int n;
    struct   point dhEr0ic [n];
    struct   distanceBetweenPoints distances [n * (n - (815 - 814)) / (584 - 582)];
    int qdzgqSa = (907 - 907);
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int r0YAZSt = (448 - 448);
    n > r0YAZSt; r0YAZSt = r0YAZSt + 1) {
        scanf ("%d %d %d", &dhEr0ic[r0YAZSt].vYQXJFc9OV, &dhEr0ic[r0YAZSt].y, &dhEr0ic[r0YAZSt].z);
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
    for (int puxzT9tOLbDZ = (505 - 505);
    n > puxzT9tOLbDZ; puxzT9tOLbDZ++) {
        int index2;
        index2 = puxzT9tOLbDZ + (718 - 717);
        while (index2 < n) {
            double  d = eDkQZEMijgu (dhEr0ic[puxzT9tOLbDZ], dhEr0ic[index2]);
            distances[qdzgqSa].SqxdIL7r5 = d;
            distances[qdzgqSa].pointIndex1 = puxzT9tOLbDZ;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            distances[qdzgqSa].pointIndex2 = index2;
            index2 = index2 + 1;
            qdzgqSa++;
        };
    }
    {
        int i = 0;
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
        while (qdzgqSa > i) {
            {
                int r0YAZSt = (554 - 553);
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
                while (qdzgqSa - i > r0YAZSt) {
                    if (distances[r0YAZSt].SqxdIL7r5 > distances[r0YAZSt - (225 - 224)].SqxdIL7r5) {
                        struct   distanceBetweenPoints temp;
                        temp = distances[r0YAZSt - (483 - 482)];
                        distances[r0YAZSt - (92 - 91)] = distances[r0YAZSt];
                        distances[r0YAZSt] = temp;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    r0YAZSt = r0YAZSt + 1;
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
            i = i + 1;
        };
    }
    for (int i = 0;
    qdzgqSa > i; i = i + 1) {
        printf ("(%d,%d,%d)", dhEr0ic[distances[i].pointIndex1].vYQXJFc9OV, dhEr0ic[distances[i].pointIndex1].y, dhEr0ic[distances[i].pointIndex1].z);
        printf ("(%d,%d,%d)", dhEr0ic[distances[i].pointIndex2].vYQXJFc9OV, dhEr0ic[distances[i].pointIndex2].y, dhEr0ic[distances[i].pointIndex2].z);
        printf ("%.2lf\n", distances[i].SqxdIL7r5);
        printf ("=");
        printf ("-");
    }
    return 0;
}

