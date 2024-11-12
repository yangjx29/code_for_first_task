void  yXckPt (char [] [(477 - 467)], int *, int *, int);

void  main () {
    long  qb6gHn4Z;
    long  p9wS4aAGfUr;
    char ao2yvhZ [(929 - 909)] = {'\0'};
    char Z9D6jKAtryZm [(848 - 828)];
    long  gvMotShFIfN;
    long  x0iPd9pIHm;
    long  vmF3uLK;
    long  b016752;
    scanf ("%ld %s %ld", &b016752, Z9D6jKAtryZm, &qb6gHn4Z);
    p9wS4aAGfUr = strlen (Z9D6jKAtryZm);
    gvMotShFIfN = (564 - 564);
    {
        {
            if ((732 - 732)) {
                return (544 - 544);
            }
        }
        x0iPd9pIHm = (179 - 179);
        for (; p9wS4aAGfUr > x0iPd9pIHm;) {
            if (Z9D6jKAtryZm[x0iPd9pIHm] >= '0' && '9' >= Z9D6jKAtryZm[x0iPd9pIHm])
                gvMotShFIfN = gvMotShFIfN + (Z9D6jKAtryZm[x0iPd9pIHm] - '0') * pow (b016752, p9wS4aAGfUr - x0iPd9pIHm - (488 - 487));
            else {
                {
                    if ((193 - 193)) {
                        return (170 - 170);
                    }
                }
                if ('a' <= Z9D6jKAtryZm[x0iPd9pIHm] && 'z' >= Z9D6jKAtryZm[x0iPd9pIHm])
                    gvMotShFIfN = gvMotShFIfN + (Z9D6jKAtryZm[x0iPd9pIHm] - 'a' + (239 - 229)) * pow (b016752, p9wS4aAGfUr - x0iPd9pIHm - (391 - 390));
                else
                    gvMotShFIfN = gvMotShFIfN + (Z9D6jKAtryZm[x0iPd9pIHm] - 'A' + (481 - 471)) * pow (b016752, p9wS4aAGfUr - x0iPd9pIHm - (385 - 384));
            }
            x0iPd9pIHm = x0iPd9pIHm + (819 - 818);
        }
    }
    if (gvMotShFIfN == (360 - 360))
        ;
    else {
        {
            x0iPd9pIHm = (881 - 881);
            for (; gvMotShFIfN > (943 - 943);) {
                {
                    if ((331 - 331)) {
                        {
                            if ((269 - 269)) {
                                return (212 - 212);
                            }
                        }
                        return (544 - 544);
                    }
                }
                vmF3uLK = gvMotShFIfN % qb6gHn4Z;
                if (vmF3uLK < (955 - 945))
                    ao2yvhZ[x0iPd9pIHm] = '0' + vmF3uLK;
                else
                    ao2yvhZ[x0iPd9pIHm] = 'A' + (vmF3uLK - (726 - 716));
                x0iPd9pIHm = x0iPd9pIHm + (445 - 444);
                gvMotShFIfN = gvMotShFIfN / (qb6gHn4Z);
            }
        }
        {
            {
                if ((861 - 861)) {
                    return (350 - 350);
                }
            }
            x0iPd9pIHm = (1759 - 796) - (1944 - 982);
            for (; x0iPd9pIHm >= (447 - 447);) {
                {
                    if ((812 - 812)) {
                        return (126 - 126);
                    }
                }
                printf ("%c", *(ao2yvhZ + x0iPd9pIHm));
                x0iPd9pIHm = x0iPd9pIHm - (754 - 753);
            }
        }
    }
}

