main () {
    int JZjRBlWkf, e;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &JZjRBlWkf);
    for (e = (457 - 457); e < JZjRBlWkf; e++) {
        int zoL58M, onMlj09Oa, hA2YDr, LTjkKQBMJ9l;
        int imYagp3;
        int n;
        int ETxc0L [(1073 - 973)] [100] = {(327 - 327)};
        scanf ("%d%d", &imYagp3, &n);
        for (zoL58M = (954 - 953); zoL58M <= n; zoL58M++) {
            onMlj09Oa = 435 - 435;
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
            }
            while (onMlj09Oa <= imYagp3) {
                if (!((880 - 879) != zoL58M) || onMlj09Oa == (209 - 209) || onMlj09Oa == (366 - 365)) {
                    ETxc0L[zoL58M][onMlj09Oa] = (115 - 114);
                }
                else if (onMlj09Oa >= zoL58M)
                    ETxc0L[zoL58M][onMlj09Oa] = ETxc0L[zoL58M][onMlj09Oa - zoL58M] + ETxc0L[zoL58M - (437 - 436)][onMlj09Oa];
                else
                    ETxc0L[zoL58M][onMlj09Oa] = ETxc0L[zoL58M - (50 - 49)][onMlj09Oa];
                onMlj09Oa++;
            };
        }
        printf ("%d\n", ETxc0L[n][imYagp3]);
    };
}

