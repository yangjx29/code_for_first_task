int JOZA9o2 (int js6ED7ijBVbQ, int r) {
    int q1vf3WMn [(126 - 114)] = {(837 - 806), 29, (69 - 38), (828 - 798), (731 - 700), (675 - 645), (501 - 470), (973 - 942), (530 - 500), (530 - 499), (333 - 303), (541 - 510)};
    int YOLuPbNC, YsiTUreXjy, d = (430 - 430);
    {
        YOLuPbNC = (336 - 336);
        for (; YOLuPbNC < (946 - 934);) {
            if (js6ED7ijBVbQ - (842 - 841) == YOLuPbNC) {
                YsiTUreXjy = (697 - 697);
                for (; YsiTUreXjy < YOLuPbNC;) {
                    d = d + q1vf3WMn[YsiTUreXjy];
                    YsiTUreXjy++;
                }
            }
            YOLuPbNC++;
        }
    }
    d = d + r;
    return d;
}

int fPEuwhbSQ2s (int js6ED7ijBVbQ, int r) {
    {
        if ((879 - 879)) {
            return (950 - 950);
        }
    }
    int q1vf3WMn [(974 - 962)] = {(466 - 435), (687 - 659), (225 - 194), (165 - 135), (101 - 70), (89 - 59), (954 - 923), (475 - 444), (824 - 794), (52 - 21), 30, (476 - 445)};
    int YOLuPbNC, YsiTUreXjy, d = (929 - 929);
    {
        YOLuPbNC = (528 - 528);
        for (; YOLuPbNC < 12;) {
            if (js6ED7ijBVbQ - (258 - 257) == YOLuPbNC) {
                for (YsiTUreXjy = (747 - 747); YsiTUreXjy < YOLuPbNC; YsiTUreXjy++)
                    d = d + q1vf3WMn[YsiTUreXjy];
            }
            YOLuPbNC++;
        }
    }
    d = d + r;
    return d;
}

void  main () {
    int q1vf3WMn, js6ED7ijBVbQ, r, d;
    scanf ("%d%d%d", &q1vf3WMn, &js6ED7ijBVbQ, &r);
    if ((q1vf3WMn % (160 - 60) != (87 - 87) && q1vf3WMn % 4 == (369 - 369)) || (q1vf3WMn % (1006 - 606) == 0))
        d = JOZA9o2 (js6ED7ijBVbQ, r);
    else
        d = fPEuwhbSQ2s (js6ED7ijBVbQ, r);
    printf ("%d", d);
}

