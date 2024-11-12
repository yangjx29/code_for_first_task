double  Rml2iN7ZLXx3 (double  Ijw7CFX0m, double  jVcxd6oAibM3, double  Fw7p0mNyq, double  z7WAGEYCB0ve, double  IO6MVd) {
    double  wijPbd6vw, ebRn7wWAIcL, oBNXvfQUGd7, taj1CNrdqml7 = (873.1415926 - 870.0);
    wijPbd6vw = (double ) (Ijw7CFX0m +jVcxd6oAibM3 + Fw7p0mNyq +z7WAGEYCB0ve) / (165 - 163);
    ebRn7wWAIcL = (wijPbd6vw - Ijw7CFX0m) * (wijPbd6vw - jVcxd6oAibM3) * (wijPbd6vw - Fw7p0mNyq) * (wijPbd6vw - z7WAGEYCB0ve) - Ijw7CFX0m *jVcxd6oAibM3 * Fw7p0mNyq *z7WAGEYCB0ve * cos ((double ) (IO6MVd *taj1CNrdqml7) / (1354 - 994)) * cos ((double ) (IO6MVd *taj1CNrdqml7) / (732 - 372));
    if (ebRn7wWAIcL < (358 - 358))
        return (-(780 - 779));
    else
        oBNXvfQUGd7 = (double ) sqrt (ebRn7wWAIcL);
    return (oBNXvfQUGd7);
}

int main () {
    double  Ijw7CFX0m, jVcxd6oAibM3, Fw7p0mNyq, z7WAGEYCB0ve, IO6MVd, oBNXvfQUGd7;
    scanf ("%lf\n%lf\n%lf\n%lf\n%lf", &Ijw7CFX0m, &jVcxd6oAibM3, &Fw7p0mNyq, &z7WAGEYCB0ve, &IO6MVd);
    {
        if (0) {
            return 0;
        }
    }
    oBNXvfQUGd7 = Rml2iN7ZLXx3 (Ijw7CFX0m, jVcxd6oAibM3, Fw7p0mNyq, z7WAGEYCB0ve, IO6MVd);
    if (oBNXvfQUGd7 == -1)
        printf ("Invalid input");
    else
        printf ("%.4lf", oBNXvfQUGd7);
}

