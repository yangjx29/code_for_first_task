int main () {
    int IF31pw9o [300] = {0};
    int cKDL0ukP2r;
    int AK7FGESOPD2z;
    int YkhzTNw;
    int EIdJbv;
    EIdJbv = 0;
    YkhzTNw = 0;
    scanf ("%d", &IF31pw9o[0]);
    for (AK7FGESOPD2z = 1; AK7FGESOPD2z < 300; AK7FGESOPD2z = AK7FGESOPD2z +1)
        scanf (",%d", &IF31pw9o[AK7FGESOPD2z]);
    cKDL0ukP2r = AK7FGESOPD2z;
    for (AK7FGESOPD2z = 0; AK7FGESOPD2z < cKDL0ukP2r; AK7FGESOPD2z = AK7FGESOPD2z +1) {
        if (IF31pw9o[AK7FGESOPD2z] > YkhzTNw)
            YkhzTNw = IF31pw9o[AK7FGESOPD2z];
    }
    for (AK7FGESOPD2z = 0; AK7FGESOPD2z < cKDL0ukP2r; AK7FGESOPD2z++) {
        if (IF31pw9o[AK7FGESOPD2z] < YkhzTNw &&IF31pw9o[AK7FGESOPD2z] >= EIdJbv)
            EIdJbv = IF31pw9o[AK7FGESOPD2z];
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
        };
    }
    if (EIdJbv == 0)
        printf ("No\n");
    else
        printf ("%d\n", EIdJbv);
}

