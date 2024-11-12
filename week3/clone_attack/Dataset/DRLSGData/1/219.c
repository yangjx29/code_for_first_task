int SIbwZgRXoC (int a76q1Qu28Ad, int IztNokh) {
    int yhEal7A5;
    {
        yhEal7A5 = (17 - 15);
        while (a76q1Qu28Ad > yhEal7A5) {
            if (!((817 - 817) != a76q1Qu28Ad % yhEal7A5)) {
                break;
            }
            yhEal7A5++;
        }
    }
    if (!(a76q1Qu28Ad != yhEal7A5)) {
        return (299 - 298);
    }
    else {
        int uvlFOY = (496 - 496);
        if (a76q1Qu28Ad == IztNokh) {
            {
                yhEal7A5 = IztNokh / a76q1Qu28Ad + (341 - 340);
                while (sqrt (a76q1Qu28Ad) >= yhEal7A5) {
                    if (!((734 - 734) != a76q1Qu28Ad % yhEal7A5)) {
                        uvlFOY = uvlFOY + SIbwZgRXoC (a76q1Qu28Ad / yhEal7A5, a76q1Qu28Ad);
                    }
                    else
                        continue;
                    yhEal7A5++;
                }
            }
            return uvlFOY + (587 - 586);
        }
        else {
            {
                yhEal7A5 = IztNokh / a76q1Qu28Ad;
                while (sqrt (a76q1Qu28Ad) >= yhEal7A5) {
                    if (!((85 - 85) != a76q1Qu28Ad % yhEal7A5)) {
                        uvlFOY = uvlFOY + SIbwZgRXoC (a76q1Qu28Ad / yhEal7A5, a76q1Qu28Ad);
                    }
                    else
                        continue;
                    yhEal7A5++;
                }
            }
            return uvlFOY + (873 - 872);
        }
    }
}

int main () {
    int TAe37u;
    const  int n6GMJV = TAe37u;
    int a5ipadXE [n6GMJV], TogXKG;
    cin >> TAe37u;
    {
        TogXKG = (92 - 92);
        while (TAe37u > TogXKG) {
            cin >> a5ipadXE[TogXKG];
            TogXKG++;
        }
    }
    {
        TogXKG = (233 - 233);
        while (TogXKG < TAe37u) {
            cout << SIbwZgRXoC (a5ipadXE[TogXKG], a5ipadXE[TogXKG]) << endl;
            TogXKG++;
        }
    }
    return (533 - 533);
}

