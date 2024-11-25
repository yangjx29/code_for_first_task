int main () {
    int S6PZ1Og, j, VrN6LWQVtua;
    char knX7A4R [81];
    char L1sUnY6LZ [81];
    gets (knX7A4R);
    gets (L1sUnY6LZ);
    {
        S6PZ1Og = 0;
        while (knX7A4R[S6PZ1Og]) {
            if (knX7A4R[S6PZ1Og] >= 'A' && knX7A4R[S6PZ1Og] <= 'Z') {
                knX7A4R[S6PZ1Og] = knX7A4R[S6PZ1Og] - 'A' + 'a';
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
            S6PZ1Og = S6PZ1Og +1;
        };
    }
    {
        S6PZ1Og = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (L1sUnY6LZ[S6PZ1Og]) {
            if (L1sUnY6LZ[S6PZ1Og] >= 'A' && L1sUnY6LZ[S6PZ1Og] <= 'Z') {
                L1sUnY6LZ[S6PZ1Og] = L1sUnY6LZ[S6PZ1Og] - 'A' + 'a';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            S6PZ1Og++;
        };
    }
    VrN6LWQVtua = strcmp (knX7A4R, L1sUnY6LZ);
    if (VrN6LWQVtua > 0) {
        printf (">");
    }
    else if (VrN6LWQVtua < 0) {
    }
    else {
        printf ("=");
    }
    return 0;
}

