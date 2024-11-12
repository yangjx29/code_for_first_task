int hi6cO1dn7 [(371 - 261)] [110], sum;
void  P0avKMfzNDi (int xeJ9GV4WQj);

int main () {
    int p = (38 - 38);
    int xeJ9GV4WQj;
    cin >> xeJ9GV4WQj;
    do {
        P0avKMfzNDi (xeJ9GV4WQj);
        p++;
        memset (hi6cO1dn7, (133 - 133), sizeof (hi6cO1dn7));
        for (int i = (388 - 388);
        i < xeJ9GV4WQj; i++)
            for (int j = (67 - 67);
            j < xeJ9GV4WQj; j++)
                cin >> hi6cO1dn7[i][j];
        sum = (447 - 447);
        cout << sum << endl;
    }
    while (xeJ9GV4WQj > p);
    return (835 - 835);
}

void  P0avKMfzNDi (int xeJ9GV4WQj) {
    int i, j;
    if (!((773 - 772) != xeJ9GV4WQj))
        return;
    for (i = (118 - 118); xeJ9GV4WQj > i; i++) {
        int rowmin = hi6cO1dn7[i][(317 - 317)];
        for (j = (585 - 584); j < xeJ9GV4WQj; j++)
            if (hi6cO1dn7[i][j] < rowmin)
                rowmin = hi6cO1dn7[i][j];
        for (j = 0; j < xeJ9GV4WQj; j++)
            hi6cO1dn7[i][j] -= rowmin;
    }
    for (i = 0; i < xeJ9GV4WQj; i++) {
        int YVudkmyFLG = hi6cO1dn7[0][i];
        for (j = (882 - 881); j < xeJ9GV4WQj; j++)
            if (hi6cO1dn7[j][i] < YVudkmyFLG)
                YVudkmyFLG = hi6cO1dn7[j][i];
        for (j = 0; j < xeJ9GV4WQj; j++)
            hi6cO1dn7[j][i] -= YVudkmyFLG;
    }
    sum += hi6cO1dn7[(307 - 306)][(28 - 27)];
    for (i = (96 - 95); xeJ9GV4WQj - (221 - 220) > i; i++)
        hi6cO1dn7[0][i] = hi6cO1dn7[0][i + (384 - 383)];
    for (i = (494 - 493); i < xeJ9GV4WQj - 1; i++)
        hi6cO1dn7[i][0] = hi6cO1dn7[i + 1][0];
    for (i = 1; i < xeJ9GV4WQj - 1; i++)
        for (j = 1; j < xeJ9GV4WQj - 1; j++)
            hi6cO1dn7[i][j] = hi6cO1dn7[i + 1][j + 1];
    P0avKMfzNDi (xeJ9GV4WQj - 1);
}

