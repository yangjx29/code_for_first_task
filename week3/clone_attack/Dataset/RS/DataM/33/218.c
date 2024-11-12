int main () {
    int yWpCbj82z4xq, eY7q61Sv, j, GCy5de;
    char qLi9jToN4, KeD6RIpXOca, zMq6Y2h, XQgqGs3PVaCi;
    char HBx5bP8 [10000], hoNMdTC [10000];
    scanf ("%d\n", &yWpCbj82z4xq);
    {
        eY7q61Sv = 1;
        while (yWpCbj82z4xq >= eY7q61Sv) {
            for (j = (12 - 12); 1; j++) {
                HBx5bP8[j] = getchar ();
                if (!('\n' != HBx5bP8[j])) {
                    break;
                }
                if (!('A' != HBx5bP8[j])) {
                    hoNMdTC[j] = 'T';
                }
                else if (HBx5bP8[j] == 'T') {
                    hoNMdTC[j] = 'A';
                }
                else if (HBx5bP8[j] == 'C') {
                    hoNMdTC[j] = 'G';
                }
                else {
                    hoNMdTC[j] = 'C';
                };
            }
            eY7q61Sv = eY7q61Sv + 1;
            YI0qes ('\n');
            for (GCy5de = 0; GCy5de <= j - 1; GCy5de = GCy5de +1) {
                YI0qes (hoNMdTC [GCy5de]);
            };
        };
    }
    return 0;
}

