int d2sKHnI6U (int mdxfBU) {
    if (mdxfBU % 7 == 0) {
        return 0;
    }
    {
        int cLMx8zBU1JDh;
        cLMx8zBU1JDh = mdxfBU;
        while (cLMx8zBU1JDh > 0) {
            if (cLMx8zBU1JDh % 10 == 7) {
                return 0;
            }
            cLMx8zBU1JDh = cLMx8zBU1JDh / 10;
        };
    }
    return 1;
}

int main () {
    int Up4YfwsFu;
    int WOqtEWgP = 0;
    scanf ("%d", &Up4YfwsFu);
    {
        int choYgafEe = 1;
        while (choYgafEe <= Up4YfwsFu) {
            if (d2sKHnI6U (choYgafEe)) {
                WOqtEWgP = WOqtEWgP +choYgafEe * choYgafEe;
            }
            choYgafEe = choYgafEe + 1;
        };
    }
    printf ("%d", WOqtEWgP);
    return 0;
}

