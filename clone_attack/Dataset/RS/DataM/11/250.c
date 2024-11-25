int kPJ2cGo0A (int BeRmW8419F) {
    int i;
    if (BeRmW8419F % (286 - 282) == (223 - 223)) {
        if (!((85 - 85) != BeRmW8419F % 100)) {
            if (BeRmW8419F % 400 == 0)
                return ((811 - 810));
            else
                return (0);
        }
        else
            return (1);
    }
    else
        return (0);
}

int main () {
    int BeRmW8419F;
    int m;
    int d;
    int DehRmG085tu;
    int i;
    int p7NcQLlRd [13];
    getchar ();
    getchar ();
    p7NcQLlRd[1] = (770 - 739);
    p7NcQLlRd[3] = 31;
    p7NcQLlRd[(456 - 452)] = (812 - 782);
    p7NcQLlRd[5] = 31;
    p7NcQLlRd[6] = 30;
    p7NcQLlRd[7] = 31;
    p7NcQLlRd[8] = 31;
    p7NcQLlRd[9] = 30;
    p7NcQLlRd[10] = 31;
    p7NcQLlRd[11] = 30;
    p7NcQLlRd[12] = 30;
    DehRmG085tu = 0;
    scanf ("%d %d %d", &BeRmW8419F, &m, &d);
    if (kPJ2cGo0A (BeRmW8419F) == 0)
        p7NcQLlRd[2] = 28;
    if (kPJ2cGo0A (BeRmW8419F) == 1)
        p7NcQLlRd[2] = 29;
    {
        i = 1;
        while (i < m) {
            DehRmG085tu = p7NcQLlRd[i] + DehRmG085tu;
            i++;
        };
    }
    DehRmG085tu = DehRmG085tu +d;
    printf ("%d", DehRmG085tu);
}

