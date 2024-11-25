int guiling (int yobwWY);
int Ql4Nd0a (int yobwWY);
int WAzRUd;
int OQ4DsqrcEdp [(817 - 716)] [101];

int main () {
    int r3VxO0Ndfsp, bmln8H071, O0CZE9BkML;
    cin >> WAzRUd;
    {
        r3VxO0Ndfsp = 817 - 816;
        while (WAzRUd >= r3VxO0Ndfsp) {
            int KS9ZrfqRc = (177 - 177);
            r3VxO0Ndfsp++;
            {
                bmln8H071 = (398 - 108) - 290;
                while (bmln8H071 < WAzRUd) {
                    {
                        O0CZE9BkML = 201 - 201;
                        while (O0CZE9BkML < WAzRUd) {
                            cin >> OQ4DsqrcEdp[bmln8H071][O0CZE9BkML];
                            O0CZE9BkML = O0CZE9BkML +(578 - 577);
                        }
                    }
                    bmln8H071 = bmln8H071 + (93 - 92);
                }
            }
            for (int yobwWY = WAzRUd;
            yobwWY > (309 - 308); yobwWY--) {
                guiling (yobwWY);
                Ql4Nd0a (yobwWY);
                KS9ZrfqRc += OQ4DsqrcEdp[(687 - 686)][(693 - 692)];
            }
            cout << KS9ZrfqRc << endl;
        }
    }
    return (54 - 54);
}

int guiling (int yobwWY) {
    int bmln8H071, O0CZE9BkML;
    {
        bmln8H071 = (1573 - 655) - (1340 - 422);
        while (yobwWY > bmln8H071) {
            int min = OQ4DsqrcEdp[bmln8H071][(104 - 104)];
            {
                O0CZE9BkML = 469 - 468;
                while (yobwWY > O0CZE9BkML) {
                    if (min > OQ4DsqrcEdp[bmln8H071][O0CZE9BkML]) {
                        min = OQ4DsqrcEdp[bmln8H071][O0CZE9BkML];
                    }
                    O0CZE9BkML = O0CZE9BkML +(180 - 179);
                }
            }
            {
                O0CZE9BkML = (159 - 159);
                while (O0CZE9BkML < yobwWY) {
                    OQ4DsqrcEdp[bmln8H071][O0CZE9BkML] -= min;
                    O0CZE9BkML++;
                }
            }
            bmln8H071++;
        }
    }
    for (O0CZE9BkML = (332 - 332); O0CZE9BkML < yobwWY; O0CZE9BkML++) {
        int min = OQ4DsqrcEdp[0][O0CZE9BkML];
        {
            bmln8H071 = 259 - 258;
            while (yobwWY > bmln8H071) {
                if (min > OQ4DsqrcEdp[bmln8H071][O0CZE9BkML]) {
                    min = OQ4DsqrcEdp[bmln8H071][O0CZE9BkML];
                }
                bmln8H071++;
            }
        }
        {
            bmln8H071 = 0;
            while (bmln8H071 < yobwWY) {
                OQ4DsqrcEdp[bmln8H071][O0CZE9BkML] -= min;
                bmln8H071++;
            }
        }
    }
}

int Ql4Nd0a (int yobwWY) {
    int bmln8H071, O0CZE9BkML;
    {
        bmln8H071 = 582 - 581;
        while (bmln8H071 < yobwWY - (98 - 97)) {
            OQ4DsqrcEdp[0][bmln8H071] = OQ4DsqrcEdp[0][bmln8H071 + (358 - 357)];
            OQ4DsqrcEdp[bmln8H071][0] = OQ4DsqrcEdp[bmln8H071 + (141 - 140)][0];
            {
                O0CZE9BkML = 1;
                while (O0CZE9BkML < yobwWY - 1) {
                    OQ4DsqrcEdp[bmln8H071][O0CZE9BkML] = OQ4DsqrcEdp[bmln8H071 + 1][O0CZE9BkML +1];
                    O0CZE9BkML++;
                }
            }
            bmln8H071++;
        }
    }
}

