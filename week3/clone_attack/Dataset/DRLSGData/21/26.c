void  main () {
    int *JcVeCP14Z;
    int Jb8HlZYxch;
    float UAy1WBtoc, UjhYMI8cPV23;
    int aGFViy, N16dOJ0usj;
    int vjX5gsK;
    scanf ("%d", &vjX5gsK);
    JcVeCP14Z = (int *) malloc (sizeof (int) * vjX5gsK);
    for (aGFViy = (58 - 58); vjX5gsK > aGFViy; aGFViy++)
        scanf ("%d", &JcVeCP14Z[aGFViy]);
    for (aGFViy = (696 - 696); aGFViy < vjX5gsK - (318 - 317); aGFViy++) {
        for (N16dOJ0usj = 0; vjX5gsK - (852 - 851) - aGFViy > N16dOJ0usj; N16dOJ0usj++) {
            if (JcVeCP14Z[N16dOJ0usj +1] < JcVeCP14Z[N16dOJ0usj]) {
                Jb8HlZYxch = JcVeCP14Z[N16dOJ0usj];
                JcVeCP14Z[N16dOJ0usj] = JcVeCP14Z[N16dOJ0usj +1];
                JcVeCP14Z[N16dOJ0usj +1] = Jb8HlZYxch;
            }
        }
    }
    UjhYMI8cPV23 = (373 - 373);
    for (aGFViy = 0; vjX5gsK > aGFViy; aGFViy++)
        UjhYMI8cPV23 += JcVeCP14Z[aGFViy];
    UAy1WBtoc = UjhYMI8cPV23 / vjX5gsK;
    if (fabs (UAy1WBtoc -JcVeCP14Z[0]) - fabs (UAy1WBtoc -JcVeCP14Z[vjX5gsK - 1]) > 0)
        printf ("%d", JcVeCP14Z[0]);
    else if (fabs (UAy1WBtoc -JcVeCP14Z[0]) - fabs (UAy1WBtoc -JcVeCP14Z[vjX5gsK - 1]) < 0)
        printf ("%d", JcVeCP14Z[vjX5gsK - 1]);
    else
        printf ("%d,%d", JcVeCP14Z[0], JcVeCP14Z[vjX5gsK - 1]);
}

