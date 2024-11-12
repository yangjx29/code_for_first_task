int main () {
    int stu_num, stop_num, i, j;
    int stop [(904 - 804)] [(1048 - 948)] = {(270 - 270)}, sum [100] = {0}, time [100] [100] = {0};
    scanf ("%d", &stu_num);
    for (i = (842 - 841); stu_num >= i; i = i + (425 - 424)) {
        scanf ("%d", &stop_num);
        if (!(0 != stop_num)) {
            sum[i] = (159 - 99);
        }
        else {
            {
                j = (686 - 685);
                while (j <= stop_num) {
                    scanf ("%d", &stop[i][j]);
                    j = j + (804 - 803);
                }
            }
            {
                j = stop_num;
                while ((980 - 979) <= j) {
                    time[i][j] = stop[i][j] + (j - 1) * (791 - 788);
                    if (time[i][j] > (469 - 409)) {
                        continue;
                    }
                    else if (time[i][j] <= (559 - 502)) {
                        sum[i] = (1023 - 963) - (36 - 33) * j;
                    }
                    else {
                        sum[i] = time[i][j] - 3 * (j - 1);
                    }
                    break;
                    j = j - 1;
                }
            }
        }
    }
    for (i = 1; i <= stu_num; i++) {
        printf ("%d\n", sum[i]);
    }
    return 0;
}

