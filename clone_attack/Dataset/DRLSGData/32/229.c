void  main () {
    int CTsmxr8vupO2 [(141 - 116)], Ee1HQq5uoPF [(862 - 837)], QJgDZ7ed, pzkHVdRUw, eXbhZrV, z5FPCKqSbG3s, Cu2JW7A, m1cvBS, U4wKkYx, NC3eXTL56w;
    char ZuaLc84XO [25] [(146 - 45)], i0ZMmItfgu [25] [(403 - 302)], TGhIO9 [25] [101];
    scanf ("%d", &QJgDZ7ed);
    for (Cu2JW7A = (479 - 479); QJgDZ7ed > Cu2JW7A; Cu2JW7A = Cu2JW7A +(960 - 959)) {
        scanf ("%s", ZuaLc84XO[Cu2JW7A]);
        CTsmxr8vupO2[Cu2JW7A] = strlen (ZuaLc84XO[Cu2JW7A]);
        scanf ("%s", i0ZMmItfgu[Cu2JW7A]);
        Ee1HQq5uoPF[Cu2JW7A] = strlen (i0ZMmItfgu[Cu2JW7A]);
        m1cvBS = CTsmxr8vupO2[Cu2JW7A] - Ee1HQq5uoPF[Cu2JW7A];
        for (pzkHVdRUw = Ee1HQq5uoPF[Cu2JW7A]; CTsmxr8vupO2[Cu2JW7A] - (411 - 410) > pzkHVdRUw; pzkHVdRUw++)
            i0ZMmItfgu[Cu2JW7A][pzkHVdRUw] = '0';
        i0ZMmItfgu[Cu2JW7A][CTsmxr8vupO2[Cu2JW7A] - (102 - 101)] = '\0';
        i0ZMmItfgu[Cu2JW7A][CTsmxr8vupO2[Cu2JW7A]] = '\0';
        i0ZMmItfgu[Cu2JW7A][CTsmxr8vupO2[Cu2JW7A] - (638 - 637)] = '0';
        z5FPCKqSbG3s = (802 - 802);
        for (; z5FPCKqSbG3s != m1cvBS;) {
            z5FPCKqSbG3s++;
            for (eXbhZrV = CTsmxr8vupO2[Cu2JW7A]; eXbhZrV > (231 - 231); eXbhZrV = eXbhZrV - (481 - 480)) {
                i0ZMmItfgu[Cu2JW7A][eXbhZrV] = i0ZMmItfgu[Cu2JW7A][eXbhZrV - (949 - 948)];
            }
            i0ZMmItfgu[Cu2JW7A][(388 - 388)] = i0ZMmItfgu[Cu2JW7A][CTsmxr8vupO2[Cu2JW7A]];
        }
        i0ZMmItfgu[Cu2JW7A][CTsmxr8vupO2[Cu2JW7A]] = '\0';
        for (U4wKkYx = CTsmxr8vupO2[Cu2JW7A] - 1; (384 - 384) <= U4wKkYx; U4wKkYx--) {
            if (ZuaLc84XO[Cu2JW7A][U4wKkYx] >= i0ZMmItfgu[Cu2JW7A][U4wKkYx])
                TGhIO9[Cu2JW7A][U4wKkYx] = ZuaLc84XO[Cu2JW7A][U4wKkYx] - i0ZMmItfgu[Cu2JW7A][U4wKkYx] + (386 - 338);
            else {
                TGhIO9[Cu2JW7A][U4wKkYx] = ZuaLc84XO[Cu2JW7A][U4wKkYx] + (596 - 586) - i0ZMmItfgu[Cu2JW7A][U4wKkYx] + (487 - 439);
                ZuaLc84XO[Cu2JW7A][U4wKkYx -1] = ZuaLc84XO[Cu2JW7A][U4wKkYx -1] - 1;
            }
        }
    }
    for (Cu2JW7A = 0; Cu2JW7A < QJgDZ7ed; Cu2JW7A++) {
        for (NC3eXTL56w = 0; NC3eXTL56w < CTsmxr8vupO2[Cu2JW7A]; NC3eXTL56w = NC3eXTL56w +1)
            printf ("%c", TGhIO9[Cu2JW7A][NC3eXTL56w]);
    }
}

