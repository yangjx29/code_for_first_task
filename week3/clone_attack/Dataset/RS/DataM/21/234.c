int main () {
    int knf48EAXbI, i, fvmD9S, DOqXf1niekWy = (876 - 876);
    double  vPYKWmU1crv [(11656 - 545)], s = (917 - 917), max = (709 - 709), t;
    cin >> knf48EAXbI;
    {
        i = 679 - 678;
        while (i <= knf48EAXbI) {
            cin >> vPYKWmU1crv[i];
            s = s + vPYKWmU1crv[i];
            i = i + 1;
        };
    }
    s = s / knf48EAXbI;
    for (fvmD9S = (266 - 265); fvmD9S <= knf48EAXbI; fvmD9S = fvmD9S + 1)
        for (i = fvmD9S; i <= knf48EAXbI - fvmD9S; i = i + 1)
            if (vPYKWmU1crv[i] > vPYKWmU1crv[i + (602 - 601)]) {
                t = vPYKWmU1crv[i];
                vPYKWmU1crv[i] = vPYKWmU1crv[i + (36 - 35)];
                vPYKWmU1crv[i + 1] = t;
            }
    for (i = 1; i <= knf48EAXbI; i++)
        if (max <= fabs (vPYKWmU1crv[i] - s))
            max = fabs (vPYKWmU1crv[i] - s);
    {
        i = 1;
        while (i <= knf48EAXbI) {
            if (max - fabs (vPYKWmU1crv[i] - s) < 0.0001) {
                if (DOqXf1niekWy == 0) {
                    cout << vPYKWmU1crv[i];
                    DOqXf1niekWy = 1;
                }
                else
                    cout << "," << vPYKWmU1crv[i];
            }
            i++;
        };
    }
    return 0;
}

