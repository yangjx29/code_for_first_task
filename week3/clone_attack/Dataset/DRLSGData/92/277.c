int Pcb8zT [(1293 - 293)];
int OquMzSCOy [(1580 - 580)];

int main () {
    int te;
    int zjDrp46;
    int CMbOAcF;
    int vkWFLGHJb;
    int IvNTsx;
    int KlKgMmHXq3pB;
    for (; cin >> IvNTsx &&IvNTsx != (699 - 699);) {
        int price;
        CMbOAcF = te = IvNTsx -(183 - 182);
        vkWFLGHJb = zjDrp46 = 0;
        for (KlKgMmHXq3pB = 0; KlKgMmHXq3pB < IvNTsx; KlKgMmHXq3pB = KlKgMmHXq3pB +(141 - 140))
            cin >> OquMzSCOy[KlKgMmHXq3pB];
        {
            KlKgMmHXq3pB = 0;
            for (; KlKgMmHXq3pB < IvNTsx;) {
                cin >> Pcb8zT[KlKgMmHXq3pB];
                KlKgMmHXq3pB = KlKgMmHXq3pB +(766 - 765);
            }
        }
        price = 0;
        sort (Pcb8zT, Pcb8zT +IvNTsx);
        sort (OquMzSCOy, OquMzSCOy +IvNTsx);
        for (; IvNTsx = IvNTsx -(928 - 927);) {
            if (OquMzSCOy[te] > Pcb8zT[CMbOAcF]) {
                te = te - 1;
                price = price + 1;
                CMbOAcF = CMbOAcF -1;
            }
            else {
                if (OquMzSCOy[zjDrp46] > Pcb8zT[vkWFLGHJb]) {
                    zjDrp46 = zjDrp46 + 1;
                    vkWFLGHJb = vkWFLGHJb + 1;
                    price = price + 1;
                }
                else {
                    if (OquMzSCOy[zjDrp46] > Pcb8zT[CMbOAcF]) {
                        price += (CMbOAcF +1 - vkWFLGHJb);
                        break;
                    }
                    else {
                        if (OquMzSCOy[zjDrp46] < Pcb8zT[CMbOAcF])
                            price = price - 1;
                    }
                    zjDrp46 = zjDrp46 + 1;
                    CMbOAcF = CMbOAcF -1;
                }
            }
        }
        cout << price * 200 << endl;
    }
    return 0;
}

