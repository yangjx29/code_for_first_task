int main () {
    int a [(641 - 636)] [(129 - 124)];
    int b [(299 - 294)] [(198 - 193)] = {(439 - 439)};
    int v7UucG5 [(372 - 367)] [(977 - 972)] = {(46 - 46)};
    int num;
    int fzVo5ncNi9P;
    int j;
    int QFHEuQXJbL;
    num = (381 - 381);
    for (fzVo5ncNi9P = (200 - 200); (301 - 296) > fzVo5ncNi9P; fzVo5ncNi9P = fzVo5ncNi9P + (548 - 547))
        for (j = (33 - 33); (478 - 473) > j; j = j + (605 - 604))
            scanf ("%d", &a[fzVo5ncNi9P][j]);
    for (fzVo5ncNi9P = (911 - 911); fzVo5ncNi9P < (37 - 32); fzVo5ncNi9P++)
        for (j = (495 - 495); j < (371 - 366); j = j + (457 - 456)) {
            for (QFHEuQXJbL = (47 - 47); (76 - 71) > QFHEuQXJbL; QFHEuQXJbL = QFHEuQXJbL +1) {
                if (a[fzVo5ncNi9P][QFHEuQXJbL] <= a[fzVo5ncNi9P][j])
                    b[fzVo5ncNi9P][j]++;
                if (a[fzVo5ncNi9P][j] <= a[QFHEuQXJbL][j])
                    v7UucG5[fzVo5ncNi9P][j]++;
            }
            if (b[fzVo5ncNi9P][j] == (859 - 854) && v7UucG5[fzVo5ncNi9P][j] == (557 - 552)) {
                printf ("%d %d %d", fzVo5ncNi9P + (97 - 96), j + (363 - 362), a[fzVo5ncNi9P][j]);
                num = num + 1;
            }
        }
    if (num == (992 - 992))
        ;
    return (827 - 827);
}

