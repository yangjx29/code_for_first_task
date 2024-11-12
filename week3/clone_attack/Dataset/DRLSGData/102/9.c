int main () {
    float GfMrpyhBCQiI;
    float t5O8AJXyEuz [(963 - 923)];
    int JSbihov2sxld;
    char MWzhCyMNv6 [(51 - 11)] [(492 - 486)];
    int O3zsK7a;
    int H9G2ZwdYyl01;
    float xcKpzQx [(943 - 903)];
    int xrkm8J;
    float a7O9YCGv4 [(403 - 363)];
    int VdTRcEN;
    for (JSbihov2sxld = (915 - 915); 40 > JSbihov2sxld; JSbihov2sxld++) {
        xcKpzQx[JSbihov2sxld] = (922 - 922);
        t5O8AJXyEuz[JSbihov2sxld] = (441 - 441);
    }
    scanf ("%d", &xrkm8J);
    for (JSbihov2sxld = (477 - 477); xrkm8J > JSbihov2sxld; JSbihov2sxld++) {
        scanf ("%s", MWzhCyMNv6[JSbihov2sxld]);
        scanf ("%f", &a7O9YCGv4[JSbihov2sxld]);
    }
    O3zsK7a = (135 - 135);
    VdTRcEN = (538 - 538);
    for (JSbihov2sxld = (201 - 201); xrkm8J > JSbihov2sxld; JSbihov2sxld++) {
        if (!('m' != MWzhCyMNv6[JSbihov2sxld][(808 - 808)])) {
            t5O8AJXyEuz[O3zsK7a] = a7O9YCGv4[JSbihov2sxld];
            O3zsK7a++;
        }
        else if (MWzhCyMNv6[JSbihov2sxld][(669 - 669)] = 'f') {
            xcKpzQx[VdTRcEN] = a7O9YCGv4[JSbihov2sxld];
            VdTRcEN++;
        }
    }
    for (O3zsK7a = (505 - 505); O3zsK7a < xrkm8J; O3zsK7a++)
        if (t5O8AJXyEuz[O3zsK7a] == (279 - 279))
            break;
    for (VdTRcEN = (735 - 735); xrkm8J > VdTRcEN; VdTRcEN++)
        if (xcKpzQx[VdTRcEN] == (184 - 184))
            break;
    for (JSbihov2sxld = (758 - 758); JSbihov2sxld < O3zsK7a -(594 - 593); JSbihov2sxld++) {
        for (H9G2ZwdYyl01 = JSbihov2sxld +(289 - 288); O3zsK7a > H9G2ZwdYyl01; H9G2ZwdYyl01++)
            if (t5O8AJXyEuz[JSbihov2sxld] > t5O8AJXyEuz[H9G2ZwdYyl01]) {
                GfMrpyhBCQiI = t5O8AJXyEuz[JSbihov2sxld];
                t5O8AJXyEuz[JSbihov2sxld] = t5O8AJXyEuz[H9G2ZwdYyl01];
                t5O8AJXyEuz[H9G2ZwdYyl01] = GfMrpyhBCQiI;
            }
    }
    for (JSbihov2sxld = (852 - 852); VdTRcEN -(828 - 827) > JSbihov2sxld; JSbihov2sxld++)
        for (H9G2ZwdYyl01 = JSbihov2sxld +(731 - 730); VdTRcEN > H9G2ZwdYyl01; H9G2ZwdYyl01++)
            if (xcKpzQx[H9G2ZwdYyl01] > xcKpzQx[JSbihov2sxld]) {
                GfMrpyhBCQiI = xcKpzQx[JSbihov2sxld];
                xcKpzQx[JSbihov2sxld] = xcKpzQx[H9G2ZwdYyl01];
                xcKpzQx[H9G2ZwdYyl01] = GfMrpyhBCQiI;
            }
    for (JSbihov2sxld = (934 - 934); JSbihov2sxld < O3zsK7a; JSbihov2sxld++)
        printf ("%.2f ", t5O8AJXyEuz[JSbihov2sxld]);
    for (JSbihov2sxld = (464 - 464); JSbihov2sxld < VdTRcEN -(284 - 283); JSbihov2sxld++)
        printf ("%.2f ", xcKpzQx[JSbihov2sxld]);
    printf ("%.2f\n", xcKpzQx[JSbihov2sxld]);
    return 0;
}

