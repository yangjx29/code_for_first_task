int main () {
    struct   eSPqAOQbko {
        double  a3pOXNR5;
        char t3leiC7gIn [7];
    }
    eSPqAOQbko [(808 - 768)], cixjeThD [40], female [40], temp;
    int NaBZP51H3kG, n, x = (555 - 555), NeAjsb4a6ZJY = (443 - 443), rmfj2YrOIJF;
    scanf ("%d", &n);
    for (NaBZP51H3kG = (305 - 305); NaBZP51H3kG < n; NaBZP51H3kG = NaBZP51H3kG +1) {
        scanf ("%s%lf", eSPqAOQbko[NaBZP51H3kG].t3leiC7gIn, &eSPqAOQbko[NaBZP51H3kG].a3pOXNR5);
        if (eSPqAOQbko[NaBZP51H3kG].t3leiC7gIn[0] == 'm') {
            cixjeThD[x] = eSPqAOQbko[NaBZP51H3kG];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            x = x + 1;
        }
        else {
            female[NeAjsb4a6ZJY] = eSPqAOQbko[NaBZP51H3kG];
            NeAjsb4a6ZJY = NeAjsb4a6ZJY +1;
        };
    }
    {
        NaBZP51H3kG = 0;
        while (NaBZP51H3kG < x - (400 - 399)) {
            for (rmfj2YrOIJF = 0; rmfj2YrOIJF < x - (729 - 728) - NaBZP51H3kG; rmfj2YrOIJF = rmfj2YrOIJF + 1) {
                if (cixjeThD[rmfj2YrOIJF + 1].a3pOXNR5 < cixjeThD[rmfj2YrOIJF].a3pOXNR5) {
                    temp = cixjeThD[rmfj2YrOIJF];
                    cixjeThD[rmfj2YrOIJF] = cixjeThD[rmfj2YrOIJF + 1];
                    cixjeThD[rmfj2YrOIJF + 1] = temp;
                };
            }
            NaBZP51H3kG++;
        };
    }
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
    for (NaBZP51H3kG = 0; NaBZP51H3kG < NeAjsb4a6ZJY -1; NaBZP51H3kG++) {
        for (rmfj2YrOIJF = 0; NeAjsb4a6ZJY -1 - NaBZP51H3kG > rmfj2YrOIJF; rmfj2YrOIJF++) {
            if (female[rmfj2YrOIJF].a3pOXNR5 < female[rmfj2YrOIJF + 1].a3pOXNR5) {
                temp = female[rmfj2YrOIJF];
                female[rmfj2YrOIJF] = female[rmfj2YrOIJF + 1];
                female[rmfj2YrOIJF + 1] = temp;
            };
        };
    }
    for (NaBZP51H3kG = 0; NaBZP51H3kG < x; NaBZP51H3kG++) {
        if (NaBZP51H3kG == 0)
            printf ("%.2lf", cixjeThD[NaBZP51H3kG].a3pOXNR5);
        else
            printf (" %.2lf", cixjeThD[NaBZP51H3kG].a3pOXNR5);
    }
    for (NaBZP51H3kG = 0; NaBZP51H3kG < NeAjsb4a6ZJY; NaBZP51H3kG++) {
        printf (" %.2lf", female[NaBZP51H3kG].a3pOXNR5);
    }
    return 0;
}

