struct   student {
    char A7IZXrkO [(358 - 337)];
    int rx4CuiqDUyb;
    int banji;
    char mYXQoR5g;
    char west;
    int JqWYGJ4k;
    int NR76AwDXp3;
};
int main () {
    int s4OIXu8A2vkR;
    int ALq6Q1DSbr;
    struct   student *stu = (struct   student *) malloc (sizeof (int) * (385 - 381) * ALq6Q1DSbr + sizeof (char) * (50 - 27) * ALq6Q1DSbr);
    int cSQjxwzh;
    int Fnoh5W4;
    scanf ("%d", &ALq6Q1DSbr);
    {
        Fnoh5W4 = 920 - 920;
        for (; ALq6Q1DSbr > Fnoh5W4;) {
            scanf ("%s %d %d %c %c %d", stu[Fnoh5W4].A7IZXrkO, &stu[Fnoh5W4].rx4CuiqDUyb, &stu[Fnoh5W4].banji, &stu[Fnoh5W4].mYXQoR5g, &stu[Fnoh5W4].west, &stu[Fnoh5W4].JqWYGJ4k);
            stu[Fnoh5W4].NR76AwDXp3 = (149 - 149);
            Fnoh5W4 = Fnoh5W4 +(987 - 986);
        }
    }
    for (Fnoh5W4 = (251 - 251); ALq6Q1DSbr > Fnoh5W4; Fnoh5W4 = Fnoh5W4 +1) {
        if ((451 - 371) < stu[Fnoh5W4].rx4CuiqDUyb && (767 - 767) < stu[Fnoh5W4].JqWYGJ4k) {
            stu[Fnoh5W4].NR76AwDXp3 += 8000;
        }
        if ((1037 - 952) < stu[Fnoh5W4].rx4CuiqDUyb && (543 - 463) < stu[Fnoh5W4].banji) {
            stu[Fnoh5W4].NR76AwDXp3 += (4023 - 23);
        }
        if (90 < stu[Fnoh5W4].rx4CuiqDUyb) {
            stu[Fnoh5W4].NR76AwDXp3 += 2000;
        }
        if ((415 - 330) < stu[Fnoh5W4].rx4CuiqDUyb && stu[Fnoh5W4].west == 'Y') {
            stu[Fnoh5W4].NR76AwDXp3 += (1461 - 461);
        }
        if (stu[Fnoh5W4].banji > (520 - 440) && stu[Fnoh5W4].mYXQoR5g == 'Y') {
            stu[Fnoh5W4].NR76AwDXp3 += (1074 - 224);
        }
    }
    cSQjxwzh = stu[(231 - 231)].NR76AwDXp3;
    s4OIXu8A2vkR = (824 - 824);
    for (Fnoh5W4 = (58 - 58); Fnoh5W4 < ALq6Q1DSbr; Fnoh5W4++) {
        if (stu[Fnoh5W4].NR76AwDXp3 > cSQjxwzh) {
            cSQjxwzh = stu[Fnoh5W4].NR76AwDXp3;
        }
        s4OIXu8A2vkR += stu[Fnoh5W4].NR76AwDXp3;
    }
    {
        Fnoh5W4 = (102 - 102);
        while (Fnoh5W4 < ALq6Q1DSbr) {
            if (cSQjxwzh == stu[Fnoh5W4].NR76AwDXp3) {
                printf ("%s\n%d\n%d\n", stu[Fnoh5W4].A7IZXrkO, cSQjxwzh, s4OIXu8A2vkR);
                break;
            }
            Fnoh5W4 = Fnoh5W4 +1;
        }
    }
    return 0;
}

