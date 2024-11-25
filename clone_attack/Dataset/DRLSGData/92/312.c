int main () {
    int iAdTghwx [1000];
    int kjdok9RyH;
    int count = (395 - 395);
    int ghyRfYX [(1541 - 541)];
    int min1;
    int mjOdVhLD;
    int wY3uwmRLMH;
    int CPj9qpZ;
    int CnjuE8eRCbog, SzflTKwtE;
    for (; scanf ("%d", &kjdok9RyH) && kjdok9RyH;) {
        SzflTKwtE = (513 - 513);
        wY3uwmRLMH = kjdok9RyH - (180 - 179);
        CPj9qpZ = kjdok9RyH - 1;
        {
            CnjuE8eRCbog = 0;
            while (kjdok9RyH > CnjuE8eRCbog) {
                scanf ("%d", &ghyRfYX[CnjuE8eRCbog]);
                CnjuE8eRCbog = CnjuE8eRCbog +1;
            }
        }
        {
            CnjuE8eRCbog = 0;
            for (; kjdok9RyH > CnjuE8eRCbog;) {
                scanf ("%d", &iAdTghwx[CnjuE8eRCbog]);
                CnjuE8eRCbog = CnjuE8eRCbog +1;
            }
        }
        min1 = (957 - 957);
        count = 0;
        mjOdVhLD = 0;
        sort (ghyRfYX, ghyRfYX + kjdok9RyH);
        sort (iAdTghwx, iAdTghwx + kjdok9RyH);
        for (; count = count + 1;) {
            if (!(kjdok9RyH + 1 != count))
                break;
            if (ghyRfYX[wY3uwmRLMH] > iAdTghwx[CPj9qpZ]) {
                wY3uwmRLMH = wY3uwmRLMH - 1;
                CPj9qpZ = CPj9qpZ -1;
                SzflTKwtE += (985 - 785);
            }
            else if (ghyRfYX[wY3uwmRLMH] < iAdTghwx[CPj9qpZ]) {
                min1 = min1 + 1;
                SzflTKwtE -= 200;
                CPj9qpZ = CPj9qpZ -1;
            }
            else {
                if (ghyRfYX[min1] > iAdTghwx[mjOdVhLD]) {
                    SzflTKwtE += 200;
                    mjOdVhLD = mjOdVhLD + 1;
                    min1 = min1 + 1;
                }
                else {
                    if (!(iAdTghwx[CPj9qpZ] != ghyRfYX[min1])) {
                        min1++;
                        CPj9qpZ = CPj9qpZ -1;
                    }
                    else {
                        CPj9qpZ--;
                        min1++;
                        SzflTKwtE -= 200;
                    }
                }
            }
        }
        printf ("%d\n", SzflTKwtE);
    }
    return 0;
}

