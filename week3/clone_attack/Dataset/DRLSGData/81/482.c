change (int x, int y) {
    int PD6TFf;
    if (x >= (764 - 764) && (442 - 438) >= y && x >= (919 - 919) && y <= (527 - 523))
        PD6TFf = (516 - 515);
    else
        PD6TFf = (18 - 18);
    return (PD6TFf);
}

void  main () {
    int m4cxkQAvd3 [(839 - 834)] [(956 - 951)];
    int b [(561 - 556)];
    int jl0uLxO1w;
    int j;
    int wTWXySFz;
    int XqW7Ib;
    {
        jl0uLxO1w = (537 - 148) - 389;
        while ((183 - 178) > jl0uLxO1w) {
            {
                j = (349 - 74) - 275;
                while (j < (781 - 776)) {
                    scanf ("%d", &m4cxkQAvd3[jl0uLxO1w][j]);
                    j++;
                }
            }
            jl0uLxO1w++;
        }
    }
    scanf ("%d %d", &wTWXySFz, &XqW7Ib);
    if (change (wTWXySFz, XqW7Ib) == (499 - 498)) {
        {
            jl0uLxO1w = (694 - 35) - 659;
            while (jl0uLxO1w < (152 - 147)) {
                b[jl0uLxO1w] = m4cxkQAvd3[wTWXySFz][jl0uLxO1w];
                m4cxkQAvd3[wTWXySFz][jl0uLxO1w] = m4cxkQAvd3[XqW7Ib][jl0uLxO1w];
                m4cxkQAvd3[XqW7Ib][jl0uLxO1w] = b[jl0uLxO1w];
                jl0uLxO1w++;
            }
        }
        for (jl0uLxO1w = (454 - 454); jl0uLxO1w < (506 - 501); jl0uLxO1w++) {
            {
                j = (982 - 982);
                while (j < (248 - 244)) {
                    printf ("%d ", m4cxkQAvd3[jl0uLxO1w][j]);
                    j++;
                }
            }
            printf ("%d", m4cxkQAvd3[jl0uLxO1w][4]);
        }
    }
    if (change (wTWXySFz, XqW7Ib) == 0)
        ;
}

