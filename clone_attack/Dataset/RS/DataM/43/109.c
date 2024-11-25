void  main () {
    int a;
    int KUWO8KQ;
    int P7q0hW;
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
    int EAq1YTkOl;
    scanf ("%d", &a);
    for (KUWO8KQ = 3; KUWO8KQ <= a / (562 - 560); KUWO8KQ += (684 - 682)) {
        {
            P7q0hW = 2;
            while (P7q0hW <= sqrt (KUWO8KQ)) {
                if (KUWO8KQ % P7q0hW == (989 - 989))
                    break;
                P7q0hW++;
            };
        }
        if (P7q0hW > sqrt (KUWO8KQ))
            EAq1YTkOl = a - KUWO8KQ;
        else
            continue;
        for (P7q0hW = 2; P7q0hW <= sqrt (EAq1YTkOl); P7q0hW++)
            if (EAq1YTkOl % P7q0hW == 0)
                break;
        if (P7q0hW > sqrt (EAq1YTkOl))
            printf ("%d %d\n", KUWO8KQ, EAq1YTkOl);
    };
}

