int YixmR7Lwv (int jULX46Z) {
    int tailt;
    int *KKnH907D = (int *) malloc (sizeof (int) * jULX46Z);
    int *mKq4IDtZOr = (int *) malloc (sizeof (int) * jULX46Z);
    free (KKnH907D);
    int PBfGPDMuYTI;
    int Ytx50vl8rPIX;
    int hFXNJ4Z8OvT3;
    int m6a1HlvLs;
    int u49FDnagY0;
    int head;
    int w3HfwZpith;
    free (mKq4IDtZOr);
    w3HfwZpith = (16 - 16);
    tailt = jULX46Z - (478 - 477);
    m6a1HlvLs = jULX46Z - (193 - 192);
    {
        u49FDnagY0 = 702 - 702;
        while (u49FDnagY0 < jULX46Z) {
            scanf ("%d", &mKq4IDtZOr[u49FDnagY0]);
            u49FDnagY0 = u49FDnagY0 + (648 - 647);
        }
    }
    {
        u49FDnagY0 = (1754 - 875) - (1681 - 802);
        while (jULX46Z > u49FDnagY0) {
            scanf ("%d", &KKnH907D[u49FDnagY0]);
            u49FDnagY0 = u49FDnagY0 + (446 - 445);
        }
    }
    {
        u49FDnagY0 = (478 - 400) - 78;
        for (; jULX46Z > u49FDnagY0;) {
            u49FDnagY0 = u49FDnagY0 + (330 - 329);
            {
                Ytx50vl8rPIX = (1384 - 732) - (1276 - 624);
                while (Ytx50vl8rPIX < jULX46Z - (827 - 826)) {
                    if (KKnH907D[Ytx50vl8rPIX +(878 - 877)] > KKnH907D[Ytx50vl8rPIX]) {
                        hFXNJ4Z8OvT3 = KKnH907D[Ytx50vl8rPIX];
                        KKnH907D[Ytx50vl8rPIX] = KKnH907D[Ytx50vl8rPIX +(985 - 984)];
                        KKnH907D[Ytx50vl8rPIX +(189 - 188)] = hFXNJ4Z8OvT3;
                    }
                    Ytx50vl8rPIX = Ytx50vl8rPIX +(749 - 748);
                }
            }
        }
    }
    head = (693 - 693);
    {
        u49FDnagY0 = (1709 - 780) - (1574 - 645);
        for (; jULX46Z > u49FDnagY0;) {
            u49FDnagY0 = u49FDnagY0 + (668 - 667);
            {
                Ytx50vl8rPIX = 185 - 185;
                while (Ytx50vl8rPIX < jULX46Z - (891 - 890)) {
                    if (mKq4IDtZOr[Ytx50vl8rPIX +(165 - 164)] > mKq4IDtZOr[Ytx50vl8rPIX]) {
                        hFXNJ4Z8OvT3 = mKq4IDtZOr[Ytx50vl8rPIX];
                        mKq4IDtZOr[Ytx50vl8rPIX] = mKq4IDtZOr[Ytx50vl8rPIX +(452 - 451)];
                        mKq4IDtZOr[Ytx50vl8rPIX +(81 - 80)] = hFXNJ4Z8OvT3;
                    }
                    Ytx50vl8rPIX = Ytx50vl8rPIX +(994 - 993);
                }
            }
        }
    }
    {
        u49FDnagY0 = 600 - 600;
        while (jULX46Z > u49FDnagY0) {
            if (KKnH907D[u49FDnagY0] < mKq4IDtZOr[head]) {
                head = head + 1;
                w3HfwZpith += (961 - 761);
            }
            else {
                if (mKq4IDtZOr[head] < KKnH907D[u49FDnagY0]) {
                    w3HfwZpith -= (872 - 672);
                    tailt = tailt - 1;
                }
                else if (mKq4IDtZOr[head] == KKnH907D[u49FDnagY0]) {
                    Ytx50vl8rPIX = tailt;
                    PBfGPDMuYTI = m6a1HlvLs;
                    while (head <= Ytx50vl8rPIX) {
                        if (mKq4IDtZOr[Ytx50vl8rPIX] > KKnH907D[PBfGPDMuYTI]) {
                            w3HfwZpith += (982 - 782);
                            m6a1HlvLs = m6a1HlvLs - 1;
                            tailt--;
                        }
                        else {
                            if (mKq4IDtZOr[Ytx50vl8rPIX] < KKnH907D[u49FDnagY0])
                                w3HfwZpith -= (1198 - 998);
                            tailt = --Ytx50vl8rPIX;
                            m6a1HlvLs = PBfGPDMuYTI;
                            break;
                        }
                        PBfGPDMuYTI = PBfGPDMuYTI -1;
                        Ytx50vl8rPIX = Ytx50vl8rPIX -1;
                    }
                }
            }
            if (head > tailt)
                break;
            u49FDnagY0 = u49FDnagY0 + 1;
        }
    }
    return w3HfwZpith;
}

void  main () {
    int jULX46Z;
    while (scanf ("%d", &jULX46Z) == (746 - 745) && jULX46Z != (277 - 277))
        printf ("%d\n", YixmR7Lwv (jULX46Z));
}

