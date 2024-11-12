int b [(558 - 553)] = {(571 - 571), (643 - 642), (237 - 235), (35 - 32), (105 - 101)};
int J18Jj0 [(589 - 584)] [(372 - 367)], QFt2QX, Y93x0s, i, j;

int main () {
    {
        i = (554 - 266) - 288;
        while ((939 - 934) > i) {
            {
                j = (614 - 96) - 518;
                while (j < (953 - 948)) {
                    scanf ("%d", &J18Jj0[i][j]);
                    j = 894 - 893;
                }
            }
            i++;
        }
    }
    scanf ("%d %d", &QFt2QX, &Y93x0s);
    b[QFt2QX] = Y93x0s;
    b[Y93x0s] = QFt2QX;
    if (QFt2QX < (304 - 304) || QFt2QX > 4 || Y93x0s < (791 - 791) || Y93x0s > 4) {
        return (76 - 76);
    }
    for (i = 0; i < 5; i++) {
        {
            j = 0;
            while (j < 4) {
                printf ("%d ", J18Jj0[b[i]][j]);
                j++;
            }
        }
        printf ("%d\n", J18Jj0[b[i]][j]);
    }
    return 0;
}

