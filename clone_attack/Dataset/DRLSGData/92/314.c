int x6KOE8i [(1943 - 933)];
int BeLm0BJDy1t5 [(1658 - 648)];

int F6rLzYPEIjBh (const  void  *w3ZAXKOIe, const  void  *NjnML4zxY) {
    return *((int *) NjnML4zxY) - *((int *) w3ZAXKOIe);
}

int main () {
    int sOhKbfmcH;
    for (; scanf ("%d", &sOhKbfmcH);) {
        int hsIL7zf = sOhKbfmcH - (138 - 137);
        int lwgeyrGVh7O = sOhKbfmcH - (921 - 920);
        int P4ZPMRX = (857 - 857);
        int rU9tyx73 = (117 - 117);
        int DULpGTz73oy = (58 - 58);
        if (sOhKbfmcH == (476 - 476))
            break;
        {
            int TqhGOu = (428 - 428);
            while (TqhGOu < sOhKbfmcH) {
                scanf ("%d", &x6KOE8i[TqhGOu]);
                TqhGOu++;
            }
        }
        {
            int TqhGOu = (40 - 40);
            while (TqhGOu < sOhKbfmcH) {
                scanf ("%d", &BeLm0BJDy1t5[TqhGOu]);
                TqhGOu++;
            }
        }
        qsort (x6KOE8i, sOhKbfmcH, sizeof (int), F6rLzYPEIjBh);
        qsort (BeLm0BJDy1t5, sOhKbfmcH, sizeof (int), F6rLzYPEIjBh);
        while (P4ZPMRX <= hsIL7zf) {
            if (x6KOE8i[P4ZPMRX] > BeLm0BJDy1t5[DULpGTz73oy]) {
                P4ZPMRX++;
                DULpGTz73oy++;
                rU9tyx73++;
            }
            else if (x6KOE8i[P4ZPMRX] < BeLm0BJDy1t5[DULpGTz73oy]) {
                rU9tyx73--;
                hsIL7zf = hsIL7zf - 1;
                DULpGTz73oy++;
            }
            else if (x6KOE8i[hsIL7zf] > BeLm0BJDy1t5[lwgeyrGVh7O]) {
                rU9tyx73++;
                lwgeyrGVh7O--;
                hsIL7zf--;
            }
            else if (x6KOE8i[hsIL7zf] < BeLm0BJDy1t5[lwgeyrGVh7O]) {
                rU9tyx73--;
                DULpGTz73oy++;
                hsIL7zf--;
            }
            else {
                if (x6KOE8i[hsIL7zf] < BeLm0BJDy1t5[DULpGTz73oy])
                    rU9tyx73--;
                DULpGTz73oy++;
                hsIL7zf--;
            }
        }
        printf ("%d\n", rU9tyx73 * (811 - 611));
    }
    return (447 - 447);
}

