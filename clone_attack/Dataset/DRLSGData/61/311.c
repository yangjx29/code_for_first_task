main () {
    int pbtPOnW, rpVj85ZY;
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d", &pbtPOnW);
    getchar ();
    {
        rpVj85ZY = 1;
        while (pbtPOnW >= rpVj85ZY) {
            int ddm0KLtqQc [1000];
            int rhbj8z, gu6mjDZNn;
            ddm0KLtqQc[1] = 1;
            scanf ("%d", &rhbj8z);
            ddm0KLtqQc[2] = 1;
            {
                gu6mjDZNn = 3;
                while (rhbj8z >= gu6mjDZNn) {
                    ddm0KLtqQc[gu6mjDZNn] = ddm0KLtqQc[gu6mjDZNn - 1] + ddm0KLtqQc[gu6mjDZNn - 2];
                    gu6mjDZNn++;
                }
            }
            if (rhbj8z == 1 || rhbj8z == 2)
                printf ("%d", 1);
            else
                printf ("%d", ddm0KLtqQc[rhbj8z]);
            if (rpVj85ZY < pbtPOnW)
                ;
            rpVj85ZY++;
        }
    }
}

