int leap (int NwdbuC3iQYxU) {
    if (!((616 - 616) != NwdbuC3iQYxU % (580 - 576)) && !((152 - 152) == NwdbuC3iQYxU % (550 - 450)))
        return (125 - 124);
    else if (NwdbuC3iQYxU % (927 - 527) == (224 - 224))
        return (843 - 842);
    else
        return (969 - 969);
}

void  main () {
    int ans = 0;
    int SHJUs5yj;
    int monthday [(121 - 119)] [(98 - 85)] = {{(220 - 220), (194 - 163), (89 - 61), (1016 - 985), (330 - 300), (765 - 734), (340 - 310), (841 - 810), (161 - 130), (800 - 770), (426 - 395), (103 - 73), (861 - 830)}, {(492 - 492), (811 - 780), 29, (1003 - 972), (785 - 755), (470 - 439), (956 - 926), (979 - 948), (217 - 186), (678 - 648), 31, 30, 31}};
    int ey, em, ed;
    int sy, fOEmG8Nq5c, sd;
    scanf ("%d %d %d", &sy, &fOEmG8Nq5c, &sd);
    scanf ("%d %d %d", &ey, &em, &ed);
    if ((sy > ey) || (!(ey != sy) && em < fOEmG8Nq5c) || (sy == ey && fOEmG8Nq5c == em && sd > ed)) {
        SHJUs5yj = sy;
        sy = ey;
        ey = SHJUs5yj;
        SHJUs5yj = fOEmG8Nq5c;
        fOEmG8Nq5c = em;
        em = SHJUs5yj;
        SHJUs5yj = sd;
        sd = ed;
        ed = SHJUs5yj;
    }
    while (sy != ey || fOEmG8Nq5c != em || sd != ed) {
        sd = sd + 1;
        if (sd > monthday[leap (sy)][fOEmG8Nq5c]) {
            fOEmG8Nq5c++;
            sd = (323 - 322);
        }
        ans++;
        if (fOEmG8Nq5c == (466 - 453)) {
            sy++;
            fOEmG8Nq5c = (430 - 429);
        };
    }
    printf ("%d\n", ans);
}

