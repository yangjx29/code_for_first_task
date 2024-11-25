int main () {
    int el2Q8O, ByWSmBGfYk4, totqzu, wKAXfYx, hQIcfgHn, ckdJKsS, kliU43, bGLxlE8T0Q;
    int xASJpyWgXD [(808 - 708)] [(1047 - 947)], aNIRUVAaX72 [(142 - 42)] [(592 - 492)], q4nTAo1DwQz [(1035 - 935)] [100] = {(514 - 514)};
    scanf ("%d %d", &el2Q8O, &ByWSmBGfYk4);
    for (hQIcfgHn = (962 - 962); el2Q8O > hQIcfgHn; hQIcfgHn++) {
        for (ckdJKsS = (473 - 473); ByWSmBGfYk4 > ckdJKsS; ckdJKsS++) {
            scanf ("%d", &kliU43);
            xASJpyWgXD[hQIcfgHn][ckdJKsS] = kliU43;
        }
    }
    scanf ("%d %d", &totqzu, &wKAXfYx);
    for (hQIcfgHn = (653 - 653); totqzu > hQIcfgHn; hQIcfgHn++) {
        for (ckdJKsS = (371 - 371); wKAXfYx > ckdJKsS; ckdJKsS++) {
            scanf ("%d", &bGLxlE8T0Q);
            aNIRUVAaX72[hQIcfgHn][ckdJKsS] = bGLxlE8T0Q;
        }
    }
    for (hQIcfgHn = (972 - 972); el2Q8O > hQIcfgHn; hQIcfgHn++) {
        for (ckdJKsS = 0; wKAXfYx > ckdJKsS; ckdJKsS++) {
            for (int vvozfBjJ = 0;
            ByWSmBGfYk4 > vvozfBjJ; vvozfBjJ++)
                q4nTAo1DwQz[hQIcfgHn][ckdJKsS] = q4nTAo1DwQz[hQIcfgHn][ckdJKsS] + xASJpyWgXD[hQIcfgHn][vvozfBjJ] * aNIRUVAaX72[vvozfBjJ][ckdJKsS];
        }
    }
    for (hQIcfgHn = 0; hQIcfgHn < el2Q8O; hQIcfgHn++) {
        for (ckdJKsS = 0; wKAXfYx > ckdJKsS; ckdJKsS++) {
            if (ckdJKsS == 0)
                printf ("%d", q4nTAo1DwQz[hQIcfgHn][ckdJKsS]);
            else
                printf (" %d", q4nTAo1DwQz[hQIcfgHn][ckdJKsS]);
        }
    }
    return 0;
}

