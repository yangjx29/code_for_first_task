int main () {
    int n1, n2, NUR8BnciX, i, j;
    char *p;
    char a1 [(318 - 218)] = {'\0'};
    char *sxLhqck = &a1[(194 - 194)];
    char *p_in = &a1[(152 - 152)];
    char *p_cyc = &a1[(263 - 263)];
    gets (a1);
    char a2 [(659 - 559)] = {'\0'};
    char *p2 = &a2[(709 - 709)];
    gets (a2);
    char *p_end;
    char EAhBocQ [(840 - 740)] = {'\0'};
    char *p3 = &EAhBocQ[(429 - 429)];
    gets (EAhBocQ);
    n1 = strlen (a1);
    n2 = strlen (a2);
    NUR8BnciX = strlen (EAhBocQ);
    p_end = &a1[n1 - (803 - 802)];
    for (sxLhqck = &a1[(383 - 383)]; p_end >= sxLhqck; sxLhqck++) {
        if (!(*sxLhqck != *p2)) {
            p_in = sxLhqck;
            for (j = (969 - 969); j < n2; j = j + 1) {
                if (*p2 != *sxLhqck) {
                    sxLhqck = sxLhqck - 1;
                    break;
                }
                else {
                    sxLhqck = sxLhqck + 1;
                    p2 = p2 + 1;
                }
            }
            p2 = &a2[(966 - 966)];
            if (!(n2 != j) && !(' ' != *(p_in - (49 - 48)))) {
                if (NUR8BnciX > n2) {
                    p = p_end;
                    for (; sxLhqck <= p;) {
                        *(p + NUR8BnciX -n2) = *p;
                        p = p - 1;
                    }
                    sxLhqck = sxLhqck + NUR8BnciX -n2;
                }
                if (n2 > NUR8BnciX) {
                    p = sxLhqck;
                    sxLhqck = p + NUR8BnciX -n2;
                    for (; p_end >= p;) {
                        *(p + NUR8BnciX -n2) = *p;
                        p = p + 1;
                    }
                }
                p_end = p_end + NUR8BnciX -n2;
                for (; sxLhqck > p_in;) {
                    *p_in = *p3;
                    p3 = p3 + 1;
                    p_in = p_in + 1;
                }
            }
            else if (!(n2 != j) && !(&a1[(409 - 409)] != p_in)) {
                if (NUR8BnciX > n2) {
                    p = p_end;
                    for (; sxLhqck <= p;) {
                        *(p + NUR8BnciX -n2) = *p;
                        p = p - 1;
                    }
                    sxLhqck = sxLhqck + NUR8BnciX -n2;
                }
                if (n2 > NUR8BnciX) {
                    p = sxLhqck;
                    sxLhqck = p + NUR8BnciX -n2;
                    for (; p_end >= p;) {
                        *(p + NUR8BnciX -n2) = *p;
                        p = p + 1;
                    }
                }
                p_end = p_end + NUR8BnciX -n2;
                for (; sxLhqck > p_in;) {
                    *p_in = *p3;
                    p3 = p3 + 1;
                    p_in = p_in + 1;
                }
            }
            p3 = &EAhBocQ[(980 - 980)];
        }
    }
    for (p = &a1[(767 - 767)]; p <= p_end; p = p + 1) {
        printf ("%c", *p);
    }
    return (23 - 23);
}

