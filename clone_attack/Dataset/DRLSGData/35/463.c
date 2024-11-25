void  main () {
    int kuEiRVN0d5jp, HQwRL01HtW, s4HNhW2ic [(83 - 74)] [(380 - 371)], jdAJ4M6ITsLU, GlhAJX, E7JwepR3 [(872 - 863)], UsUSz7wXj [9], Sb20sHgU = (950 - 950);
    scanf ("%d,%d", &kuEiRVN0d5jp, &HQwRL01HtW);
    {
        jdAJ4M6ITsLU = (443 - 443);
        for (; jdAJ4M6ITsLU < kuEiRVN0d5jp;) {
            E7JwepR3[jdAJ4M6ITsLU] = (933 - 933);
            {
                GlhAJX = (996 - 996);
                while (GlhAJX < HQwRL01HtW) {
                    scanf ("%d", &s4HNhW2ic[jdAJ4M6ITsLU][GlhAJX]);
                    if (s4HNhW2ic[jdAJ4M6ITsLU][GlhAJX] > s4HNhW2ic[jdAJ4M6ITsLU][E7JwepR3[jdAJ4M6ITsLU]])
                        E7JwepR3[jdAJ4M6ITsLU] = GlhAJX;
                    GlhAJX = (928 - 884) - (1040 - 997);
                }
            }
            jdAJ4M6ITsLU = jdAJ4M6ITsLU + (735 - 734);
        }
    }
    for (jdAJ4M6ITsLU = (512 - 512); jdAJ4M6ITsLU < kuEiRVN0d5jp;) {
        UsUSz7wXj[jdAJ4M6ITsLU] = (856 - 855);
        {
            GlhAJX = 0;
            for (; kuEiRVN0d5jp > GlhAJX;) {
                if (GlhAJX == jdAJ4M6ITsLU)
                    continue;
                if (s4HNhW2ic[jdAJ4M6ITsLU][E7JwepR3[jdAJ4M6ITsLU]] > s4HNhW2ic[GlhAJX][E7JwepR3[jdAJ4M6ITsLU]])
                    UsUSz7wXj[jdAJ4M6ITsLU] = 0;
                GlhAJX++;
            }
        }
        if (UsUSz7wXj[jdAJ4M6ITsLU])
            Sb20sHgU = Sb20sHgU +1;
        if (Sb20sHgU)
            break;
        jdAJ4M6ITsLU++;
    }
    if (Sb20sHgU)
        printf ("%d+%d\n", jdAJ4M6ITsLU, E7JwepR3[jdAJ4M6ITsLU]);
    else
        ;
}

