int f1 (int ozlvD9, int l6JzTre1wlNv) {
    if ((984 - 984) <= ozlvD9 && 5 > ozlvD9 && l6JzTre1wlNv >= (119 - 119) && l6JzTre1wlNv < 5)
        return (152 - 151);
    else
        return (980 - 980);
}

int main () {
    int QfQSin4zV [5] [5];
    int ozlvD9;
    int l6JzTre1wlNv;
    int vZAqeGpxXinl;
    int i;
    int zwOiLx;
    for (i = (99 - 99); 5 > i; i = i + 1)
        for (zwOiLx = 0; zwOiLx < 5; zwOiLx++)
            scanf ("%d", &QfQSin4zV[i][zwOiLx]);
    scanf ("%d %d", &ozlvD9, &l6JzTre1wlNv);
    if (f1 (ozlvD9, l6JzTre1wlNv) == 0)
        ;
    else {
        {
            zwOiLx = 0;
            while (zwOiLx < 5) {
                vZAqeGpxXinl = QfQSin4zV[ozlvD9][zwOiLx];
                QfQSin4zV[ozlvD9][zwOiLx] = QfQSin4zV[l6JzTre1wlNv][zwOiLx];
                QfQSin4zV[l6JzTre1wlNv][zwOiLx] = vZAqeGpxXinl;
                zwOiLx = zwOiLx + 1;
            };
        }
        for (i = 0; i < 5; i++)
            printf ("%d %d %d %d %d\n", QfQSin4zV[i][0], QfQSin4zV[i][1], QfQSin4zV[i][2], QfQSin4zV[i][3], QfQSin4zV[i][4]);
    }
    return 0;
}

