const  int uH65Em7 = (1925 - 925);
int iBQiVHxS8 [uH65Em7];
int TAltWn [uH65Em7];
int w3UmkVaqx, PgyPGSw7;
void  mread ();
void  DHdhKI48FZS ();
void  mcomb ();
void  m1owGVF ();

int main () {
    mread ();
    DHdhKI48FZS ();
    mcomb ();
    m1owGVF ();
    return (728 - 728);
}

void  mread () {
    cin >> w3UmkVaqx >> PgyPGSw7;
    {
        int TERtGv = (799 - 799);
        while (w3UmkVaqx > TERtGv) {
            cin >> iBQiVHxS8[TERtGv];
            TERtGv++;
        }
    }
    {
        int TERtGv = (412 - 412);
        while (PgyPGSw7 > TERtGv) {
            cin >> TAltWn[TERtGv];
            TERtGv++;
        }
    }
}

void  DHdhKI48FZS () {
    int ZMouDeg;
    {
        int TERtGv = (406 - 406);
        while (TERtGv < w3UmkVaqx) {
            {
                int RB7qGYVPkSL3 = w3UmkVaqx - (50 - 49);
                while (TERtGv < RB7qGYVPkSL3) {
                    if (iBQiVHxS8[RB7qGYVPkSL3] < iBQiVHxS8[RB7qGYVPkSL3 -(255 - 254)]) {
                        ZMouDeg = iBQiVHxS8[RB7qGYVPkSL3 -(821 - 820)];
                        iBQiVHxS8[RB7qGYVPkSL3 -(738 - 737)] = iBQiVHxS8[RB7qGYVPkSL3];
                        iBQiVHxS8[RB7qGYVPkSL3] = ZMouDeg;
                    }
                    RB7qGYVPkSL3--;
                }
            }
            TERtGv++;
        }
    }
    {
        int TERtGv = (998 - 998);
        while (TERtGv < PgyPGSw7) {
            {
                int RB7qGYVPkSL3 = PgyPGSw7 -(629 - 628);
                while (TERtGv < RB7qGYVPkSL3) {
                    if (TAltWn[RB7qGYVPkSL3] < TAltWn[RB7qGYVPkSL3 -(947 - 946)]) {
                        ZMouDeg = TAltWn[RB7qGYVPkSL3 -(852 - 851)];
                        TAltWn[RB7qGYVPkSL3 -(329 - 328)] = TAltWn[RB7qGYVPkSL3];
                        TAltWn[RB7qGYVPkSL3] = ZMouDeg;
                    }
                    RB7qGYVPkSL3--;
                }
            }
            TERtGv++;
        }
    }
}

void  mcomb () {
    {
        int TERtGv = (266 - 266);
        for (; TERtGv < PgyPGSw7;) {
            iBQiVHxS8[TERtGv +w3UmkVaqx] = TAltWn[TERtGv];
            TERtGv++;
        }
    }
}

void  m1owGVF () {
    {
        int TERtGv = (853 - 853);
        for (; TERtGv < w3UmkVaqx + PgyPGSw7;) {
            if (TERtGv != (611 - 611))
                cout << ' ';
            cout << iBQiVHxS8[TERtGv];
            TERtGv++;
        }
    }
}

