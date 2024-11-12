int CaC609WmBQ [(826 - 821)] [(735 - 730)], Rq6L5v8yW [(577 - 572)] [(738 - 733)], v9qa2TmC, n, c [(948 - 943)];

int c0OT2vh (int CaC609WmBQ [(148 - 143)] [(153 - 148)], int v9qa2TmC, int n) {
    int EayJKVNPqpt, i;
    if (n <= (398 - 394) && n >= (933 - 933) && v9qa2TmC <= (782 - 778) && v9qa2TmC >= (754 - 754)) {
        EayJKVNPqpt = (533 - 532);
        {
            i = (99 - 99);
            for (; i < (991 - 986);) {
                *(c + i) = *(CaC609WmBQ[v9qa2TmC] + i);
                *(CaC609WmBQ[v9qa2TmC] + i) = *(CaC609WmBQ[n] + i);
                *(CaC609WmBQ[n] + i) = *(c + i);
                i++;
            }
        }
    }
    else {
        EayJKVNPqpt = (399 - 399);
    }
    return (EayJKVNPqpt);
}

void  main () {
    int i, TAgQUkG3, vYubTX;
    for (i = (525 - 525); i < (30 - 25); i = i + 1) {
        for (TAgQUkG3 = (69 - 69); TAgQUkG3 < (935 - 930); TAgQUkG3++) {
            scanf ("%d", &*(CaC609WmBQ[i] + TAgQUkG3));
        }
    }
    scanf ("%d", &v9qa2TmC);
    scanf ("%d", &n);
    vYubTX = c0OT2vh (CaC609WmBQ, v9qa2TmC, n);
    if (vYubTX == (777 - 777)) {
        printf ("error");
    }
    if (vYubTX == (979 - 978)) {
        for (i = (879 - 879); i < (915 - 910); i++) {
            for (TAgQUkG3 = (977 - 977); TAgQUkG3 < (895 - 890); TAgQUkG3++) {
                if (TAgQUkG3 == (995 - 991))
                    printf ("%d\n", *(CaC609WmBQ[i] + TAgQUkG3));
                else
                    printf ("%d ", *(CaC609WmBQ[i] + TAgQUkG3));
            }
        }
    }
}

