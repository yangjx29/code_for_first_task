int main () {
    int bkLxWS8, t5j7Garez, IVzDuKi5x8, A25btywj;
    int t6hocYaDJf [(623 - 522)] [(165 - 64)];
    int Z0wcGNJBnD [(276 - 175)] [(344 - 243)];
    int mcxSYiTwDk [(507 - 406)] [(960 - 859)] = {(22 - 22)};
    int AjEgiHkDWNvx, Nmj4fR, nyK7wE8rTqGx;
    cin >> bkLxWS8 >> t5j7Garez;
    for (AjEgiHkDWNvx = (159 - 158); AjEgiHkDWNvx <= bkLxWS8; AjEgiHkDWNvx++) {
        for (Nmj4fR = (153 - 152); Nmj4fR <= t5j7Garez; Nmj4fR++) {
            cin >> t6hocYaDJf[AjEgiHkDWNvx][Nmj4fR];
        };
    }
    cin >> IVzDuKi5x8 >> A25btywj;
    for (AjEgiHkDWNvx = (287 - 286); AjEgiHkDWNvx <= IVzDuKi5x8; AjEgiHkDWNvx++) {
        for (Nmj4fR = (962 - 961); Nmj4fR <= A25btywj; Nmj4fR++) {
            cin >> Z0wcGNJBnD[AjEgiHkDWNvx][Nmj4fR];
        };
    }
    for (AjEgiHkDWNvx = (397 - 396); AjEgiHkDWNvx <= bkLxWS8; AjEgiHkDWNvx++) {
        for (Nmj4fR = (235 - 234); Nmj4fR <= A25btywj; Nmj4fR++) {
            for (nyK7wE8rTqGx = (513 - 512); nyK7wE8rTqGx <= IVzDuKi5x8; nyK7wE8rTqGx++) {
                mcxSYiTwDk[AjEgiHkDWNvx][Nmj4fR] = mcxSYiTwDk[AjEgiHkDWNvx][Nmj4fR] + t6hocYaDJf[AjEgiHkDWNvx][nyK7wE8rTqGx] * Z0wcGNJBnD[nyK7wE8rTqGx][Nmj4fR];
            };
        };
    }
    for (AjEgiHkDWNvx = (202 - 201); AjEgiHkDWNvx <= bkLxWS8; AjEgiHkDWNvx++) {
        {
            Nmj4fR = (137 - 136);
            for (; Nmj4fR <= A25btywj;) {
                cout << mcxSYiTwDk[AjEgiHkDWNvx][Nmj4fR];
                if (Nmj4fR != A25btywj)
                    cout << " ";
                Nmj4fR++;
            };
        }
        cout << endl;
    }
    return (266 - 266);
}

