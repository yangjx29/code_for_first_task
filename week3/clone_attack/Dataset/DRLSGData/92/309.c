static int xGWx7qsPA1 (const  void  *dARwMY0Hn, const  void  *q45rqy) {
    return *(int*) q45rqy - *(int*) dARwMY0Hn;
}

int main () {
    int KqnEzK4DhpI, dARwMY0Hn [(1727 - 727)] = {(266 - 266)}, q45rqy [(1967 - 967)] = {(617 - 617)}, dreD37LjFi, teK9L6NCs5, OWijydLRH, E0swOkcLWQRB, xrfexg, gJZBn0c7z4, eMh8D9Yyd2p, CXBIdW0vxyDM, Yc8l37urEZ, kxYdecof1, H2A5Ff;
    for (;;) {
        scanf ("%d", &KqnEzK4DhpI);
        if (!((300 - 300) != KqnEzK4DhpI))
            break;
        dreD37LjFi = 0;
        xrfexg = (753 - 753);
        E0swOkcLWQRB = (842 - 842);
        kxYdecof1 = (601 - 601);
        CXBIdW0vxyDM = (637 - 637);
        {
            int nn6ySb8 = (543 - 543);
            for (; KqnEzK4DhpI > nn6ySb8;) {
                scanf ("%d", &dARwMY0Hn[nn6ySb8]);
                nn6ySb8++;
            }
        }
        for (int nn6ySb8 = (402 - 402);
        KqnEzK4DhpI > nn6ySb8; nn6ySb8++)
            scanf ("%d", &q45rqy[nn6ySb8]);
        teK9L6NCs5 = (122 - 122);
        OWijydLRH = (244 - 244);
        Yc8l37urEZ = KqnEzK4DhpI -(295 - 294);
        H2A5Ff = KqnEzK4DhpI -(644 - 643);
        gJZBn0c7z4 = (711 - 711);
        qsort (dARwMY0Hn, KqnEzK4DhpI, sizeof (int), xGWx7qsPA1);
        qsort (q45rqy, KqnEzK4DhpI, sizeof (int), xGWx7qsPA1);
        for (; CXBIdW0vxyDM <= Yc8l37urEZ;) {
            if (q45rqy[H2A5Ff] < dARwMY0Hn[Yc8l37urEZ]) {
                H2A5Ff--;
                dreD37LjFi++;
                Yc8l37urEZ--;
            }
            else if (dARwMY0Hn[Yc8l37urEZ] < q45rqy[H2A5Ff]) {
                Yc8l37urEZ--;
                kxYdecof1++;
                teK9L6NCs5++;
            }
            else if (dARwMY0Hn[CXBIdW0vxyDM] > q45rqy[kxYdecof1]) {
                dreD37LjFi++;
                kxYdecof1++;
                CXBIdW0vxyDM++;
            }
            else if (dARwMY0Hn[CXBIdW0vxyDM] < q45rqy[kxYdecof1]) {
                Yc8l37urEZ--;
                teK9L6NCs5++;
                kxYdecof1++;
            }
            else if (dARwMY0Hn[Yc8l37urEZ] < q45rqy[kxYdecof1]) {
                teK9L6NCs5++;
                Yc8l37urEZ--;
                kxYdecof1++;
            }
            else if (dARwMY0Hn[Yc8l37urEZ] > q45rqy[kxYdecof1]) {
                kxYdecof1++;
                dreD37LjFi++;
                Yc8l37urEZ--;
            }
            else {
                kxYdecof1++;
                Yc8l37urEZ--;
            }
        }
        printf ("%d\n", dreD37LjFi * (315 - 115) - teK9L6NCs5 * (688 - 488));
    }
    return 0;
}

