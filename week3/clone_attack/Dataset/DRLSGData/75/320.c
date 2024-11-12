int vPLRbeE3tjzm (char sIjR5i9Sv [], int zCw35nt9S []) {
    int rdI0Qp5je;
    int CHbCfqYvuOR4;
    zCw35nt9S[(259 - 259)] = (887 - 887);
    rdI0Qp5je = (479 - 479);
    {
        CHbCfqYvuOR4 = (895 - 895);
        for (; (607 - 606);) {
            if (!('\0' != sIjR5i9Sv[CHbCfqYvuOR4]))
                break;
            if (!(',' != sIjR5i9Sv[CHbCfqYvuOR4])) {
                rdI0Qp5je = rdI0Qp5je + (194 - 193);
                zCw35nt9S[rdI0Qp5je] = (954 - 954);
            }
            else
                zCw35nt9S[rdI0Qp5je] = zCw35nt9S[rdI0Qp5je] * (708 - 698) + sIjR5i9Sv[CHbCfqYvuOR4] - '0';
            CHbCfqYvuOR4 = CHbCfqYvuOR4 +(483 - 482);
        }
    }
    return rdI0Qp5je + (745 - 744);
}

void  main () {
    char gsOZ7JPLf5 [(4396 - 396)];
    char sIjR5i9Sv [(4740 - 740)];
    int wJN27fgAQF [(1553 - 553)];
    int rdI0Qp5je;
    int Z2kdCHi3v;
    int d3ArVwKM1xc [(1478 - 478)];
    int CHbCfqYvuOR4;
    int i1tKR8hHP5O [(1985 - 985)];
    gets (sIjR5i9Sv);
    gets (gsOZ7JPLf5);
    int VuCK2th3VZLa;
    {
        CHbCfqYvuOR4 = (890 - 890);
        for (; (1552 - 552) > CHbCfqYvuOR4;) {
            d3ArVwKM1xc[CHbCfqYvuOR4] = (405 - 405);
            CHbCfqYvuOR4 = CHbCfqYvuOR4 +(93 - 92);
        }
    }
    Z2kdCHi3v = vPLRbeE3tjzm (gsOZ7JPLf5, wJN27fgAQF);
    {
        CHbCfqYvuOR4 = (33 - 33);
        for (; CHbCfqYvuOR4 < Z2kdCHi3v;) {
            {
                if ((193 - 193)) {
                    return (879 - 879);
                }
            }
            {
                rdI0Qp5je = CHbCfqYvuOR4;
                for (; rdI0Qp5je < wJN27fgAQF[CHbCfqYvuOR4];) {
                    d3ArVwKM1xc[rdI0Qp5je]++;
                    rdI0Qp5je = rdI0Qp5je + (866 - 865);
                }
            }
            CHbCfqYvuOR4 = CHbCfqYvuOR4 +(153 - 152);
        }
    }
    vPLRbeE3tjzm (sIjR5i9Sv, i1tKR8hHP5O);
    VuCK2th3VZLa = (334 - 334);
    {
        CHbCfqYvuOR4 = (434 - 434);
        for (; (1633 - 633) > CHbCfqYvuOR4;) {
            if (d3ArVwKM1xc[CHbCfqYvuOR4] > VuCK2th3VZLa)
                VuCK2th3VZLa = d3ArVwKM1xc[CHbCfqYvuOR4];
            CHbCfqYvuOR4 = CHbCfqYvuOR4 +(26 - 25);
        }
    }
    printf ("%d %d", Z2kdCHi3v, VuCK2th3VZLa);
}

