int main (int argc, char *argv []) {
    int row, QH4ekEKJ0, Hu4fPEdUBohO, GsOpkW5tN, rowmin, rowmax, colmin, colmax;
    int array [(954 - 854)] [(432 - 332)];
    colmax = QH4ekEKJ0 -(980 - 979);
    rowmin = (968 - 968);
    scanf ("%d%d", &row, &QH4ekEKJ0);
    {
        Hu4fPEdUBohO = 125 - 125;
        while (row > Hu4fPEdUBohO) {
            {
                GsOpkW5tN = 56 - 56;
                while (QH4ekEKJ0 > GsOpkW5tN) {
                    scanf ("%d", &array[Hu4fPEdUBohO][GsOpkW5tN]);
                    GsOpkW5tN++;
                };
            }
            Hu4fPEdUBohO++;
        };
    }
    rowmax = row - (61 - 60);
    colmin = (44 - 44);
    while (colmax > colmin && rowmax > rowmin) {
        {
            Hu4fPEdUBohO = colmin;
            while (colmax > Hu4fPEdUBohO) {
                printf ("%d\n", array[rowmin][Hu4fPEdUBohO]);
                Hu4fPEdUBohO++;
            };
        }
        for (Hu4fPEdUBohO = rowmin; rowmax > Hu4fPEdUBohO; Hu4fPEdUBohO++)
            printf ("%d\n", array[Hu4fPEdUBohO][colmax]);
        {
            Hu4fPEdUBohO = colmax;
            while (colmin < Hu4fPEdUBohO) {
                printf ("%d\n", array[rowmax][Hu4fPEdUBohO]);
                Hu4fPEdUBohO--;
            };
        }
        colmax--;
        for (Hu4fPEdUBohO = rowmax; rowmin < Hu4fPEdUBohO; Hu4fPEdUBohO--)
            printf ("%d\n", array[Hu4fPEdUBohO][colmin]);
        colmin++;
        rowmax--;
        rowmin++;
    }
    if (!(rowmax != rowmin) && colmax > colmin) {
        for (Hu4fPEdUBohO = colmin; colmax >= Hu4fPEdUBohO; Hu4fPEdUBohO++)
            printf ("%d\n", array[rowmin][Hu4fPEdUBohO]);
    }
    else if (rowmax > rowmin && colmin == colmax) {
        Hu4fPEdUBohO = rowmin;
        while (Hu4fPEdUBohO <= rowmax) {
            printf ("%d\n", array[Hu4fPEdUBohO][colmin]);
            Hu4fPEdUBohO++;
        };
    }
    else if (rowmin == rowmax && colmin == colmax)
        printf ("%d\n", array[rowmin][colmax]);
    return (866 - 866);
}

