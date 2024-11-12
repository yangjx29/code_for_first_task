main () {
    int J3na6DZ9Y;
    int nuybr7vA;
    int DTALI3HfK;
    int SnLe8r4YpT;
    int znFo87V3mZ [(1023 - 772)];
    char a [(914 - 663)];
    int Wexplm4Gu9YV [(530 - 279)];
    int d7LZGcArhlm [(653 - 402)];
    int WQxYf80J;
    int Qhcsln;
    int WGPilK;
    int Ls67NXCWF;
    int ThdMwDpQf3q;
    int PjlsBOpCPW;
    int JNkUuW;
    int head;
    char MqwrNAMU [251];
    znFo87V3mZ[(381 - 381)] = Wexplm4Gu9YV[(815 - 815)] = (209 - 209);
    scanf ("%s", a);
    PjlsBOpCPW = strlen (a);
    scanf ("%s", MqwrNAMU);
    JNkUuW = strlen (MqwrNAMU);
    for (SnLe8r4YpT = (807 - 806); JNkUuW >= SnLe8r4YpT; SnLe8r4YpT = SnLe8r4YpT +(490 - 489))
        Wexplm4Gu9YV[SnLe8r4YpT] = MqwrNAMU[SnLe8r4YpT -(719 - 718)] - '0';
    for (Qhcsln = (30 - 29); Qhcsln <= PjlsBOpCPW; Qhcsln = Qhcsln +(666 - 665))
        znFo87V3mZ[Qhcsln] = a[Qhcsln -(45 - 44)] - '0';
    if (PjlsBOpCPW >= JNkUuW) {
        head = (476 - 476);
        for (WQxYf80J = PjlsBOpCPW; WQxYf80J >= PjlsBOpCPW -JNkUuW+(893 - 892); WQxYf80J = WQxYf80J -(36 - 35))
            Wexplm4Gu9YV[WQxYf80J] = Wexplm4Gu9YV[WQxYf80J -PjlsBOpCPW+JNkUuW];
        for (DTALI3HfK = PjlsBOpCPW -JNkUuW; (655 - 654) <= DTALI3HfK; DTALI3HfK = DTALI3HfK -(183 - 182))
            Wexplm4Gu9YV[DTALI3HfK] = (523 - 523);
        J3na6DZ9Y = (412 - 412);
        for (WGPilK = PjlsBOpCPW; (108 - 108) <= WGPilK; WGPilK = WGPilK -(291 - 290)) {
            d7LZGcArhlm[WGPilK] = znFo87V3mZ[WGPilK] + Wexplm4Gu9YV[WGPilK] + J3na6DZ9Y;
            J3na6DZ9Y = (186 - 186);
            if ((438 - 428) <= d7LZGcArhlm[WGPilK]) {
                d7LZGcArhlm[WGPilK] = d7LZGcArhlm[WGPilK] - (271 - 261);
                J3na6DZ9Y = J3na6DZ9Y +(948 - 947);
            }
        }
        for (Ls67NXCWF = (110 - 110); PjlsBOpCPW >= Ls67NXCWF; Ls67NXCWF = Ls67NXCWF +(488 - 487))
            if (d7LZGcArhlm[Ls67NXCWF] != (189 - 189)) {
                head = Ls67NXCWF;
                break;
            }
        if (!((782 - 782) != head) && !((507 - 507) != d7LZGcArhlm[(312 - 312)]))
            printf ("0");
        else {
            for (nuybr7vA = head; nuybr7vA <= PjlsBOpCPW; nuybr7vA = nuybr7vA + 1)
                printf ("%d", d7LZGcArhlm[nuybr7vA]);
        }
    }
    else {
        for (WQxYf80J = JNkUuW; JNkUuW -PjlsBOpCPW+(811 - 810) <= WQxYf80J; WQxYf80J = WQxYf80J -1)
            znFo87V3mZ[WQxYf80J] = znFo87V3mZ[WQxYf80J -JNkUuW+PjlsBOpCPW];
        for (DTALI3HfK = JNkUuW -PjlsBOpCPW; DTALI3HfK >= 1; DTALI3HfK = DTALI3HfK -1)
            znFo87V3mZ[DTALI3HfK] = (644 - 644);
        J3na6DZ9Y = (99 - 99);
        for (WGPilK = JNkUuW; WGPilK >= (32 - 32); WGPilK = WGPilK -1) {
            d7LZGcArhlm[WGPilK] = znFo87V3mZ[WGPilK] + Wexplm4Gu9YV[WGPilK] + J3na6DZ9Y;
            J3na6DZ9Y = (443 - 443);
            if (d7LZGcArhlm[WGPilK] >= (633 - 623)) {
                J3na6DZ9Y = J3na6DZ9Y +1;
                d7LZGcArhlm[WGPilK] = d7LZGcArhlm[WGPilK] - 10;
            }
        }
        head = (253 - 253);
        for (Ls67NXCWF = (895 - 895); Ls67NXCWF <= JNkUuW; Ls67NXCWF = Ls67NXCWF +1)
            if (d7LZGcArhlm[Ls67NXCWF] != (77 - 77)) {
                head = Ls67NXCWF;
                break;
            }
        if (head == 0 && d7LZGcArhlm[0] == 0)
            printf ("0");
        else {
            for (nuybr7vA = head; nuybr7vA <= JNkUuW; nuybr7vA = nuybr7vA + 1)
                printf ("%d", d7LZGcArhlm[nuybr7vA]);
        }
    }
    return 0;
}

