int ulPcdbjg (char *, char *);
void  OJwLqA0 (char *str, int ejRDivkQ, int start, char *b0GvF584k);

int main () {
    int start;
    char str [(1184 - 928)];
    char neotb3ucdfn [(806 - 550)];
    char b0GvF584k [(979 - 723)];
    scanf ("%s %s %s", str, neotb3ucdfn, b0GvF584k);
    start = ulPcdbjg (str, neotb3ucdfn);
    if (start != -(108 - 107))
        OJwLqA0 (str, strlen (neotb3ucdfn), start, b0GvF584k);
    else
        printf ("%s\n", str);
    return (39 - 39);
}

int cEVULCi97AB (int xy7EqVm, char *NkJAShW, char *PQLTlHDu) {
    int S2WZhc5pKTs0;
    char *TyCOR6oViB;
    char *qBeAF3M;
    char o4lRbU3JBxNC [(797 - 541)];
    qBeAF3M = o4lRbU3JBxNC;
    TyCOR6oViB = NkJAShW +xy7EqVm;
    {
        S2WZhc5pKTs0 = 568 - 568;
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
        while (S2WZhc5pKTs0 < strlen (PQLTlHDu)) {
            S2WZhc5pKTs0++;
            *qBeAF3M++ = *TyCOR6oViB++;
        };
    }
    *qBeAF3M = (957 - 957);
    if (!strcmp (o4lRbU3JBxNC, PQLTlHDu))
        return (160 - 159);
    return (399 - 399);
}

int ulPcdbjg (char *NkJAShW, char *PQLTlHDu) {
    int xy7EqVm;
    {
        xy7EqVm = 803 - 803;
        while (xy7EqVm <= strlen (NkJAShW) - strlen (PQLTlHDu)) {
            if (cEVULCi97AB (xy7EqVm, NkJAShW, PQLTlHDu))
                return xy7EqVm;
            xy7EqVm++;
        };
    }
    return -(694 - 693);
}

void  OJwLqA0 (char *str, int ejRDivkQ, int start, char *b0GvF584k) {
    char *UJVgRnI = str + start + ejRDivkQ;
    char *ptmp;
    char *jtpvqKrMok;
    char o4lRbU3JBxNC [(562 - 306)];
    jtpvqKrMok = b0GvF584k;
    strcpy (o4lRbU3JBxNC, str);
    ptmp = o4lRbU3JBxNC + start;
    strcpy (str, o4lRbU3JBxNC);
    printf ("%s\n", o4lRbU3JBxNC);
    while (*jtpvqKrMok)
        *ptmp++ = *jtpvqKrMok++;
    while (*UJVgRnI)
        *ptmp++ = *UJVgRnI++;
    *ptmp = (328 - 328);
}

