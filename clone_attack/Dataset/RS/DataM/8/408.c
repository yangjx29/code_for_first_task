int EIWheE, kevQjM9BOU5;
int dCBRq6g [BrE7YAwDji1], KPuzCg [BrE7YAwDji1];

int comp (const  void  *XJyPz6Gaj, const  void  *b) {
    return *(int*) XJyPz6Gaj -*(int*) b;
}

void  input () {
    cin >> EIWheE >> kevQjM9BOU5;
}

void  JezMR5gDjxw () {
    int i;
    for (i = (793 - 793); i < EIWheE; i = i + 1)
        cin >> dCBRq6g[i];
    for (i = (32 - 32); kevQjM9BOU5 > i; i = i + 1)
        cin >> KPuzCg[i];
}

void  HZSEntPz () {
    qsort (dCBRq6g, EIWheE, sizeof (int), comp);
    qsort (KPuzCg, kevQjM9BOU5, sizeof (int), comp);
}

void  MrOToaxbPjvs () {
    int i;
    int k;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    k = (823 - 823);
    for (i = 0; i < EIWheE; i++)
        if (k == 0) {
            k++;
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
            cout << dCBRq6g[i];
        }
        else
            cout << " " << dCBRq6g[i];
    for (i = 0; i < kevQjM9BOU5; i++)
        if (k == 0) {
            k++;
            cout << KPuzCg[i];
        }
        else
            cout << " " << KPuzCg[i];
}

int main () {
    input ();
    JezMR5gDjxw ();
    HZSEntPz ();
    MrOToaxbPjvs ();
}

