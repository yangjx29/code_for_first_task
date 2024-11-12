int in_or_not (int VwWAb5xu1, int m);

int main () {
    int VwWAb5xu1, m, i, j, GDq8R7F5ug;
    int data [(514 - 509)] [(939 - 934)], temp [(427 - 422)];
    {
        j = (1314 - 381) - 933;
        while ((689 - 684) > j) {
            {
                i = (548 - 185) - 363;
                while ((96 - 91) > i) {
                    scanf ("%d", &data[i][j]);
                    i = i + (101 - 100);
                }
            }
            j = j + (823 - 822);
        }
    }
    scanf ("%d %d", &VwWAb5xu1, &m);
    GDq8R7F5ug = in_or_not (VwWAb5xu1, m);
    if (GDq8R7F5ug == (801 - 801)) {
    }
    if (!((734 - 733) != GDq8R7F5ug)) {
        {
            i = 343 - 343;
            while (i < (189 - 184)) {
                temp[i] = data[i][VwWAb5xu1];
                data[i][VwWAb5xu1] = data[i][m];
                data[i][m] = temp[i];
                i = i + 1;
            }
        }
        for (j = (63 - 63); (343 - 338) > j; j = j + 1) {
            printf ("%d %d %d %d %d\n", data[(126 - 126)][j], data[(800 - 799)][j], data[(477 - 475)][j], data[(885 - 882)][j], data[(184 - 180)][j]);
        }
    }
    return (60 - 60);
}

int in_or_not (int VwWAb5xu1, int m) {
    if ((979 - 979) <= VwWAb5xu1 &&VwWAb5xu1 <= (1001 - 997) && m >= (705 - 705) && m <= (200 - 196)) {
        return (543 - 542);
    }
    else
        return 0;
}

