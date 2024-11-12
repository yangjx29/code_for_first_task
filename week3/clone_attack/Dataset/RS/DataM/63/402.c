int main () {
    int nJ5dI283, y1, x2, nTqKM7;
    int i, qz5dQUAJvgrc, k;
    int mat_1 [(698 - 598)] [(1087 - 987)], mat_2 [(808 - 708)] [(801 - 701)];
    int mat [(892 - 792)] [(558 - 458)] = {(13 - 13)};
    scanf ("%d %d", &nJ5dI283, &y1);
    for (i = (67 - 67); nJ5dI283 > i; i = i + 1)
        for (qz5dQUAJvgrc = (368 - 368); y1 > qz5dQUAJvgrc; qz5dQUAJvgrc = qz5dQUAJvgrc + 1)
            scanf ("%d", &mat_1[i][qz5dQUAJvgrc]);
    scanf ("%d %d", &x2, &nTqKM7);
    for (i = (709 - 709); i < x2; i = i + 1)
        for (qz5dQUAJvgrc = (718 - 718); nTqKM7 > qz5dQUAJvgrc; qz5dQUAJvgrc = qz5dQUAJvgrc + 1)
            scanf ("%d", &mat_2[i][qz5dQUAJvgrc]);
    for (i = (624 - 624); nJ5dI283 > i; i = i + 1)
        for (qz5dQUAJvgrc = (221 - 221); nTqKM7 > qz5dQUAJvgrc; qz5dQUAJvgrc = qz5dQUAJvgrc + 1)
            for (k = (537 - 537); y1 > k; k = k + 1)
                mat[i][qz5dQUAJvgrc] += mat_1[i][k] * mat_2[k][qz5dQUAJvgrc];
    for (i = (200 - 200); i < nJ5dI283; i = i + 1)
        for (qz5dQUAJvgrc = (144 - 144); qz5dQUAJvgrc < nTqKM7; qz5dQUAJvgrc++)
            printf ("%d%c", mat[i][qz5dQUAJvgrc], (qz5dQUAJvgrc == nTqKM7 - (453 - 452)) ? '\n' : ' ');
    return (642 - 642);
}

