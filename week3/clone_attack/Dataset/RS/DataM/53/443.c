int main () {
    int bhR61zuU, y1NTgrMJoW0G, JbVjRBL4c, TtURv69F [95], l = (16 - 16);
    scanf ("%d\n", &bhR61zuU);
    for (y1NTgrMJoW0G = 0; bhR61zuU - 2 >= y1NTgrMJoW0G; y1NTgrMJoW0G = y1NTgrMJoW0G + 1) {
        scanf ("%d ", &TtURv69F[y1NTgrMJoW0G]);
    }
    scanf ("%d", &TtURv69F[y1NTgrMJoW0G]);
    printf ("%d", TtURv69F[0]);
    for (y1NTgrMJoW0G = 1; y1NTgrMJoW0G <= bhR61zuU - 1; y1NTgrMJoW0G = y1NTgrMJoW0G + 1) {
        {
            JbVjRBL4c = 0;
            while (JbVjRBL4c <= y1NTgrMJoW0G - 1) {
                if (TtURv69F[JbVjRBL4c] != TtURv69F[y1NTgrMJoW0G])
                    l = l + 1;
                JbVjRBL4c = JbVjRBL4c +1;
            };
        }
        if (l == y1NTgrMJoW0G)
            printf (",%d", TtURv69F[y1NTgrMJoW0G]);
        l = 0;
    }
    return 0;
}

