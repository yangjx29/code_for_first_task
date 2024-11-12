int main () {
    char zfc [(10574 - 575)] [(822 - 566)];
    char uyVS497bA5r [(10493 - 494)] [(650 - 394)];
    int n;
    int l;
    int BXMwyPCZ;
    int j;
    scanf ("%d", &n);
    for (BXMwyPCZ = (574 - 574); n > BXMwyPCZ; BXMwyPCZ = BXMwyPCZ +1) {
        scanf ("%s", &zfc[BXMwyPCZ]);
    }
    for (BXMwyPCZ = 0; BXMwyPCZ < n; BXMwyPCZ = BXMwyPCZ +1) {
        l = strlen (zfc[BXMwyPCZ]);
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
        for (j = 0; l > j; j = j + 1) {
            if (!('A' != zfc[BXMwyPCZ][j])) {
                uyVS497bA5r[BXMwyPCZ][j] = 'T';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (!('T' != zfc[BXMwyPCZ][j])) {
                uyVS497bA5r[BXMwyPCZ][j] = 'A';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else if (zfc[BXMwyPCZ][j] == 'G') {
                uyVS497bA5r[BXMwyPCZ][j] = 'C';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                uyVS497bA5r[BXMwyPCZ][j] = 'G';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            uyVS497bA5r[BXMwyPCZ][l] = '\0';
        };
    }
    for (BXMwyPCZ = 0; BXMwyPCZ < n; BXMwyPCZ++)
        printf ("%s\n", uyVS497bA5r[BXMwyPCZ]);
    return 0;
}

