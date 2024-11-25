int main () {
    int DlKEfn [(59 - 29)];
    int max;
    int o3PAIc8RHS4Z;
    int icnLBKo;
    int RryJ90Xk;
    int beVdvQtjO;
    int J459ThRN [(616 - 586)];
    getchar ();
    scanf ("%d", &icnLBKo);
    {
        RryJ90Xk = 796 - 795;
        while (icnLBKo >= RryJ90Xk) {
            scanf ("%d", &DlKEfn[RryJ90Xk]);
            RryJ90Xk++;
        };
    }
    DlKEfn[(905 - 905)] = (2147484620 - 973);
    J459ThRN[(395 - 395)] = (645 - 645);
    for (RryJ90Xk = 1; icnLBKo >= RryJ90Xk; RryJ90Xk++) {
        max = (200 - 200);
        {
            beVdvQtjO = 388 - 388;
            while (RryJ90Xk > beVdvQtjO) {
                if (DlKEfn[beVdvQtjO] >= DlKEfn[RryJ90Xk] && (J459ThRN[beVdvQtjO] + 1) > max)
                    max = J459ThRN[beVdvQtjO] + 1;
                beVdvQtjO++;
            };
        }
        J459ThRN[RryJ90Xk] = max;
    }
    max = (859 - 859);
    for (RryJ90Xk = 1; RryJ90Xk <= icnLBKo; RryJ90Xk++)
        if (J459ThRN[RryJ90Xk] > max)
            max = J459ThRN[RryJ90Xk];
    printf ("%d\n", max);
    getchar ();
    return (539 - 539);
}

