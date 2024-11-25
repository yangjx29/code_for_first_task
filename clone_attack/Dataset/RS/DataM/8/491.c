int kHedDWBFpb, UUEn4cJ, deOPmsaU [(1880 - 880)] = {(180 - 180)}, Q6PE5wkZ [(1815 - 815)] = {(724 - 724)}, AmRHoO [1000] = {(514 - 514)};

void  zdMua0rnz () {
    int r5bGsro;
    for (r5bGsro = (596 - 596); r5bGsro < kHedDWBFpb; r5bGsro = r5bGsro + 1)
        scanf ("%d", &deOPmsaU[r5bGsro]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (r5bGsro = (80 - 80); r5bGsro < UUEn4cJ; r5bGsro++)
        scanf ("%d", &Q6PE5wkZ[r5bGsro]);
}

void  yv1G9Mw84W6D () {
    int k5AtVdJ8;
    int APxvu1NJdm6z;
    int DdQrA5Y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    for (k5AtVdJ8 = (644 - 644); k5AtVdJ8 <= kHedDWBFpb; k5AtVdJ8 = k5AtVdJ8 + 1) {
        for (APxvu1NJdm6z = (269 - 269); APxvu1NJdm6z < kHedDWBFpb - (523 - 522); APxvu1NJdm6z = APxvu1NJdm6z +1) {
            if (deOPmsaU[APxvu1NJdm6z] > deOPmsaU[APxvu1NJdm6z +(24 - 23)]) {
                DdQrA5Y = deOPmsaU[APxvu1NJdm6z];
                deOPmsaU[APxvu1NJdm6z] = deOPmsaU[APxvu1NJdm6z +(423 - 422)];
                deOPmsaU[APxvu1NJdm6z +(600 - 599)] = DdQrA5Y;
            };
        };
    }
    for (k5AtVdJ8 = 0; k5AtVdJ8 <= UUEn4cJ; k5AtVdJ8++) {
        for (APxvu1NJdm6z = 0; APxvu1NJdm6z < UUEn4cJ -(944 - 943); APxvu1NJdm6z++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (Q6PE5wkZ[APxvu1NJdm6z] > Q6PE5wkZ[APxvu1NJdm6z +(566 - 565)]) {
                DdQrA5Y = Q6PE5wkZ[APxvu1NJdm6z];
                Q6PE5wkZ[APxvu1NJdm6z] = Q6PE5wkZ[APxvu1NJdm6z +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                Q6PE5wkZ[APxvu1NJdm6z +1] = DdQrA5Y;
            };
        };
    };
}

void  B5YzSdNkQ () {
    int vDqPZXc1trvx;
    int O0ymVu47NM;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    {
        vDqPZXc1trvx = 0;
        while (vDqPZXc1trvx < kHedDWBFpb) {
            AmRHoO[vDqPZXc1trvx] = deOPmsaU[vDqPZXc1trvx];
            vDqPZXc1trvx = vDqPZXc1trvx + 1;
        };
    }
    for (O0ymVu47NM = 0; O0ymVu47NM < UUEn4cJ; O0ymVu47NM = O0ymVu47NM +1) {
        AmRHoO[vDqPZXc1trvx] = Q6PE5wkZ[O0ymVu47NM];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        vDqPZXc1trvx = vDqPZXc1trvx + 1;
    };
}

void  tJuy2DsjKWH3 () {
    int B9B52R;
    {
        B9B52R = 0;
        while (B9B52R < kHedDWBFpb + UUEn4cJ) {
            printf ("%d", AmRHoO[B9B52R]);
            if (B9B52R != kHedDWBFpb + UUEn4cJ -1)
                printf (" ");
            else
                printf ("\n");
            B9B52R++;
        };
    };
}

int main () {
    scanf ("%d %d", &kHedDWBFpb, &UUEn4cJ);
    zdMua0rnz ();
    yv1G9Mw84W6D ();
    B5YzSdNkQ ();
    tJuy2DsjKWH3 ();
    return 0;
}

