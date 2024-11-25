int main () {
    int i, dGsKit, ydicCDo, m5pVbf0UD = (36 - 36), row = (618 - 618);
    int sz [16], result [100];
    while ((478 - 477)) {
        for (i = 1; i < 16; i++) {
            sz[i] = 0;
        }
        scanf ("%d", &sz[0]);
        if (sz[0] == -1) {
            break;
        }
        else {
            ydicCDo = 1;
            for (i = 1; i < 16; i++) {
                scanf ("%d", &sz[i]);
                if (sz[i] == 0) {
                    break;
                }
                else {
                    ydicCDo++;
                }
            }
            m5pVbf0UD = 0;
            for (i = 1; i < ydicCDo; i++) {
                for (dGsKit = 0; dGsKit < i; dGsKit++) {
                    if (sz[i] == sz[dGsKit] * 2 || sz[dGsKit] == sz[i] * 2) {
                        m5pVbf0UD++;
                    }
                }
            }
            result[row] = m5pVbf0UD;
            row++;
        }
    }
    for (i = 0; i < row; i++) {
        printf ("%d\n", result[i]);
    }
    return 0;
}

