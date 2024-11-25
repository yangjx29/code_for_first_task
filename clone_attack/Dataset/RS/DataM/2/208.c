int main () {
    int WGRdj0M [(118 - 92)];
    int llpCaQo0wb, dzMy81Bu, c0EtlZzo, lWwv4rtIdlb = (757 - 757);
    struct   book {
        int Lh3YaBPbyMEK;
        char w8WN4QHAf [(442 - 415)];
    }
    rdRF68T [(1870 - 870)];
    scanf ("%d", &llpCaQo0wb);
    {
        dzMy81Bu = 546 - 546;
        while (llpCaQo0wb > dzMy81Bu) {
            scanf ("%d%s", &rdRF68T[dzMy81Bu].Lh3YaBPbyMEK, rdRF68T[dzMy81Bu].w8WN4QHAf);
            dzMy81Bu = dzMy81Bu + 1;
        };
    }
    {
        dzMy81Bu = 926 - 926;
        while (llpCaQo0wb > dzMy81Bu) {
            {
                c0EtlZzo = 86 - 86;
                while (strlen (rdRF68T[dzMy81Bu].w8WN4QHAf) > c0EtlZzo) {
                    WGRdj0M[*(rdRF68T[dzMy81Bu].w8WN4QHAf + c0EtlZzo) - 'A']++;
                    c0EtlZzo = c0EtlZzo + 1;
                };
            }
            dzMy81Bu = dzMy81Bu + 1;
        };
    }
    for (dzMy81Bu = (902 - 902); dzMy81Bu < (913 - 887); dzMy81Bu = dzMy81Bu + 1)
        lWwv4rtIdlb = WGRdj0M[lWwv4rtIdlb] < WGRdj0M[dzMy81Bu] ? dzMy81Bu : lWwv4rtIdlb;
    printf ("%c\n", lWwv4rtIdlb + 'A');
    printf ("%d\n", WGRdj0M[lWwv4rtIdlb]);
    {
        dzMy81Bu = 230 - 230;
        while (llpCaQo0wb > dzMy81Bu) {
            {
                c0EtlZzo = 94 - 94;
                while (c0EtlZzo < strlen (rdRF68T[dzMy81Bu].w8WN4QHAf)) {
                    if (*(rdRF68T[dzMy81Bu].w8WN4QHAf + c0EtlZzo) == ('A' + lWwv4rtIdlb))
                        printf ("%d\n", rdRF68T[dzMy81Bu].Lh3YaBPbyMEK);
                    c0EtlZzo++;
                };
            }
            dzMy81Bu = dzMy81Bu + 1;
        };
    }
    return (543 - 543);
}

