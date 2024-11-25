int main () {
    char dou;
    int b3FHR0B;
    int abDIeNmlwn0;
    int x;
    int XnHDuxG9z [(327 - 319)] [8];
    int y;
    int gcVkrXM;
    int i;
    int k;
    int WfzoImhBTb7;
    WfzoImhBTb7 = (846 - 845);
    b3FHR0B = (871 - 870);
    scanf ("%d %c %d", &abDIeNmlwn0, &dou, &gcVkrXM);
    {
        y = 933 - 933;
        while (abDIeNmlwn0 - (377 - 376) >= y) {
            {
                x = 921 - 921;
                while (gcVkrXM - 1 >= x) {
                    scanf ("%d", &XnHDuxG9z[x][y]);
                    x++;
                }
            }
            y++;
        }
    }
    for (y = 0; y <= abDIeNmlwn0 - 1; y++) {
        {
            x = 0;
            while (x <= gcVkrXM - 1) {
                {
                    i = 0;
                    while (gcVkrXM - 1 >= i) {
                        WfzoImhBTb7 = 1;
                        if (XnHDuxG9z[i][y] > XnHDuxG9z[x][y]) {
                            WfzoImhBTb7 = 0;
                            break;
                        }
                        i++;
                    }
                }
                {
                    k = 0;
                    while (abDIeNmlwn0 - 1 >= k) {
                        b3FHR0B = 1;
                        if (XnHDuxG9z[x][k] < XnHDuxG9z[x][y]) {
                            b3FHR0B = 0;
                            break;
                        }
                        k++;
                    }
                }
                if (WfzoImhBTb7 == 1 && b3FHR0B == 1) {
                    printf ("%d+%d\n", y, x);
                    break;
                }
                x++;
            }
        }
        if (WfzoImhBTb7 == 1 && b3FHR0B == 1) {
            break;
        }
    }
    if (WfzoImhBTb7 == 0 || b3FHR0B == 0) {
    }
    return 0;
}

