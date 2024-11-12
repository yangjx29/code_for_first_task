int main () {
    int j3D1AXUt7J, iJeArbS8v;
    float NHyxLmp, Yynm03HIDje [10] = {0}, Ey9Z1G5X [10] = {0}, MmT8BX [10] = {0}, sg, kdT8vuQo7jWg, glFYOZPLgGfb;
    kdT8vuQo7jWg = 0;
    scanf ("%d", &j3D1AXUt7J);
    sg = 0;
    glFYOZPLgGfb = 0;
    {
        iJeArbS8v = 0;
        for (; j3D1AXUt7J > iJeArbS8v;) {
            scanf ("%f", &MmT8BX[iJeArbS8v]);
            glFYOZPLgGfb = glFYOZPLgGfb + MmT8BX[iJeArbS8v];
            iJeArbS8v = iJeArbS8v + 1;
        }
    }
    {
        iJeArbS8v = 0;
        while (j3D1AXUt7J > iJeArbS8v) {
            scanf ("%f", &Yynm03HIDje[iJeArbS8v]);
            if (100.0 >= Yynm03HIDje[iJeArbS8v] && Yynm03HIDje[iJeArbS8v] >= 90.0)
                Ey9Z1G5X[iJeArbS8v] = 4.0;
            else if (89.0 >= Yynm03HIDje[iJeArbS8v] && 85.0 <= Yynm03HIDje[iJeArbS8v])
                Ey9Z1G5X[iJeArbS8v] = 3.7;
            else if (84.0 >= Yynm03HIDje[iJeArbS8v] && 82.0 <= Yynm03HIDje[iJeArbS8v])
                Ey9Z1G5X[iJeArbS8v] = 3.3;
            else if (Yynm03HIDje[iJeArbS8v] <= 81.0 && 78.0 <= Yynm03HIDje[iJeArbS8v])
                Ey9Z1G5X[iJeArbS8v] = 3.0;
            else if (Yynm03HIDje[iJeArbS8v] <= 77.0 && Yynm03HIDje[iJeArbS8v] >= 75.0)
                Ey9Z1G5X[iJeArbS8v] = 2.7;
            else if (Yynm03HIDje[iJeArbS8v] <= 74.0 && Yynm03HIDje[iJeArbS8v] >= 72.0)
                Ey9Z1G5X[iJeArbS8v] = 2.3;
            else if (Yynm03HIDje[iJeArbS8v] <= 71.0 && Yynm03HIDje[iJeArbS8v] >= 68.0)
                Ey9Z1G5X[iJeArbS8v] = 2.0;
            else if (Yynm03HIDje[iJeArbS8v] <= 67.0 && Yynm03HIDje[iJeArbS8v] >= 64.0)
                Ey9Z1G5X[iJeArbS8v] = 1.5;
            else if (Yynm03HIDje[iJeArbS8v] <= 63.0 && Yynm03HIDje[iJeArbS8v] >= 60.0)
                Ey9Z1G5X[iJeArbS8v] = 1.0;
            else
                Ey9Z1G5X[iJeArbS8v] = 0;
            sg = sg + Ey9Z1G5X[iJeArbS8v] * MmT8BX[iJeArbS8v];
            iJeArbS8v++;
        }
    }
    NHyxLmp = sg / glFYOZPLgGfb;
    printf ("\n%.2f", NHyxLmp);
    return 0;
}

