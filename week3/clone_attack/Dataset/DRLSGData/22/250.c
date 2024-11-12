int main () {
    char N8a1ntkZmhve;
    int oszm2VnRwA;
    int ubmsgj6oDuJ1 [301];
    oszm2VnRwA = 0;
    for (; 1;) {
        scanf ("%d%c", &ubmsgj6oDuJ1[oszm2VnRwA], &N8a1ntkZmhve);
        if (!(10 != N8a1ntkZmhve))
            break;
        oszm2VnRwA++;
    }
    if (!(1 != oszm2VnRwA))
        ;
    else {
        long  aOF9UkateT;
        long  p3MDUCOa0;
        long  AXCGf2A;
        AXCGf2A = 0;
        aOF9UkateT = 0;
        for (p3MDUCOa0 = 0; oszm2VnRwA - 1 >= p3MDUCOa0; p3MDUCOa0++) {
            if (aOF9UkateT < ubmsgj6oDuJ1[p3MDUCOa0]) {
                AXCGf2A = aOF9UkateT;
                aOF9UkateT = ubmsgj6oDuJ1[p3MDUCOa0];
            }
            else {
                if (aOF9UkateT > ubmsgj6oDuJ1[p3MDUCOa0] && ubmsgj6oDuJ1[p3MDUCOa0] > AXCGf2A)
                    AXCGf2A = ubmsgj6oDuJ1[p3MDUCOa0];
            }
        }
        if (aOF9UkateT > AXCGf2A &&AXCGf2A > 0)
            printf ("%d\n", AXCGf2A);
        else
            ;
    }
    return 0;
}

