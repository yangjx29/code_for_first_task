int main (int ze9R8Coq7kEW, char *Rz21DdBhjg []) {
    char O8OKGAE [20], PCKXqPlWt, dG5r2tS0LHb, vuVmJxgM [20];
    int M7uyjdHLiCef, kN2Esoyz, BAViSDkQn;
    int opohWQ, JvCuEDyme6Hc = 0, Paq9piCjov0, swvhrnR = 0, yNpF8KzrgW = 0;
    scanf ("%d\n", &opohWQ);
    for (Paq9piCjov0 = 0; Paq9piCjov0 < opohWQ; Paq9piCjov0 = Paq9piCjov0 +1) {
        scanf ("%s %d %d %c %c %d", O8OKGAE, &M7uyjdHLiCef, &kN2Esoyz, &PCKXqPlWt, &dG5r2tS0LHb, &BAViSDkQn);
        swvhrnR = 0;
        if (M7uyjdHLiCef > 80 && BAViSDkQn > 0)
            swvhrnR += 8000;
        if (85 < M7uyjdHLiCef &&80 < kN2Esoyz)
            swvhrnR += 4000;
        if (M7uyjdHLiCef > 90)
            swvhrnR += 2000;
        if ('Y' == dG5r2tS0LHb && M7uyjdHLiCef > 85)
            swvhrnR += 1000;
        if ('Y' == PCKXqPlWt &&kN2Esoyz > 80) {
            swvhrnR += 850;
        }
        JvCuEDyme6Hc += swvhrnR;
        if (swvhrnR > yNpF8KzrgW) {
            yNpF8KzrgW = swvhrnR;
            strcpy (vuVmJxgM, O8OKGAE);
        }
    }
    printf ("%s\n%d\n%d\n", vuVmJxgM, yNpF8KzrgW, JvCuEDyme6Hc);
    return 0;
}

