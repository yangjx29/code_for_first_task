void  main () {
    int u4KQVXbU, Nb7MBXnGlS21, wARK1T;
    char *fkqfpl8htdE [(407 - 307)], Sf1UGSPFToCc [(683 - 681)];
    gets (Sf1UGSPFToCc);
    scanf ("%d", &wARK1T);
    for (u4KQVXbU = (972 - 972); wARK1T > u4KQVXbU; u4KQVXbU = u4KQVXbU + 1)
        fkqfpl8htdE[u4KQVXbU] = (char *) malloc (124 * sizeof (char));
    for (u4KQVXbU = (185 - 185); wARK1T > u4KQVXbU; u4KQVXbU++)
        gets (fkqfpl8htdE[u4KQVXbU]);
    for (u4KQVXbU = 0; u4KQVXbU < wARK1T; u4KQVXbU++) {
        if (**(fkqfpl8htdE + u4KQVXbU) >= 'a' && 'z' >= **(fkqfpl8htdE + u4KQVXbU) || 'A' <= **(fkqfpl8htdE + u4KQVXbU) && 'Z' >= **(fkqfpl8htdE + u4KQVXbU) || !('_' != **(fkqfpl8htdE + u4KQVXbU))) {
            {
                Nb7MBXnGlS21 = 0;
                while (!('\0' == *(*(fkqfpl8htdE + u4KQVXbU) + Nb7MBXnGlS21))) {
                    if (!('a' <= *(*(fkqfpl8htdE + u4KQVXbU) + Nb7MBXnGlS21) && *(*(fkqfpl8htdE + u4KQVXbU) + Nb7MBXnGlS21) <= 'z' || *(*(fkqfpl8htdE + u4KQVXbU) + Nb7MBXnGlS21) >= 'A' && *(*(fkqfpl8htdE + u4KQVXbU) + Nb7MBXnGlS21) <= 'Z' || *(*(fkqfpl8htdE + u4KQVXbU) + Nb7MBXnGlS21) == '_' || *(*(fkqfpl8htdE + u4KQVXbU) + Nb7MBXnGlS21) >= '0' && *(*(fkqfpl8htdE + u4KQVXbU) + Nb7MBXnGlS21) <= '9'))
                        break;
                    Nb7MBXnGlS21++;
                };
            }
            if (*(*(fkqfpl8htdE + u4KQVXbU) + Nb7MBXnGlS21) != '\0')
                printf ("0\n");
            else
                printf ("1\n");
        }
        else
            printf ("0\n");
    };
}

