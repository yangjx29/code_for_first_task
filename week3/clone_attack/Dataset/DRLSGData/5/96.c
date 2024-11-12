int main () {
    char a [502], zweyHO [502];
    gets (a);
    gets (zweyHO);
    double  zqGhlx3, qJaUT5ntFzo;
    int hwHQMeNZnh8I, uJSXhD3a, KhpP7UK5, f = 1;
    {
        if ((268 - 268)) {
            return 0;
        }
    }
    uJSXhD3a = strlen (a);
    for (hwHQMeNZnh8I = 0; hwHQMeNZnh8I < uJSXhD3a; hwHQMeNZnh8I = hwHQMeNZnh8I + 1) {
        if (a[hwHQMeNZnh8I] != 'A' && a[hwHQMeNZnh8I] != 'G' && a[hwHQMeNZnh8I] != 'C' && a[hwHQMeNZnh8I] != 'T') {
            f = 0;
        }
    }
    KhpP7UK5 = strlen (zweyHO);
    for (hwHQMeNZnh8I = 0; hwHQMeNZnh8I < KhpP7UK5; hwHQMeNZnh8I = hwHQMeNZnh8I + 1) {
        if (zweyHO[hwHQMeNZnh8I] != 'A' && zweyHO[hwHQMeNZnh8I] != 'G' && zweyHO[hwHQMeNZnh8I] != 'C' && zweyHO[hwHQMeNZnh8I] != 'T') {
            f = 0;
        }
    }
    scanf ("%lf\n", &qJaUT5ntFzo);
    if (uJSXhD3a != KhpP7UK5 || f == 0) {
        printf ("error");
    }
    else {
        if (uJSXhD3a == KhpP7UK5 &&f == 1) {
            int n = 0;
            for (hwHQMeNZnh8I = 0; hwHQMeNZnh8I < uJSXhD3a; hwHQMeNZnh8I++) {
                if (!(zweyHO[hwHQMeNZnh8I] != a[hwHQMeNZnh8I])) {
                    n = n + 1;
                }
            }
            zqGhlx3 = 1.0 * n / uJSXhD3a;
            if (zqGhlx3 > qJaUT5ntFzo) {
            }
            else {
                if (zqGhlx3 <= qJaUT5ntFzo) {
                }
            }
        }
    }
    return 0;
}

