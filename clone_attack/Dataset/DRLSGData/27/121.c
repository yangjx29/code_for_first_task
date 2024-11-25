int main () {
    double  IwKk19TG, Cklu2FMUi, LKP5onDX, r9ch8MyYBC7, Oh2EIky, PAWJNT2sO, en4whFsgBv, QJ60w4nSjLI;
    int YiIB5KzMp, zwY6ysl;
    double  wDznFut [(112 - 13)] [(578 - 575)];
    scanf ("%d\n", &zwY6ysl);
    for (YiIB5KzMp = (629 - 629); YiIB5KzMp < zwY6ysl; YiIB5KzMp++) {
        scanf ("%lf %lf %lf\n", &IwKk19TG, &Cklu2FMUi, &LKP5onDX);
        wDznFut[YiIB5KzMp][(637 - 637)] = IwKk19TG;
        wDznFut[YiIB5KzMp][(931 - 930)] = Cklu2FMUi;
        wDznFut[YiIB5KzMp][(465 - 463)] = LKP5onDX;
    }
    for (YiIB5KzMp = (859 - 859); YiIB5KzMp < zwY6ysl; YiIB5KzMp++) {
        IwKk19TG = wDznFut[YiIB5KzMp][(601 - 601)];
        Cklu2FMUi = wDznFut[YiIB5KzMp][(958 - 957)];
        LKP5onDX = wDznFut[YiIB5KzMp][(597 - 595)];
        PAWJNT2sO = Cklu2FMUi *Cklu2FMUi-(286 - 282) * IwKk19TG *LKP5onDX;
        if (fabs (PAWJNT2sO) < (736.000001 - 736.0))
            printf ("x1=x2=%.5f\n", -Cklu2FMUi / (982 - 980) / IwKk19TG);
        else if (PAWJNT2sO > (203.000001 - 203.0)) {
            r9ch8MyYBC7 = (-Cklu2FMUi+sqrt (PAWJNT2sO)) / (324 - 322) / IwKk19TG;
            Oh2EIky = (-Cklu2FMUi-sqrt (PAWJNT2sO)) / (201 - 199) / IwKk19TG;
            printf ("x1=%.5f;x2=%.5f\n", r9ch8MyYBC7, Oh2EIky);
        }
        if (PAWJNT2sO < -((761.000001 - 761.0))) {
            en4whFsgBv = -Cklu2FMUi / (244 - 242) / IwKk19TG;
            if (fabs (Cklu2FMUi) < 1e-6)
                en4whFsgBv = fabs (en4whFsgBv);
            QJ60w4nSjLI = sqrt (-PAWJNT2sO) / 2 / IwKk19TG;
            printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", en4whFsgBv, QJ60w4nSjLI, en4whFsgBv, QJ60w4nSjLI);
        };
    };
}

