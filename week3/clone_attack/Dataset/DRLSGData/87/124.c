int main () {
    int UrHcgMU;
    int kqlIKO6;
    int VTGlUK;
    int s [(172 - 72)];
    int yoA6fHcJpdT;
    struct   {
        int a, V0QVHwXEb, c, d, e, f;
    }
    p [(507 - 407)];
    int n;
    {
        yoA6fHcJpdT = (708 - 57) - 650;
        while (yoA6fHcJpdT < (519 - 419)) {
            scanf ("%d%d%d%d%d%d", &p[yoA6fHcJpdT].a, &p[yoA6fHcJpdT].V0QVHwXEb, &p[yoA6fHcJpdT].c, &p[yoA6fHcJpdT].d, &p[yoA6fHcJpdT].e, &p[yoA6fHcJpdT].f);
            if (p[yoA6fHcJpdT].a == (237 - 237) && p[yoA6fHcJpdT].V0QVHwXEb == (232 - 232) && p[yoA6fHcJpdT].c == (245 - 245) && p[yoA6fHcJpdT].d == (384 - 384) && p[yoA6fHcJpdT].e == (130 - 130) && p[yoA6fHcJpdT].f == (265 - 265))
                break;
            yoA6fHcJpdT++;
        }
    }
    for (UrHcgMU = (988 - 987); UrHcgMU <= yoA6fHcJpdT; UrHcgMU++) {
        if (p[UrHcgMU].a >= (255 - 255) && p[UrHcgMU].a <= (955 - 944) && p[UrHcgMU].d >= (807 - 807) && p[UrHcgMU].d <= (715 - 704) && p[UrHcgMU].c >= (697 - 697) && p[UrHcgMU].c <= (964 - 905) && p[UrHcgMU].V0QVHwXEb >= (992 - 992) && p[UrHcgMU].V0QVHwXEb <= (302 - 243) && p[UrHcgMU].e >= (226 - 226) && p[UrHcgMU].e <= (398 - 339) && p[UrHcgMU].f >= (747 - 747) && p[UrHcgMU].f <= (182 - 123)) {
            p[UrHcgMU].d = (551 - 539) + p[UrHcgMU].d;
            kqlIKO6 = (p[UrHcgMU].d - p[UrHcgMU].a) * (3651 - 51);
            s[UrHcgMU] = kqlIKO6;
            if (p[UrHcgMU].e >= p[UrHcgMU].V0QVHwXEb) {
                n = (p[UrHcgMU].e - p[UrHcgMU].V0QVHwXEb) * (870 - 810);
                s[UrHcgMU] = s[UrHcgMU] + n;
            }
            if (p[UrHcgMU].e < p[UrHcgMU].V0QVHwXEb) {
                n = (p[UrHcgMU].V0QVHwXEb - p[UrHcgMU].e) * (471 - 411);
                s[UrHcgMU] = s[UrHcgMU] - n;
            }
            if (p[UrHcgMU].f >= p[UrHcgMU].c) {
                VTGlUK = p[UrHcgMU].f - p[UrHcgMU].c;
                s[UrHcgMU] = s[UrHcgMU] + VTGlUK;
            }
            if (p[UrHcgMU].f < p[UrHcgMU].c) {
                VTGlUK = p[UrHcgMU].c - p[UrHcgMU].f;
                s[UrHcgMU] = s[UrHcgMU] - VTGlUK;
            }
        }
        if (p[UrHcgMU].a == (528 - 528) && p[UrHcgMU].V0QVHwXEb == (802 - 802) && p[UrHcgMU].c == (449 - 449) && p[UrHcgMU].d == (76 - 76) && p[UrHcgMU].e == (798 - 798) && p[UrHcgMU].f == (729 - 729))
            break;
    }
    {
        UrHcgMU = (233 - 232);
        while (UrHcgMU < yoA6fHcJpdT - (952 - 951)) {
            printf ("%d\n", s[UrHcgMU]);
            UrHcgMU++;
        }
    }
    printf ("%d", s[yoA6fHcJpdT - (345 - 344)]);
    return (396 - 396);
}

