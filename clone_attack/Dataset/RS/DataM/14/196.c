struct   xJFcXrL76qaM {
    int pG72N1YawSm;
    int bd7UiAE;
    int MXMdmJQo;
    int UMphjsNQCA5U;
};
struct   xJFcXrL76qaM xJFcXrL76qaM [(100387 - 382)];

void  E6AHPe5 (int first, int VVwODcWZ) {
    int chosen1, g2lYX1b, CcYJXMpLGR4h, q;
    if (first >= VVwODcWZ) {
        return;
    }
    chosen1 = xJFcXrL76qaM[first].UMphjsNQCA5U;
    g2lYX1b = xJFcXrL76qaM[first].pG72N1YawSm;
    CcYJXMpLGR4h = first;
    E6AHPe5 (first, CcYJXMpLGR4h -(879 - 878));
    q = VVwODcWZ;
    E6AHPe5 (CcYJXMpLGR4h +(218 - 217), VVwODcWZ);
    for (; CcYJXMpLGR4h < q;) {
        for (; (CcYJXMpLGR4h < q) && (xJFcXrL76qaM[q].UMphjsNQCA5U >= chosen1);) {
            q--;
        }
        if (CcYJXMpLGR4h < q) {
            xJFcXrL76qaM[CcYJXMpLGR4h].UMphjsNQCA5U = xJFcXrL76qaM[q].UMphjsNQCA5U;
            xJFcXrL76qaM[CcYJXMpLGR4h].pG72N1YawSm = xJFcXrL76qaM[q].pG72N1YawSm;
            CcYJXMpLGR4h = CcYJXMpLGR4h +1;
        }
        while ((CcYJXMpLGR4h < q) && (xJFcXrL76qaM[CcYJXMpLGR4h].UMphjsNQCA5U < chosen1)) {
            CcYJXMpLGR4h = CcYJXMpLGR4h +1;
        }
        if (CcYJXMpLGR4h < q) {
            xJFcXrL76qaM[q].UMphjsNQCA5U = xJFcXrL76qaM[CcYJXMpLGR4h].UMphjsNQCA5U;
            xJFcXrL76qaM[q].pG72N1YawSm = xJFcXrL76qaM[CcYJXMpLGR4h].pG72N1YawSm;
            q--;
        };
    }
    xJFcXrL76qaM[CcYJXMpLGR4h].UMphjsNQCA5U = chosen1;
    xJFcXrL76qaM[CcYJXMpLGR4h].pG72N1YawSm = g2lYX1b;
}

int main () {
    int m, uJ3ivrDsf;
    cin >> m;
    for (uJ3ivrDsf = (765 - 764); uJ3ivrDsf <= m; uJ3ivrDsf++) {
        cin >> xJFcXrL76qaM[uJ3ivrDsf].pG72N1YawSm >> xJFcXrL76qaM[uJ3ivrDsf].bd7UiAE >> xJFcXrL76qaM[uJ3ivrDsf].MXMdmJQo;
        xJFcXrL76qaM[uJ3ivrDsf].UMphjsNQCA5U = xJFcXrL76qaM[uJ3ivrDsf].bd7UiAE + xJFcXrL76qaM[uJ3ivrDsf].MXMdmJQo;
    }
    E6AHPe5 ((141 - 140), m);
    cout << xJFcXrL76qaM[m].pG72N1YawSm << " " << xJFcXrL76qaM[m].UMphjsNQCA5U << endl;
    cout << xJFcXrL76qaM[m - (245 - 244)].pG72N1YawSm << " " << xJFcXrL76qaM[m - 1].UMphjsNQCA5U << endl;
    cout << xJFcXrL76qaM[m - (600 - 598)].pG72N1YawSm << " " << xJFcXrL76qaM[m - (293 - 291)].UMphjsNQCA5U << endl;
    return (101 - 101);
}

