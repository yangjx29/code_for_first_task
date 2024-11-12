void  main () {
    int sec;
    int jko7UKy;
    int YjqYLp;
    sec = -1;
    scanf ("%d", &YjqYLp);
    getchar ();
    jko7UKy = YjqYLp;
    while (scanf ("%d", &YjqYLp) != EOF) {
        if (jko7UKy < YjqYLp) {
            sec = jko7UKy;
            jko7UKy = YjqYLp;
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
            continue;
        }
        else if (YjqYLp < jko7UKy && YjqYLp >= sec)
            sec = YjqYLp;
        getchar ();
    }
    if (sec == jko7UKy || sec == -1)
        ;
    else
        printf ("%d\n", sec);
}

