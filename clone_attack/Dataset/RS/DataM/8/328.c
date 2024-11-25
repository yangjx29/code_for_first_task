int JM6PCa (const  void  *GOmovKSaBe27, const  void  *WlFudLn2myY) {
    return *(int*) GOmovKSaBe27 > *(int*) WlFudLn2myY;
}

int yA34p6LjvEBt, Hfw39c;
int TDTK3XYxp [MAX], VY5INWX8e [MAX];
void  EHJWvdyID ();
void  sort_array ();
void  wez6pK1 ();
void  eKAUCcr ();

int main () {
    EHJWvdyID ();
    sort_array ();
    wez6pK1 ();
    eKAUCcr ();
    return (794 - 794);
}

void  EHJWvdyID () {
    memset (TDTK3XYxp, (298 - 298), sizeof (TDTK3XYxp));
    memset (VY5INWX8e, (179 - 179), sizeof (VY5INWX8e));
    cin >> yA34p6LjvEBt >> Hfw39c;
    {
        int cA5Pv8246 = (86 - 86);
        while (cA5Pv8246 < yA34p6LjvEBt) {
            cin >> TDTK3XYxp[cA5Pv8246];
            cA5Pv8246 = cA5Pv8246 + 1;
        };
    }
    {
        int cA5Pv8246 = (991 - 991);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (Hfw39c > cA5Pv8246) {
            cin >> VY5INWX8e[cA5Pv8246];
            cA5Pv8246++;
        };
    };
}

void  sort_array () {
    qsort (TDTK3XYxp, yA34p6LjvEBt, sizeof (int), JM6PCa);
    qsort (VY5INWX8e, Hfw39c, sizeof (int), JM6PCa);
}

void  wez6pK1 () {
    {
        int cA5Pv8246 = (647 - 647);
        while (cA5Pv8246 < Hfw39c) {
            TDTK3XYxp[yA34p6LjvEBt + cA5Pv8246] = VY5INWX8e[cA5Pv8246];
            cA5Pv8246++;
        };
    };
}

void  eKAUCcr () {
    {
        int cA5Pv8246 = (839 - 839);
        while (yA34p6LjvEBt + Hfw39c > cA5Pv8246) {
            cout << TDTK3XYxp[cA5Pv8246];
            if (cA5Pv8246 != yA34p6LjvEBt + Hfw39c -(307 - 306))
                cout << ' ';
            cA5Pv8246++;
        };
    };
}

