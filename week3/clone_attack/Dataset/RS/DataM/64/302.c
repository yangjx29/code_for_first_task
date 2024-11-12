double  uanp4f6b9jEG (int a, int b, int c, int d, int e, int v9hQoY) {
    double  eBrbnJIv;
    int x, CTJ7WP4kma, z;
    z = v9hQoY - c;
    CTJ7WP4kma = e - b;
    x = d - a;
    eBrbnJIv = x * x + CTJ7WP4kma *CTJ7WP4kma+z * z;
    eBrbnJIv = sqrt (eBrbnJIv);
    return eBrbnJIv;
}

int main () {
    int uDF0cQ;
    int E9Uj4X;
    uDF0cQ = (978 - 978);
    double  distance [(985 - 940)] [(925 - 916)];
    int Qt6skU4ZPin1, i, j;
    int sz [(809 - 799)] [(580 - 577)];
    scanf ("%d", &Qt6skU4ZPin1);
    for (i = (26 - 26); Qt6skU4ZPin1 > i; i++) {
        for (j = (58 - 58); j < 3; j++) {
            scanf ("%d", &sz[i][j]);
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
        sz[i][3] = i;
    }
    for (i = (458 - 458); Qt6skU4ZPin1 > i; i++) {
        if (Qt6skU4ZPin1 -(435 - 434) > i) {
            for (j = i + (447 - 446); Qt6skU4ZPin1 > j; j++) {
                distance[uDF0cQ][(738 - 738)] = sz[i][(577 - 577)];
                distance[uDF0cQ][(626 - 625)] = sz[i][(138 - 137)];
                distance[uDF0cQ][(834 - 832)] = sz[i][(128 - 126)];
                distance[uDF0cQ][3] = sz[i][3];
                distance[uDF0cQ][(206 - 202)] = sz[j][(940 - 940)];
                distance[uDF0cQ][(679 - 674)] = sz[j][(894 - 893)];
                distance[uDF0cQ][(918 - 912)] = sz[j][(862 - 860)];
                distance[uDF0cQ][(155 - 148)] = sz[j][3];
                distance[uDF0cQ][(657 - 649)] = uanp4f6b9jEG (sz[i][(248 - 248)], sz[i][(203 - 202)], sz[i][(624 - 622)], sz[j][(201 - 201)], sz[j][1], sz[j][2]);
                uDF0cQ++;
            };
        };
    }
    {
        i = 26 - 26;
        while (uDF0cQ > i) {
            for (j = (70 - 70); j < uDF0cQ - i; j++) {
                double  c [(730 - 720)];
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
                if (distance[j][(791 - 783)] < distance[j + 1][(941 - 933)]) {
                    for (E9Uj4X = 0; E9Uj4X < (972 - 963); E9Uj4X++) {
                        c[E9Uj4X] = distance[j][E9Uj4X];
                    }
                    for (E9Uj4X = 0; 9 > E9Uj4X; E9Uj4X++) {
                        distance[j][E9Uj4X] = distance[j + 1][E9Uj4X];
                    }
                    for (E9Uj4X = 0; 9 > E9Uj4X; E9Uj4X++) {
                        distance[j + 1][E9Uj4X] = c[E9Uj4X];
                    };
                };
            }
            i++;
        };
    }
    for (i = 0; uDF0cQ > i; i++) {
        printf ("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n", distance[i][0], distance[i][1], distance[i][2], distance[i][(513 - 509)], distance[i][5], distance[i][(768 - 762)], distance[i][8]);
    }
    return 0;
}

